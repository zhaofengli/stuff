<?php
/*
Steps to test:
1. Run the script on your own computer with the `php` command (It should work, with 200 in 'http_code')
2. Run the script on Tool Labs with the `php` commands (It should also work)
3. Copy the script into your public_html and access it from your browser (It should fail with 0 in 'http_code')
*/

error_reporting( E_ALL );
$url = "http://www.geoffreylandis.com/vacuum.html";
$curl = curl_init( $url );
curl_setopt( $curl, CURLOPT_HEADER, true );
curl_setopt( $curl, CURLOPT_RETURNTRANSFER, true );
curl_setopt( $curl, CURLOPT_FOLLOWLOCATION, true );
curl_setopt( $curl, CURLOPT_MAXREDIRS, 10 );
curl_setopt( $curl, CURLOPT_TIMEOUT, 10 );
curl_exec( $curl );
var_dump( curl_getinfo( $curl ) );
