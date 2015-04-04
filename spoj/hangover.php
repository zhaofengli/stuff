<?php
function read() {
	return trim( fgets( STDIN ) );
}
function z( $n ) {
	$l = 0;
	for ( $i = 2; $i <= $n + 1; $i++ ) {
		$l += 1 / $i;
	}
	return $l;
}
$cache = array();
for ( ;; ) {
	$c = read();
	if ( $c == 0 ) return;
	for ( $i = 1; ; $i++ ) {
		if ( z( $i ) >= $c ) {
			echo "$i card(s)\n";
			break;
		}
	}
}
