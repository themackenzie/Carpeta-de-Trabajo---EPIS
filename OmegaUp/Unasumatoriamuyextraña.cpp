#include <iostream>

using namespace std;

int fxxr ( int r0, int r1 ){
	int r2 = 0;

	for ( int n = r0; n < r1 + 1; n++ ){
	    r2 += n;
	}


	return r2;

}



int main(){
	int r0, r1;
	cin >> r0;
	cin >> r1;

	cout << fxxr ( fxxr ( 1, r0 ), fxxr ( 1, r1 ) );

	return 0;
}