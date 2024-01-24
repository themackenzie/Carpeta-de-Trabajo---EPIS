#include <iostream>

using namespace std;

void checkk ( int r0 ){
	if ( r0 % 4 == 0 && ( r0 % 100 != 0 || r0 % 400 == 0 ) ){
		cout << 29;
	}
	else{
		cout << 28;
	}

}


int main(){
	int r0, r1, r2, r3;
	
	cin >> r0;
	cin >> r1;
	cin >> r2;
	cin >> r3;

	checkk ( r0 );
	cout << ' ';
	checkk ( r1 );
	cout << ' ';
	checkk ( r2 );
	cout << ' ';
	checkk ( r3 );

	return 0;
}