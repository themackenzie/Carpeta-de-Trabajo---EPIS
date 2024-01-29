#include <iostream>

using namespace std;

int main(){
	float r0, r1;
	cin >> r0;
	r1 = r0;
	
	cout << r0 << endl;
	
	r0 += 5;
	cout << r0 << endl;
	
	r0 *= r0;
	cout << r0 << endl;
	
	r0 = r0 / ( r1 / 3 );
	cout << r0 << endl;
	
	r0 = r0 * r0 * r0;
	cout << r0;
	
	





	return 0;
}