<?php
// Let's get some fizzy numbers!
// Public domain
function gen3( $digit ) {
	$x = '';
	$sum = 0;
	while ( $digit > 1 ) {
		$d = rand( 1, 9 ); // yes, I hate zero
		$sum += $d;
		$x .= (string)$d;
		$digit--;
	}
	// last digit
	if ( $sum % 3 == 0 ) {
		return $x . '3';
	} else {
		return $x . (string)(3 - $sum % 3);
	}
}
function batch( $count, $digits = 100 ) {
	echo $count . "\n";
	while ( $count ) {
		echo gen3( $digits ) . "\n";
		$count--;
	}
}

// Such numbers. So long. Very stress!!!
batch( 10, 5000 );
