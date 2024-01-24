#include <iostream>

using namespace std;

int main(){
	int r0, r1, r2, r3 = 0;

	cin >> r0;
	cin >> r1;
	cin >> r2;

	for ( int n = 1; n < r0 + 1; n++ ){
		if ( n % 2 != 0 ){
			r3 += n;
		}
	}
	
	
	cin >> r3;

	for ( int n = 4; n < r1 + 1; n * n ){
		r3 -= n;
	}


	while ( r3 % r2 == 0 ){
		r3 /= r2;
	}


	cout << r3;

	return 0;
}