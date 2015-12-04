<?php
$domains = array(
	"wikidata.org",
	"www.wikidata.org"
);

$projects = array(
	"wikipedia" => array(
		"en", "zh", "fr", "de", "simple"
	),
	"wiktionary" => array(
		"en", "zh"
	),
	"wikimedia" => array(
		"wikitech", "commons", "meta", "bits", "parsoid-lb.eqiad"
	),
	"wmflabs" => array(
		"tools", "tools-static"
	),
);

foreach ( $projects as $project => $languages ) {
	$domains[] = "$project.org";
	foreach ( $languages as $language ) {
		$domains[] = "$language.$project.org";
	}
}

echo "# IPs of Wikimedia servers (generated on " . date("Y-m-d H:i:s") . ")\n";
echo "# *nix users: Paste everything into /etc/hosts\n";
echo "# Windows users: Paste everything into C:\Windows\System32\Drivers\etc\hosts\n";

foreach ( $domains as $domain )
	echo gethostbyname( $domain ) . "\t$domain\n";

