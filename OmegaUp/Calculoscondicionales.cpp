#include <iostream>

using namespace std;

int main(){
	int r0, r1 = 0;

	cin >> r0;

	if ( r0 % 2 == 0 ){
		r0 /= 2;
		r1++;
	}
	else{
		r0 += 1;
		r1++;
	}
	if ( r0 > 99){
		r0 /= 100;
		r1++;
	}
	else if ( r0 > 9 && r0 < 100 ){
		r0 /= 10;
		r1++;
	}
	if ( r0 % 3 == 0){
		r0 --;
		r1 ++;
	}

	cout << r0 << ' ' << r1;



	return 0;
}