#include <stdio.h>

int main() {
	int t;
	scanf( "%d", &t );
	while ( t-- ) {
		int l, c, h, w, ll, cc, ww;
		scanf( "%d %d %d %d", &l, &c, &h, &w );
		l = ( h + 1 ) * l + 1; 
		ll = l;
		while ( ll-- ) {
			printf( "*" );
			cc = c;
			while ( cc-- ) {
				ww = w;
				while ( ww-- ) {
					if ( ll % ( h + 1 ) == 0 ) printf( "*" );
					else printf( "." );
				}
				printf( "*" );
			}
			printf( "\n" );
		}
		printf( "\n" );
	}
	return 0;
}
