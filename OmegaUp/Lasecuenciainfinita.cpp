#include <iostream>

using namespace std;

int main(){
	int r0, r1[8] = {1, 2, 3, 4, 5, 4, 3, 2};
	cin >> r0;

	for ( int n = 0; n < r0; n++ ){
		if ( n > 7 ){
			cout << r1[n - 8] << ' ';
		}
		else{
			cout << r1[n] << ' ';
		}

	}


	return 0;
}