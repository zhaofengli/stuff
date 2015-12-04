#include <stdio.h>

int main() {
	int t;
	scanf( "%d", &t );
	while ( t-- ) {
		int l, c, cc, x = 0;
		scanf( "%d %d", &l, &c );
		while ( l-- ) {
			cc = c;
			while ( cc-- ) {
				if ( !x ) printf( "*" );
				else printf( "." );
				x ^= 1;
			}
			if ( c % 2 == 0 ) x ^= 1;
			printf( "\n" );
		}
		printf( "\n" );
	}
	return 0;
}
