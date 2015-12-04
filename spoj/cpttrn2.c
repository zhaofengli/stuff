#include <stdio.h>

int main() {
	int t;
	scanf( "%d", &t );
	while ( t-- ) {
		int l, c, ll, cc;
		scanf( "%d %d", &l, &c );
		ll = l;
		while ( ll-- ) {
			cc = c;
			while ( cc-- ) {
				if ( !ll || !cc || cc == c - 1 || ll == l - 1 ) printf( "*" );
				else printf( "." );
			}
			printf( "\n" );
		}
		printf( "\n" );
	}
	return 0;
}
