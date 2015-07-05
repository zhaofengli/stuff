#include <stdio.h>
#include <string.h>

int main() {
	for ( ; ; ) {
		int col, row, len, ci, ri, pos = 0;
		char str[201], orig[201];
		scanf( "%d", &col );
		if ( col == 0 ) { return 0; }
		scanf( "%s", &str );
		len = strlen( str );
		for ( ci = 0; ci < col; ci++ ) {
			row = 1;
			for ( ri = 0; ri < len; ri += col ) {
				if ( row % 2 == 0 ) {
					orig[pos] = str[ri+col-1-ci];
				} else {
					orig[pos] = str[ri+ci];
				}
				pos++;
				row++;
			}
		}
		orig[len] = '\0';
		printf( "%s\n", orig );
	}
}
