#include <stdio.h>

int main() {
	int t, ti;
	scanf( "%d", &t );
	for ( ti = 1; ti <= t; ti++ ) {
		scanf( "%d", &ti ); // useless
		char s[41];
		int i;
		int ttt = 0, tth = 0, tht = 0, thh = 0, htt = 0, hth = 0, hht = 0, hhh = 0;
		// TTT, TTH, THT, THH, HTT, HTH, HHT and HHH
		scanf( "%s", &s );
		for ( i = 0; i < 38; i++ ) {
			if ( s[i] == 'T' )
				if ( s[i+1] == 'T' )
					if ( s[i+2] == 'T' )
						ttt++;
					else
						tth++;
				else
					if ( s[i+2] == 'T' )
						tht++;
					else
						thh++;
			else
				if ( s[i+1] == 'T' )
					if ( s[i+2] == 'T' )
						htt++;
					else
						hth++;
				else
					if ( s[i+2] == 'T' )
						hht++;
					else
						hhh++;
		}
		printf( "%d %d %d %d %d %d %d %d %d\n", ti, ttt, tth, tht, thh, htt, hth, hht, hhh );
	}
	return 0;
}
