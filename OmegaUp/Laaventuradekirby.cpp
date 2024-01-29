#include <iostream>

using namespace std;

int main() {
    int r0, r1, r2, r4;
    bool r3 = false;
    
    cin >> r0;
    cin >> r1;
    
    for ( int n = 0; n < r0; n++ ){
        cin >> r2;
        
        if ( r2 == r1 ){
            r4 = n;
            r3 = true;
        }
        
    }
    
    
    if ( r3 == false ){
        cout << "Poyo :(";
        
    }
    else{
        cout << r4;
        
    }
    
    

    return 0;
}