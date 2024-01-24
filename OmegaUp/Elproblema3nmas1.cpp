#include <iostream>

using namespace std;

int main(){
	int r0, r1 = 0, r2;

	cin >> r0;
	r2 = r0;

	while ( r0 != 1 )
		if ( r0 % 2 == 0){
			r0 /= 2;
			r1++;
			
			if ( r0 > r2 ){
			    r2 = r0;
			}
			
		}
		else{
			r0 = r0 * 3 + 1;
			r1++;
			
			if ( r0 > r2 ){
			    r2 = r0;
			}
		}

		if ( r0 > r2 ){
			r2 = r0;
		}


	cout << r1 << ' ' << r2;

	return 0;
}