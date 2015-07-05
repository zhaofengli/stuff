#include <stdio.h>

int main() {
	int t, ti;
	scanf( "%d", &t );
	for ( ti = 0; ti < t; ti++ ) {
		int x, y;
		scanf( "%d %d", &x, &y );
		if ( x == y ) { // upper
			if ( x % 2 == 0 ) printf( "%d\n", 2 * x );
			else printf( "%d\n", 2 * x - 1 );
		} else if ( x - y == 2 ) { // lower
			if ( x % 2 == 0 ) printf( "%d\n", 2 * x - 2 );
			else printf( "%d\n", 2 * x - 3 );
		} else {
			printf( "No Number\n" );
		}
	}
	return 0;
}
