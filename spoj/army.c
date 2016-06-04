#include <stdio.h>
#include <stdlib.h>

int cmpfunc( const void * a, const void * b ) {
	return ( *(int *)a - *(int *)b );
}

int main() {
	int t, ti, i;
	scanf( "%d", &t );
	for ( ti = 1; ti <= t; ti++ ) {
		int ng, nm, lg = 0, lm = 0;
		int * god;
		int * mecha;
		scanf( "%d %d", &ng, &nm );
		god = (int *)malloc( ng * sizeof( int ) );
		mecha = (int *)malloc( nm * sizeof( int ) );
		for ( i = 0; i < ng; i++ ) {
			scanf( "%d", &god[i] );
		}
		for ( i = 0; i < nm; i++ ) {
			scanf( "%d", &mecha[i] );
		}
		qsort( god, ng, sizeof( int ), cmpfunc );
		qsort( mecha, nm, sizeof( int ), cmpfunc );
		while ( ( lg < ng ) && ( lm < nm ) ) {
			if ( god[lg] >= mecha[lm] ) {
				// kill mecha's
				lm++;
			} else {
				// kill god's
				lg++;
			}
		}
		if ( lg == ng ) {
			printf( "MechaGodzilla\n" );
		} else {
			printf( "Godzilla\n" );
		}
		free( god );
		free( mecha );
	}
	return 0;
}

