#include <iostream>

using namespace std;

int main() {
    int r0;
    bool r1 = true;
    
    
    for ( int n = 0; n < 2; n++ ){
        cin >> r0;
        
        if ( r0 != 1 ){
            r1 = false;
        }
        
        
    }
    
    
    if ( r1 == false ){
        cout << "Kaboom";
        
    }
    else{
        cout << "Despega";
        
    }

    return 0;
}