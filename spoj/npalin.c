#include <stdio.h>
#include <stdlib.h>

int main() {
	long input, n;
	int i, digits = 0;
	int * digit;

	scanf( "%ld", &input );
	// how many digits are there?
	n = input;
	while ( n ) {
		n /= 10;
		digits++;
	}
	// allocate memory
	digit = (int *)malloc( digits * sizeof( int ) );
	// put the digits into the array
	n = input;
	for ( i = 0; i < digits; i++ ) {
		digit[i] = n % 10;
		n /= 10;
	}
	// is it palindrome?
	for ( i = 0; i < digits; i++ ) {
		if ( digit[i] != digit[digits-i-1] ) {
			printf( "0\n" );
			return 0;
		}
	}
	printf( "1\n" );
	return 0;
}
