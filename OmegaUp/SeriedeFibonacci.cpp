#include <iostream>

using namespace std;

int idx ( int r5[], int r1 ){
	cout << r5[10];


	for ( int n = 0; n < sizeof ( r0 ) / 4; n++){
		if ( r0[n] == r1 ){
			cout << r0[n] << ' ' << r1 << endl;
			return n;

		}


	}

	return 0;

}



int main(){
	int r0 = 0, r1 = 1, r2 = 0, r3[11];


	for ( int n = 0; n < 11; n++ ){
		r3[n] = r1;

		r2 = r1 + r0;
		r0 = r1;
		r1 = r2;


	}


	r0 = idx ( r3, r1 );
	r1 = idx ( r3, r2 );

	cout << r0 << r1;



	return 0;
}