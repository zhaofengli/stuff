#include <stdio.h>

int main() {
	int t, c, k, w;
	scanf( "%d", &t );
	while ( t ) {
		scanf( "%d %d %d", &c, &k, &w );
		if ( c * w > k ) { // duh
			printf( "no\n" );
		} else {
			printf( "yes\n" );
		}
		t--;
	}
	return 0;
}
