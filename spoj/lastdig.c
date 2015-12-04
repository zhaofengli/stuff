#include <stdio.h>

int main() {
	int t, ti;
	scanf( "%d", &t );
	for ( ti = 1; ti <= t; ti++ ) {
		long long int a, b;
		scanf( "%lld %lld", &a, &b );
		if ( b == 0 ) {
			printf( "1\n" );
			continue;
		} else {
			b %= 4;
			if ( !b ) b = 4;
			long long int m = 1;
			while ( b ) {
				m *= a;
				m %= 10;
				b--;
			}
			printf( "%lld\n", m );
		}
	}
	return 0;
}
