#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int a, b, c;

	scanf ( "%d %d %d", &a, &b, &c );

	if ( a == b && a == c && b == c ){
		cout << "equilatero";
	}
	else if ( a == b || a == c || b == c){
		cout << "isosceles";
	}
	else{
		cout << "escaleno";
	}


	return 0;
}