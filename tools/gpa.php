<?php
$total = 750;
$grades = array( 0, 0, 0, 0, 0, 0 );
$heavy = array( 0, 1, 2 );
$heavyScore = 150;
$unweightedSum = 0;
foreach ( $grades as $key => $grade ) {
	if ( in_array( $key, $heavy ) ) {
		$unweightedSum += $grade / $heavyScore * 100;
	} else {
		$unweightedSum += $grade;
	}
}
$weightedSum = array_sum( $grades );
$perc = $weightedSum / $total;
$gpa = $perc * 4;
$uperc = $unweightedSum / ( count( $grades ) * 100 );
$ugpa = $uperc * 4;
echo "%: $perc\nGPA: $gpa/4\nUnweighted %: $uperc\nUnweighted GPA: $ugpa/4\n";
