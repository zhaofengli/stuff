#include <stdio.h>

int main() {
	int t;
	scanf( "%d", &t );
	while ( t-- ) {
		int l, c, ll, cc;
		scanf( "%d %d", &l, &c );
		l = 3 * l + 1; 
		ll = l;
		while ( ll-- ) {
			printf( "*" );
			cc = c;
			while ( cc-- ) {
				if ( ll % 3 == 0 ) printf( "***" );
				else printf( "..*" );
			}
			printf( "\n" );
		}
		printf( "\n" );
	}
	return 0;
}
