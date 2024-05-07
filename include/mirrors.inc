<?php
/*
 Structure of an element of the $MIRRORS array:

  0  Country code
  1  Provider name
  2  Local stats flag (TRUE / FALSE)
  3  Provider URL
  4  Mirror type [see type constants]
  5  SQLite availability [was originally: local search engine flag] (TRUE / FALSE)
  6  Default language code
  7  Status [see status constants]

 List generated: 2020/04/18 20:42:29 GMT
*/

// Mirror type constants
define('MIRROR_DOWNLOAD', 0);
define('MIRROR_STANDARD', 1);
define('MIRROR_SPECIAL',  2);
define('MIRROR_VIRTUAL',  3);

// Mirror status constants
define('MIRROR_OK',          0);
define('MIRROR_NOTACTIVE',   1);
define('MIRROR_OUTDATED',    2);
define('MIRROR_DOESNOTWORK', 3);
$MIRRORS = array(
    "http://am1.php.net/" => array(
        "ARM", "ARMINCO Global Telecommunications", FALSE,
        "http://www.arminco.com/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://au1.php.net/" => array(
        "AUS", "Melbourne IT Pty Ltd", TRUE,
        "https://www.melbourneit.com.au/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://au2.php.net/" => array(
        "AUS", "Servers Australia Pty. Ltd.", TRUE,
        "http://www.serversaustralia.com.au/", MIRROR_STANDARD, FALSE,
        "en", MIRROR_OK),
    "http://at2.php.net/" => array(
        "AUT", "Yalwa Local Directory Services Austria", TRUE,
        "http://www.yalwa.at/", MIRROR_STANDARD, TRUE,
        "de", MIRROR_OK),
    "http://be2.php.net/" => array(
        "BEL", "Cu.be Solutions", FALSE,
        "http://www.cu.be/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://ca1.php.net/" => array(
        "CAN", "easyDNS", FALSE,
        "http://www.easydns.com/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://ca3.php.net/" => array(
        "CAN", "egateDOMAINS", FALSE,
        "http://www.egatedomains.ca/?RP=DJFEIWHFEWQ", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://cn2.php.net/" => array(
        "CHN", "Sina App Engine (SAE)", TRUE,
        "http://sae.sina.com.cn/", MIRROR_STANDARD, FALSE,
        "en", MIRROR_OK),
    "http://cz1.php.net/" => array(
        "CZE", "Czech Technical University in Prague", FALSE,
        "http://www.cvut.cz/", MIRROR_STANDARD, FALSE,
        "cs", MIRROR_OK),
    "http://cz2.php.net/" => array(
        "CZE", "Softaculous Ltd.", TRUE,
        "http://www.softaculous.com/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://dk2.php.net/" => array(
        "DNK", "Kobalt", TRUE,
        "http://kobalt.dk/", MIRROR_STANDARD, TRUE,
        "da", MIRROR_OK),
    "http://ee1.php.net/" => array(
        "EST", "Zone Media LLC", TRUE,
        "https://www.zone.ee/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://fi2.php.net/" => array(
        "FIN", "Planeetta Internet OY", TRUE,
        "http://www.planeetta.net/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://fr2.php.net/" => array(
        "FRA", "Crihan", FALSE,
        "http://www.crihan.fr/", MIRROR_STANDARD, TRUE,
        "fr", MIRROR_OK),
    "http://de2.php.net/" => array(
        "DEU", "Locanto Kleinanzeigen", TRUE,
        "http://www.locanto.de/", MIRROR_STANDARD, TRUE,
        "de", MIRROR_OK),
    "http://hk1.php.net/" => array(
        "HKG", "Nethub Online Limited", FALSE,
        "http://www.nethub.com.hk/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://hk2.php.net/" => array(
        "HKG", "Website Solution Web Hosting", FALSE,
        "http://www.website-solution.net/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://id1.php.net/" => array(
        "IDN", "PT Pasifik Satelit Nusantara", TRUE,
        "http://www.pesat.net.id", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://ir2.php.net/" => array(
        "IRN", "ParsPack.com", FALSE,
        "http://parspack.com/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://ie1.php.net/" => array(
        "IRL", "Yalwa - Local Directory Services Ireland", TRUE,
        "http://www.yalwa.ie/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://ie2.php.net/" => array(
        "IRL", "Hosting Ireland", TRUE,
        "http://www.hostingireland.ie/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://il1.php.net/" => array(
        "ISR", "SPD HOSTING LTD", FALSE,
        "http://www.spd.co.il/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://it2.php.net/" => array(
        "ITA", "Interalta", TRUE,
        "https://www.interalta.com/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://jp2.php.net/" => array(
        "JPN", "snotch", FALSE,
        "http://bloggers.ja.bz/sunouchi/", MIRROR_STANDARD, TRUE,
        "ja", MIRROR_OK),
    "http://lv1.php.net/" => array(
        "LVA", "Māris Ozoliņš", FALSE,
        "http://netparks.lv/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://lt1.php.net/" => array(
        "LTU", " UAB \"Interneto vizija\"", TRUE,
        "http://serveriai.lt/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://my1.php.net/" => array(
        "MYS", "MaxDedicated", TRUE,
        "http://www.maxdedicated.com/", MIRROR_STANDARD, FALSE,
        "en", MIRROR_OK),
    "http://mx1.php.net/" => array(
        "MEX", "uServers Mexico", FALSE,
        "http://www.uservers.net/?in=php", MIRROR_STANDARD, TRUE,
        "es", MIRROR_OK),
    "http://mx2.php.net/" => array(
        "MEX", "Universidad Autónoma Metropolitana Azcapotzalco", TRUE,
        "http://www.azc.uam.mx", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://nl1.php.net/" => array(
        "NLD", "Stream Service", FALSE,
        "http://www.streamservice.nl/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://nc1.php.net/" => array(
        "NCL", "Nautile", FALSE,
        "http://www.nautile.nc/", MIRROR_STANDARD, FALSE,
        "fr", MIRROR_OK),
    "http://nz2.php.net/" => array(
        "NZL", "Catalyst IT Ltd", FALSE,
        "http://catalyst.net.nz/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://no2.php.net/" => array(
        "NOR", "Verdens Gang AS", TRUE,
        "http://www.vg.no", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://pa1.php.net/" => array(
        "PAN", "Unidominios", TRUE,
        "http://www.unidominios.com/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://pl1.php.net/" => array(
        "POL", "WEBdev", TRUE,
        "http://webdev.pl/", MIRROR_STANDARD, TRUE,
        "pl", MIRROR_OK),
    "http://sg2.php.net/" => array(
        "SGP", "Xssist Group (Singapore) Pte Ltd", FALSE,
        "http://www.xssist.com/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://si1.php.net/" => array(
        "SVN", "DOMENAR.net", FALSE,
        "http://www.domenar.net/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://si2.php.net/" => array(
        "SVN", "Domene in gostovanje NEOSERV", TRUE,
        "http:///www.neoserv.si", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://es1.php.net/" => array(
        "ESP", "GRN Serveis Telematics", FALSE,
        "http://www.grn.es/classic", MIRROR_STANDARD, TRUE,
        "es", MIRROR_OK),
    "http://se2.php.net/" => array(
        "SWE", "SpaceDump IT AB", TRUE,
        "http://www.spacedump.se/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://ch1.php.net/" => array(
        "CHE", "ComunidadHosting", TRUE,
        "http://www.comunidadhosting.com/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://tw2.php.net/" => array(
        "TWN", "www.mirror.tw", TRUE,
        "http://www.mirror.tw/", MIRROR_STANDARD, TRUE,
        "tw", MIRROR_OK),
    "http://tr1.php.net/" => array(
        "TUR", "İstanbul Teknik Üniversitesi Bilgi İşlem Daire Başkanlığı", FALSE,
        "http://www.itu.edu.tr/", MIRROR_STANDARD, TRUE,
        "tr", MIRROR_OK),
    "http://tr2.php.net/" => array(
        "TUR", "DGN Teknoloji", TRUE,
        "http://www.dgn.net.tr/", MIRROR_STANDARD, TRUE,
        "tr", MIRROR_OK),
    "http://uk1.php.net/" => array(
        "GBR", "Camel Network", FALSE,
        "http://camelnetwork.com/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://uk3.php.net/" => array(
        "GBR", "CatN PHP Hosting", TRUE,
        "http://www.catn.com/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://tz1.php.net/" => array(
        "TZA", "Aptus Solutions", TRUE,
        "http://aptus.co.tz", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://php.net/" => array(
        "USA", "myracloud", FALSE,
        "https://myracloud.com", MIRROR_SPECIAL, FALSE,
        "en", MIRROR_OK),
    "http://us1.php.net/" => array(
        "USA", "NEXCESS.NET", FALSE,
        "http://www.nexcess.net/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://us2.php.net/" => array(
        "USA", "Hurricane Electric", FALSE,
        "http://he.net/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://us3.php.net/" => array(
        "USA", "C7 Data Centers", FALSE,
        "https://www.c7.com/", MIRROR_STANDARD, TRUE,
        "en", MIRROR_OK),
    "http://docs.php.net/" => array(
        "XXX", "EUKhost", FALSE,
        "http://eukhost.com/", MIRROR_SPECIAL, TRUE,
        "en", MIRROR_OK),
);
