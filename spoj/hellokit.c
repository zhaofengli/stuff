#include <stdio.h>
#include <string.h>

int main() {
	for ( ; ; ) {
		char word[30];
		int rep, len, shift, pos;
		scanf( "%s", &word );
		if ( word[0] == '.' ) return 0;
		len = strlen( word );
		scanf( "%d", &rep );
		for ( shift = 0; shift < len; shift++ ) {
			for ( pos = 0; pos < len * rep; pos++ ) {
				printf( "%c", word[(pos+shift)%len] );
			}
			printf( "\n" );
		}
	}
}
