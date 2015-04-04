#include <stdio.h>

int main() {
	for ( ;; ) {
		int a1, a2, a3;
		scanf( "%d %d %d", &a1, &a2, &a3 );
		if ( a1 == a3 && a1 == 0 ) return 0;
		else if ( ( a2 - a1 ) == ( a3 - a2 ) ) {
			printf( "AP %d\n", 2 * a3 - a2 );
		} else if ( ( a2 / a1 ) == ( a3 / a2 ) ) {
			printf( "GP %d\n", a3 * a3 / a2 );
		}
	}
}
