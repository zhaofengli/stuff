<?php
$r = STDIN;
for ( $t += fgets( $r ); $t; $t-- )
	if ( 0 > $i = -fgets( $r ) ) $s -= $i;
echo $s;
