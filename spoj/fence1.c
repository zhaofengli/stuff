#include <stdio.h>
#include <math.h>

// Freaking CEs :/ Looks like they are using -std=c99 or something like that
// Or just submit as C++
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
	// L = pi * r
	// A = 0.5 * pi * r * r
	float l;
	for ( ; ; ) {
		scanf( "%f", &l );
		if ( !l ) return 0;
		l /= M_PI;
		printf( "%.*f\n", 2, 0.5 * M_PI * l * l );
	}
}
