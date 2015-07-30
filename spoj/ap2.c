#include <stdio.h>

int main() {
	int t, ti;
	scanf( "%d", &t );
	for ( ti = 0; ti < t; ti++ ) {
		long long a, b, c, n, d ,i;
		scanf( "%lld", &a );
		scanf( "%lld", &b );
		scanf( "%lld", &c );
		n = ( 2 * c ) / ( a + b );
		d = ( b - a ) / ( n - 5 );
		printf( "%lld\n", n );
		for ( i = 1; i < n; i++ ) {
			printf( "%lld ", a + ( i - 3 ) * d );
		}
		printf( "%lld\n", a + ( i - 3 ) * d );
	}
	return 0;
}

