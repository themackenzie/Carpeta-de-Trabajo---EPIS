#include <iostream>

using namespace std;

int main() {
    int r0, r1, r2 = 0, r3 = 0, r4;
    cin >> r0;
    cin >> r1;
    
    
    for ( int n = 0; n < r0; n++ ){
        cin >> r4;
        r2 += r4;
        
    }
    
    
    for ( int n = 0; n < r1; n++ ){
        cin >> r4;
        r3 += r4;
        
    }
    
    cout << r2 << ' ' << r3;
    

    return 0;
}