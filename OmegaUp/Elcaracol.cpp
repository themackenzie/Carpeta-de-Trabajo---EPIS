#include <iostream>

using namespace std;

int main(){
	int r0, r1, r2, r3, r4 = 0;
	
	cin >> r0;
	cin >> r1;
	cin >> r2;
	
	r3 = r2;
	
	while ( r3 < r0 ){
	    r3 -= r2;
	    
	    r3 += r1;
	    
	    r4++;
	    
	    
	}


    cout << r4;

	return 0;
}