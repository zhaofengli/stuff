#include <stdio.h>

unsigned long memory[1000][2];
unsigned long mempos = 0;

unsigned long f( unsigned long n ) {
	if ( n == 0 ) return 0;
	unsigned long a, b, c, fa, fb, fc, i;
	for ( i = 0; i < mempos; i++ ) {
		if ( memory[i][0] == n ) {
			return memory[i][1];
		}
	}
	a = f( n / 2 );
	b = f( n / 3 );
	c = f( n / 4 );
	mempos++;
	memory[mempos-1][0] = n;
	if ( a + b + c > n ) {
		memory[mempos-1][1] = a + b + c;
		return a + b + c;
	} else {
		memory[mempos-1][1] = n;
		return n;
	}
}

int main() {
	unsigned long n;
	while ( scanf( "%lu", &n ) != EOF ) {
		printf( "%lu\n", f( n ) );
	}
	return 0;
}
