// You won't understand this mess...
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char in[10*101];
	char a[10*101];
	while ( scanf( "%s", &in ) != EOF ) {
		if ( strlen( in ) == 1 && in[0] == '1' ) {
			printf( "1\n" );
			continue;
		}
		strcpy( &a[1], in );
		a[0] = '0';
		int i, x, n = 0, t = 0, p = 1, b = 2;
		for ( i = strlen( a ) - 1; i >= 0; i-- ) {
			x = 2 * ( a[i] - '0' );
			a[i] = ( x % 10 ) + '0';
			a[i] += n;
			n = x / 10;
		}
		while ( t || p == 1 ) {
			x = a[strlen( a )-p] - '0';
			if ( t ) {
				b++;
				t = 0;
			}
			if ( x < b ) {
				t = 1;
				x += 10;
			}
			a[strlen( a )-p] = x - b + '0';
			b = 0;
			p++;
		}
		for ( i = 0; i < strlen( a ); i++ ) {
			if ( a[i] != '0' ) {
				strcpy( a, &a[i] );
				break;
			}
		}
		printf( "%s\n", a );
	}
	return 0;
}
