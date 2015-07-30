#include <stdio.h>

int main() {
	int t, ti;
	scanf( "%d", &t );
	for ( ti = 0; ti < t; ti++ ) {
		int lead;
		scanf( "%*lld %d", &lead );
		if ( lead == 0 )
			printf( "Airborne wins.\n" );
		else
			printf( "Pagfloyd wins.\n" );
	}
	return 0;
}

