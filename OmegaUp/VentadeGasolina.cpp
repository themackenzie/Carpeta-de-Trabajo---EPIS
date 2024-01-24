#include <iostream>

using namespace std;

int main(){
	int r0, r1, r2, r3;

	cin >> r0;
	cin >> r2;

	r1 = r0;

	for ( int n = 0; n < 7; n++ ){
		cin >> r3;

		r1 -= r2 * r3;
		if ( n + 1 < 7){
			cout << r1 << ' ';
		}
		else{
			cout << r1;
		}
		r1 += r0;
	}

	return 0;
}