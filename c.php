<?php
// ...because you don't believe it.
function c( $m, $n ) {
	$a=1; $b=1;
	for ( $i = $n; $i >= $n - $m+1; $i-- )
		$a *= $i;
	for ( $i = $m; $i >= 1; $i-- )
		$b *= $i;
	return $a / $b;
}
$o = 0;
for ( $i = 3; $i <= 20; $i++ )
	$o+=c(3,$i);
echo $o;

echo " A:" . c( 3, 21 ) . " B:" . c( 3, 20 ) . " C:" . c( 4, 20 ) . " D:" . c( 4, 21 ) . "\n";
