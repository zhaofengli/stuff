#include <stdio.h>

int main() {
	long int t, ti;
	scanf( "%ld", &t );
	for ( ti = 1; ti <= t; ti++ ) {
		long long int a, p5 = 5, z = 0;
		scanf( "%lld", &a );
		while ( p5 <= a ) {
			if ( a / p5 ) z += a / p5;
			else break;
			p5 *= 5;
		}
		printf( "%lld\n", z );
	}
	return 0;
}
