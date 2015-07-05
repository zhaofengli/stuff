#include <stdio.h>
#include <stdlib.h>

int cmpfunc( const void * a, const void * b ) {
	return ( *(int*)b - *(int*)a );
}

int main() {
	int t, ti;
	scanf( "%d", &t );
	for ( ti = 0; ti < t; ti++ ) {
		int n, i, j, t = 0;
		int * men, * women;
		scanf( "%d", &n );
		men = (int*)malloc( n * sizeof( int ) );
		women = (int*)malloc( n * sizeof( int ) );
		for ( i = 0; i < n; i++ ) {
			scanf( "%d", &men[i] );
		}
		qsort( men, n, sizeof( int ), cmpfunc);
		for ( i = 0; i < n; i++ ) {
			scanf( "%d", &women[i] );
		}
		qsort( women, n, sizeof( int ), cmpfunc);
		for ( i = 0; i < n; i++ ) {
			t += men[i] * women[i];
		}
		printf( "%d\n", t );
		free( men );
		free( women );
	}
}
