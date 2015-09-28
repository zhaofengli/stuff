// You bigint gangsters are cheating XD
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char a[200];
char b[200];
char t[200];

void strip( char * a ) {
	int i;
	for ( i = 0; i < strlen( a ); i++ ) {
		if ( a[i] != '0' ) {
			strcpy( a, &a[i] );
			return;
		}
	}
}

void minus( char * a, char * b ) {
	int i, j, x, y, la, lb, t = 0;
	la = strlen( a );
	lb = strlen( b );
	for ( i = 1; i <= lb || t; i++ ) {
		x = a[la-i-j] - '0';
		if ( i <= lb ) {
			y = b[lb-i] - '0';
		} else {
			y = 0;
		}
		if ( t ) {
			y++;
			t = 0;
		}
		if ( x < y ) {
			t = 1;
			x += 10;
		}
		a[la-i-j] = x - y + '0';
	}
	strip( a );
}

void div2( char * a ) {
	int i = 0;
	int * r;
	r = (int *)malloc( sizeof( int ) * strlen( a ) );
	for ( i = 0; i < strlen( a ); i++ ) {
		int tr, x;
		if ( i > 0 ) { // we should check the remainders
			tr = r[i-1];
		} else {
			tr = 0;
		}
		x = 10 * tr + a[i] - '0';
		a[i] = x / 2 + '0';
		r[i] = x % 2;
	}
	strip( a );
}

int main() {
	int ti;
	for ( ti = 0; ti < 10; ti++ ) {
		scanf( "%s", &a );
		scanf( "%s", &b );
		strcpy( t, a );
		minus( a, b );
		div2( a ); // Now a = Natalia
		minus( t, a ); // Now t = Klaudia
		printf( "%s\n%s\n", t, a ); // Nicely done!
	}
	return 0;
}
