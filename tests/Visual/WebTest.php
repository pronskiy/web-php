<?php

namespace phpweb\Test\Visual;

use Facebook\WebDriver\WebDriverDimension;
use PHPUnit\Framework;
use RuntimeException;
use Symfony\Component\Panther\Client;
use Symfony\Component\Panther\PantherTestCase;

#[Framework\Attributes\CoversNothing]
class WebTest extends PantherTestCase
{
    #[Framework\Attributes\DataProvider('provideUrl')]
    public function testPage(string $url): void
    {
        $httpHost = getenv('HTTP_HOST');

        if (!is_string($httpHost)) {
            throw new RuntimeException('Environment variable "HTTP_HOST" is not set.');
        }

        $client = Client::createChromeClient(__DIR__ . '/../../drivers/chromedriver', null, ['--disable-dev-shm-usage --window-size=1400,900 --no-sandbox --headless --hide-scrollbars'], 'http://' . $httpHost);
        $client->request('GET', $url);

        $width = $client->executeScript('return document.documentElement.scrollWidth');
        $height = $client->executeScript('return document.documentElement.scrollHeight');

        $size = new WebDriverDimension($width, $height);
        $client->manage()->window()->setSize($size);

        $client->takeScreenshot('tests/screenshots/' . $url . '.png');
    }

    public static function provideUrl(): array
    {
        return [
            ['/index.php'],
            ['/downloads'],
            ['/docs.php'],
            ['/get-involved'],
            ['/support'],
            ['/releases/8.3/en.php'],
        ];
    }
}
