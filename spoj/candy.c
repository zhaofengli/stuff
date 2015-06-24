// Too young too simple... xD

#include <stdio.h>
#include <stdlib.h>

int main() {
	for ( ;; ) {
		int n, i, sum = 0;
		int * bag;
		scanf( "%d", &n );
		if ( n == -1 ) return 0;
		
		bag = (int *)malloc( n * sizeof( int ) );

		for ( i = 0; i < n; i++ ) {
			scanf( "%d", &bag[i] );
			sum += bag[i];
		}

		if ( sum % n ) { // impossible
			// no candies for ya, sorry
			printf( "-1\n" );
			continue;
		} else { // possible
			int moves = 0, avg = sum / n;
			for ( i = 0; i < n; i++ ) {
				if ( bag[i] > avg ) {
					moves += bag[i] - avg;
				}
			}
			printf( "%d\n", moves );
		}
		free( bag );
	}
	return 0;
}
