#include <stdio.h>

int main() {
	int t, ti;
	scanf( "%d", &t );
	for ( ti = 0; ti < t; ti++ ) {
		long long int c, t = 0, ci, tmp;
		scanf( "%lld", &c );
		for ( ci = 0; ci < c; ci++ ) {
			scanf( "%lld", &tmp );
			t += tmp;
			t = t % c;
		}
		if ( t == 0 ) {
			printf( "YES\n" );
		} else {
			printf( "NO\n" );
		}
	}
}
