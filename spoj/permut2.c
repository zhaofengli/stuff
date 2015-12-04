#include <stdio.h>
#include <stdlib.h>

int main() {
	for ( ; ; ) {
		long i, n, * p;
		scanf( "%ld", &n );
		if ( !n ) return 0;
		p = (long*)malloc( n * sizeof( long ) );
		for ( i = 0; i < n; i++ ) scanf( "%d", &p[i] );
		for ( i = 0; i < n; i++ ) {
			if ( i != p[p[i]-1] - 1 ) {
				printf( "not ambiguous\n" );
				break;
			}
		}
		if ( i == n ) printf( "ambiguous\n" );
	}
}
