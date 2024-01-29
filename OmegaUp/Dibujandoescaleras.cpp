#include <iostream>

using namespace std;

void xmll ( char r0, int r1 ){
    for ( int n = 0; n < r1; n++ ){
    	cout << r0;


    }
    
    
}

int main(){
	int r0;
	char r1;
	
	cin >> r0;
	cin >> r1;
	
	
	for ( int n = 1; n < r0; n++ ){
	    xmll ( r1, n );

	    if ( n + 1 < r0 ){
	    	cout << endl;

	    }
	    
	    
	}

	return 0;
}