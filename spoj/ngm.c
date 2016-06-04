#include <stdio.h>

int main() {
	long long ago; // there is a galaxy far far away...
	scanf( "%lld", &ago );
	if ( 0 == ago % 10 ) printf( "2\n" );
	else printf( "1\n%d\n", ago % 10 );
	return 0;
}
