#include <iostream>

using namespace std;


int main() {
    int r0, r1, r2;
    cin >> r0;
    cin >> r1;
    
    r2 = r1 * r0;

    
    
    while ( r2 > 10 ){
        r2 = r2 - ( ( r2 / 10 ) * 10 );
    }
    
    
    cout << r2;
    

    return 0;
}