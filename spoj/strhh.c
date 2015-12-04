#include <stdio.h>
#include <string.h>

int main() {
	char in[201];
	int len, i, t;
	scanf( "%d", &t );
	while ( t-- ) {
		scanf( "%s", &in );
		len = strlen( in );
		for ( i = 0; i < len / 2; i += 2 ) printf( "%c", in[i] );
		printf( "\n" );
	}
	return 0;
}
