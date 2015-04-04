// TLE - sad :/

#include <stdio.h>
#include <stdlib.h>

void getMostAndLeast( int * bag, int n, int * most, int * least ) {
	int i;
	for ( i = 0; i < n; i++ ) {
		if ( bag[i] > bag[*most] ) *most = i;
		if ( bag[i] < bag[*least] ) *least = i;
	}
	return;
}

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
			// let's do this!
			int moves = 0, most = n - 1, least = 0;
			do {
				getMostAndLeast( bag, n, &most, &least );
				bag[most]--;
				bag[least]++;
				moves++;
			} while ( bag[most] != bag[least] );
			printf( "%d\n", moves );
		}
		free( bag );
	}
	return 0;
}
