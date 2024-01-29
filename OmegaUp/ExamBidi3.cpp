#include <iostream>

using namespace std;

int main(){
	int r0;
	cin >> r0;


	char r1[r0][r0];


	for ( int x = 0; x < r0; x++ ){
		for ( int y = 0; y < r0; y++ ){
			if ( x == y ){
				r1[x][y] = 'X';

			}
			else if ( x % 2 == 0 ){
				r1[x][y] = 'o';

			}
			else{
				r1[x][y] = 'a';

			}



		}


	}



	for ( int x = 0; x < r0; x++ ){
		for ( int y = 0; y < r0; y++ ){
			cout << r1[x][y];


		}

		cout << endl;


	}


	return 0;
}