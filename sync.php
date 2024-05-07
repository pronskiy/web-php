<?php

$includes = ['countries.inc', 'last_updated.inc', 'mirrors.inc', 'pregen-confs.inc', 'pregen-events.inc', 'pregen-news.inc'];
$backends = ['ip-to-country.db', 'ip-to-country.idx'];

function downloadFiles($dir, $files, $baseurl): void
{
    foreach ($files as $file) {
        $url = $baseurl . $file;
        $path = $dir . '/' . $file;
        file_put_contents($path, file_get_contents($url));
    }
}

downloadFiles('include', $includes, 'https://www.php.net/include/');
downloadFiles('backend', $backends, 'https://www.php.net/backend/');
