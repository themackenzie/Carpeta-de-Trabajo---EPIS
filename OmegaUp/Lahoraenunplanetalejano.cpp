#include <iostream>

using namespace std;


int main() {
    int r0, r1 = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0;
    
    cin >> r0;
    
    
    while ( r5 < r0 ){
        r5++;
        r4++;
        
        
        if ( r4 == 50 ){
            r4 = 0;
            r3++;
            
        }
        
        
        if ( r3 == 70 ){
            r2++;
            r3 = 0;
            
        }
        
        if ( r2 == 12 ){
            r2 = 0;
            r1++;
            
        }
        
        
        
    }
    
    cout << r1 << ' ' << r2 << ' ' << r3 << ' ' << r4;

    return 0;
}