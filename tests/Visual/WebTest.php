<?php

namespace phpweb\Test\Visual;

use Facebook\WebDriver\WebDriverDimension;
use Generator;
use PHPUnit\Framework;
use RuntimeException;
use Symfony\Component\Panther\Client;
use Symfony\Component\Panther\PantherTestCase;

#[Framework\Attributes\CoversNothing]
class WebTest extends PantherTestCase
{
    protected static ?Client $client = null;

    public static function setUpBeforeClass(): void
    {
        $httpHost = getenv('HTTP_HOST');

        if (!is_string($httpHost)) {
            throw new RuntimeException('Environment variable "HTTP_HOST" is not set.');
        }

        self::$client = Client::createChromeClient(__DIR__ . '/../../drivers/chromedriver', null, ['--disable-dev-shm-usage --window-size=1400,900 --no-sandbox --headless --hide-scrollbars'], 'http://' . $httpHost);
    }

    public static function tearDownAfterClass(): void
    {
        self::$client = null;
    }

    #[Framework\Attributes\DataProvider('provideUrl')]
    public function testPage(string $url): void
    {
        self::$client->request('GET', $url);

        $width = self::$client->executeScript('return document.documentElement.scrollWidth');
        $height = self::$client->executeScript('return document.documentElement.scrollHeight');

        $size = new WebDriverDimension($width, $height);
        self::$client->manage()->window()->setSize($size);

        self::$client->takeScreenshot('tests/screenshots/' . $url . '.png');
    }

    public static function provideUrl(): Generator
    {
        $pathToRoot = realpath(__DIR__ . '/../..');

        $patterns = [
            $pathToRoot . '/*.php',
            $pathToRoot . '/archive/*.php',
            $pathToRoot . '/conferences/*.php',
            $pathToRoot . '/license/*.php',
            $pathToRoot . '/manual/*.php',
            $pathToRoot . '/manual/en/*.php',
            $pathToRoot . '/releases/*.php',
            $pathToRoot . '/releases/*/*.php',
            $pathToRoot . '/releases/*/*/*.php',
        ];

        foreach ($patterns as $pattern) {
            $pathsToFiles = glob($pattern);

            $paths = str_replace($pathToRoot, '', $pathsToFiles);

            foreach ($paths as $path) {
                yield $path => [
                    $path,
                ];
            }
        }
    }
}
