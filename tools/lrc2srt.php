<?php
// Okay, the music player in CM12 only supports srt lyrics files (they must have watched too many films), so...
// Public domain
function lrc2srt( $lrc ) {
	$lrc = explode( "\n", $lrc );
	$srt = "";
	$lines = array();
	foreach ( $lrc as $lrcl ) {
		if ( preg_match( "|\[(\d\d)\:(\d\d)\.(\d\d)\](.+)|", $lrcl, $m ) ) {
			$lines[] = array(
				'time' => "00:{$m[1]}:{$m[2]},{$m[3]}0", // convert to SubRip-style time
				'lyrics' => trim( $m[4] )
			);
		}
	}
	for ( $i = 0; $i < count( $lines ); $i++ ) {
		$n = $i + 1;
		$nexttime = isset( $lines[$n]['time'] ) ? $lines[$n]['time'] : "99:00:00,000";
		$srt .= "$n\n"
		     .  "{$lines[$i]['time']} --> {$nexttime}\n"
		     .  "{$lines[$i]['lyrics']}\n\n";
	}
	return $srt;
}
echo file_get_contents( $argv[2] );
