#include <iostream>

using namespace std;


int main(){
	int r0, r1 = 0, r2 = 1;
	cin >> r0;

	while ( r1 < r0 ){
		r1 += r2 + 7;


		if ( r1 < r0 ){
			r2++;
		}

	}

	cout << r2;


	return 0;
}