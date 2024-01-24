#include <iostream>

using namespace std;

int main(){
	int r0 = 0, r1 = 0, r2 = 0, r3 = 0, r4;

	cin >> r4;

	while ( r3 < r4 ){
		r3++;

		if ( r3 == 50 ){
			r2 += 1;
			r3 = 0;
		}
		if ( r2 == 70 ){
			r1 += 1;
			r2 = 0;
		}
		if ( r1 == 12 ){
			r0 += 1;
			r0 = 0;
		}

	}


	cout << r0 << ' ' << r1 << ' ' << r2 << ' ' << r3;

	return 0;
}