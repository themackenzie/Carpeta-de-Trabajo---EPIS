#include <iostream>

using namespace std;

int main(){
	float r0, r1, r2;

	cin >> r0;
	cin >> r1;
	cin >> r2;

	if ( r1 == 0 ){
		cout << "indefinido";
	}
	else if ( r2 > 0 ){
		cout << r0 / r1 + r2 << ' ' << r0 / r1 - r2;
	}
	else{
		cout << r0 / r1 + r2;
	}

	return 0;
}