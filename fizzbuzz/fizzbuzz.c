/*
	FizzBuzz
	Throw large numbers at it!

	By Zhaofeng Li - Public domain
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int t;
	scanf( "%d", &t );
	while ( t ) {
		char * in;
		int len, sum = 0, i;
		scanf( "%ms", &in );
		len = strlen( in );
		i = len;
		while ( i ) {
			sum += in[i-1] - 48;
			i--;
		}
		if ( sum % 3 == 0 ) {
			printf( "Fizz" );
			in[0] = 'x';
		}
		if ( in[len-1] == '0' || in[len-1] == '5' ) {
			printf( "Buzz" );
			in[0] = 'x';
		}
		if ( in[0] == 'x' )
			printf( "\n" );
		free( in );
		t--;
	}
	return 0;
}
