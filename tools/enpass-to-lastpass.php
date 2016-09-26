<?php
/*
	Really, really dirty script to convert TXT files exported
	by Enpass to CSV files accepted by Lastpass

	Sorry about the mess :P
*/
$pass = array();
$cur = array();
$txt = explode( "\n", file_get_contents( $argv[1] ) );
foreach ( $txt as $line ) {
	$line = trim( $line );
	$l = explode( " : ", $line );
	switch ( $l[0] ) {
		case "Title":
			// a new entry
			if ( !empty( $cur ) ) {
				$pass[] = $cur;
			}
			$cur = array( "name" => $l[1] );
			break;
		case "Username":
			$cur['username'] = $l[1];
			break;
		case "Email":
			$cur['extra'] = "Email: " . $l[1];
			break;
		case "Password":
			$cur['password'] = $l[1];
			break;
		case "Url":
			$cur['url'] = $l[1];
			break;
		default:
			echo "Unknown field {$l[0]} {$line}\n";
			break;
	}
}
$template = explode( ",", "url,type,username,password,hostname,extra,name,grouping" );
echo implode( ",", $template ) . "\n";
foreach ( $pass as $p ) {
	$l = "";
	foreach ( $template as $t ) {
		if ( !empty( $p[$t] ) ) {
			$l .= $p[$t];
		}
		$l .= ",";
	}
	echo rtrim( $l, "," ) . "\n";
}
