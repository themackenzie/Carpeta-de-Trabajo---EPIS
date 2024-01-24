#include <iostream>

using namespace std;

int main(){
	int r0 = 2018, r1 = 1, r2;

	cin >> r2;

	while ( r1 - 1 < r2 ){
		r1 *= 2;
		r0 += 1;
	}

	cout << r0;


	return 0;
}