#include <stdio.h>
#include <stdlib.h>

int cmpfunc( const void * a, const void * b ) {
	return ( *(int*)b - *(int*)a );
}

int main() {
	int t, ti;
	scanf( "%d", &t );
	for ( ti = 1; ti <= t; ti++ ) {
		int s, f, fi;
		int * fs;
		scanf( "%d %d", &s, &f );
		fs = (int*)malloc( f * sizeof( int ) );
		for ( fi = 0; fi < f; fi++ ) {
			scanf( "%d", &fs[fi] );
		}
		printf( "Scenario #%d:\n", ti );
		qsort( fs, f, sizeof( int ), cmpfunc );
		int p = 0;
		for ( fi = 0; fi < f; fi++ ) {
			p += fs[fi];
			if ( p >= s ) {
				break;
			}
		}
		if ( p < s ) {
			printf( "impossible\n" );
		} else {
			printf( "%d\n\n", fi + 1 );
		}
		free( fs );
	}
	return 0;
}
