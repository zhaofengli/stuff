<?php
// Public domain
function read() {
	return trim( fgets( STDIN ) );
}
function test( $land, $x, $y, $a ) {
	for ( $ax = $x; $ax <= $x + $a - 1 ; $ax++ ) {
		for ( $ay = $y; $ay <= $y + $a - 1; $ay++ ) {
			if ( $land[$ax][$ay] == "#" ) return false;
		}
	}
	return true;
}
$t = read(); // test cases
for ( $ti = 1; $ti <= $t; $ti++ ) {
	$n = read(); // land is N x N
	$land = array();
	for ( $ni = 1; $ni <= $n; $ni++ ) {
		$land[] = str_split( read() );
	}
	$largest = 0;
	for ( $a = 1; $a <= $n; $a++ ) { // test square is A x A
		// fit the test square into the land
		for ( $ax = 0; $ax <= $n - $a; $ax++ ) {
			for ( $ay = 0; $ay <= $n - $a; $ay++ ) {
				if ( test( $land, $ax, $ay, $a ) ) {
					$largest = $a;
				}
			}
		}
	}
	echo $largest . "\n";
}
