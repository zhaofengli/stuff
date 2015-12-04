#include <stdio.h>
#include <string.h>

long climb( char * tree, long pos, long len, long * endpos ) {
	long length = 0; // the length beyond this node/leave
	if ( pos >= len ) { // out of bound
		return 0; // nothing below...
	}
	if ( tree[pos] == 'l' ) { // this is a leave
		*endpos = pos;
		return 0; // nothing below...
	} else { // this is a node
		long end1 = pos, l1, l2;
		length++;
		l1 = climb( tree, pos + 1, len, &end1 );
		l2 = climb( tree, end1 + 1, len, endpos );
		if ( l1 > l2 ) length += l1;
		else length += l2;
	}
	return length;
}

int main() {
	int t;
	for ( scanf( "%d", &t ); t; t-- ) {
		char in[10001];
		long len, temp;
		scanf( "%s", &in );
		len = strlen( in );
		printf( "%ld\n", climb( in, 0, len, &temp ) );
	}
	return 0;
}
