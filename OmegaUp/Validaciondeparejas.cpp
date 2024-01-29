#include <iostream>

using namespace std;

int main(){
	bool r0 = false;
	int r1, r2;
	while ( r0 == false ){
		cin >> r1;
		cin >> r2;


		if ( r1 == r2 || ( r1 % 2 != 0 && r2 % 2 == 0 ) || ( r1 % 2 != 0 && r1 % 2 == 0 ) || r1 > 999 && r2 > 999 ){
			r0 = true;
			cout << "YA";

		}
		else{
			cout << "TODAVIA NO" << endl;
		}


	}


	return 0;
}