import {Page, test, expect} from '@playwright/test';
import {execSync} from "child_process";
import path = require('path');

const pathToRoot = path.resolve(__dirname, '../..')

async function processScreenshots({patterns, page}: { patterns: string[], page: Page }) {
    const httpHost = process.env.HTTP_HOST

    if (typeof httpHost !== 'string') {
        throw new Error('Environment variable "HTTP_HOST" is not set.')
    }

    for (const pattern of patterns) {
        const pathsToFiles = execSync(`ls ${pattern}`).toString().split('\n').filter(Boolean)

        for (const filePath of pathsToFiles) {
            const url = `http://${httpHost}/${path.relative(pathToRoot, filePath)}`

            await page.goto(url)
            await expect(page).toHaveScreenshot(
                `tests/screenshots/${path.relative(pathToRoot, filePath)}.png`,
                {
                    fullPage: true,
                    timeout: 10000,
                    stylePath: 'tests/Visual/regression_testing.css',
                }
            )
        }
    }
}

test('index.php', async ({page}) => {
    const patterns = [
        path.join(pathToRoot, 'index.php'),
    ]

    await processScreenshots({patterns: patterns, page: page})
})

// test('get screenshot of archive pages', async ({page}) => {
//     const patterns = [
//         path.join(pathToRoot, 'archive', '*.php'),
//     ]
//
//     await processScreenshots({patterns: patterns, page: page})
// })
//
// test('get conferences of root pages', async ({page}) => {
//     const patterns = [
//         path.join(pathToRoot, 'conferences', '*.php'),
//     ]
//
//     await processScreenshots({patterns: patterns, page: page})
// })
//
// test('get conferences of license pages', async ({page}) => {
//     const patterns = [
//         path.join(pathToRoot, 'license', '*.php'),
//     ]
//
//     await processScreenshots({patterns: patterns, page: page})
// })
//
// test('get conferences of manual pages', async ({page}) => {
//     const patterns = [
//         path.join(pathToRoot, 'manual', '*.php'),
//         path.join(pathToRoot, 'manual', 'en', '*.php'),
//     ]
//
//     await processScreenshots({patterns: patterns, page: page})
// })
//
// test('get conferences of releases pages', async ({page}) => {
//     const patterns = [
//         path.join(pathToRoot, 'releases', '*.php'),
//         path.join(pathToRoot, 'releases', '*', '*.php'),
//         path.join(pathToRoot, 'releases', '*', '*', '*.php')
//     ]
//
//     await processScreenshots({patterns: patterns, page: page})
// })
