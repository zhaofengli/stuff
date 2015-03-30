<?php
// Moves MP3 files downloaded via Baidu Music
// By Zhaofeng Li - Public domain
$pattern = "/(?'artist'[^-]+)-(?'album'[^-]+)-(?'title'[^-]+)-/";
$dir = "/sdcard/Baidu_music/download";
$dest = "/sdcard/Music";
$files = scandir( $dir );
foreach ( $files as $file ) {
	if ( preg_match( $pattern, $file, $m ) ) {
		if ( strpos( $m['artist'], "," ) ) continue;
		$destdir = $dest . "/{$m['artist']}/{$m['album']}";
		if ( !is_dir( $destdir ) ) {
			echo "Creating $destdir\n";
			mkdir( $destdir, 0777, true );
		}
		$target = $destdir . "/{$m['title']}.mp3";
		rename( "$dir/$file", $target );
		echo "Moved $dir/$file to $target\n";
	}
}


