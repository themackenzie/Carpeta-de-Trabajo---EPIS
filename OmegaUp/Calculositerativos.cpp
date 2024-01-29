#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int r0, r1, r2, r3 = 0;
	cin >> r0;
	cin >> r1;
	cin >> r2;


	for ( int n = 1; n < r0 + 1; n++ ){
		if ( n % 2 != 0 ){
			r3 += n;
			
		}
		
		
	}


	for ( int n = 1; n < r1 + 1; n++ ){
		for ( int m = 0; pow ( 2, m ) <= n; m++ ){
			if ( n == pow ( 2, m ) ){
				r3 -= n;
				
			}


		}


	}


	while ( r3 % r2 == 0 ){
		cout << r3 << ' ' << r2 << endl;
		cout << r3 % r2 << endl;
		r3 /= r2;
	}

    
    cout << r3;

	return 0;
}