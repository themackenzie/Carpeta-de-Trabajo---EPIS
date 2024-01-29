#include <iostream>

using namespace std;

int main(){
	float r0, r1, r2, r3;
	cin >> r0;
	cin >> r1;
	cin >> r2;

	r3 = ( r0 + ( r0 * ( r1 + ( r2 * r2 ) ) ) ) / ( ( r0 + 3.1416 ) * ( r1 + 3.1416 ) );

	cout << r3;





	return 0;
}