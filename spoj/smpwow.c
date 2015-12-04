#include <stdio.h>

int main() {
	int x;
	scanf( "%d", &x );
	printf( "W" );
	while ( x-- ) printf( "o" );
	printf( "w\n" );
	return 0;
}
