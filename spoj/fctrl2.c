#include <stdio.h>

#define MAX_DIGIT 5000

int number[MAX_DIGIT];

int main() {
	int t, ti;
	scanf( "%d", &t );
	for ( ti = 1; ti <= t; ti++ ) {
		int i, p, a, in;
		for ( i = 0; i < MAX_DIGIT; i++ ) number[i] = -1; // clear
		scanf( "%d", &in );
		a = in;
		i = 0;
		number[0] = 1;
		for ( i = 1; i <= a; i++ ) {
			// number = number * i
			int x, t = 0;
			for ( p = 0; p < MAX_DIGIT; p++ ) {
				if ( number[p] == -1 ) {
					if ( t ) number[p] = 0;
					else break;
				}
				x = number[p] * i + t;
				number[p] = x % 10;
				t = x / 10;
			}
		}
		for ( i = p - 1; i >= 0; i-- ) {
			printf( "%d", number[i] );
		}
		printf( "\n" );
	}
}

