// GIMME AC THIS TIME U BASTARD!!!!
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
#define MEMORY_SIZE 5001
 
long memory[MEMORY_SIZE];
 
long long int wtf( char * in, int i ) {
	long long int p = 0;
	if ( i < MEMORY_SIZE && memory[i] != -1 ) {
		return memory[i];
	}
	if ( in[i] == '0' ) { // unsolvable
		return 0;
	} else if ( i == strlen( in ) - 1 ) { // last digit
		return 1;
	} else {
		if (
			in[i] == '1' ||
			( in[i] == '2' && in[i+1] != '7' && in[i+1] != '8' && in[i+1] != '9' )
		) {
			if ( in[i+1] != '0' ) {
				p += wtf( in, i + 1 );
			}
			if ( i < strlen( in ) - 2 ) {
				p += wtf( in, i + 2 );
			} else {
				p += 1;
			}
		} else {
			// there is only one possibility
			p += wtf( in, i + 1 );
		}
	}
	memory[i] = p;
	return p;
}
 
int main() {
	for ( ; ; ) {
		char in[5001];
		long long int p = 0;
		scanf( "%s", &in );
		if ( in[0] == '0' && strlen( in ) == 1 ) return 0;
		int i;
		for ( i = 0; i < MEMORY_SIZE; i++ ) { // clear memory
			memory[i] = -1;
		}
		p = wtf( in, 0 );
		printf( "%lld\n", p );
	}
}
 
