#include <stdio.h>
int main() {
	int n, a, count;
	for ( ;; ) {
		scanf( "%d", &n );
		if ( !n ) return 0;
		count = 0;
		for ( a = 1; a <= n; a++ ) { // test square is A x A
			count += ( n - a + 1 ) * ( n - a + 1 );
		}
		printf( "%d\n", count );
	}
}
