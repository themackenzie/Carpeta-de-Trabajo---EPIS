#include <iostream>

using namespace std;

int main() {
    int r2 = 0;
    float r0, r1;
    
    
    for ( int n = 0; n < 3; n++ ){
        cin >> r0;
        cin >> r1;
        
        if ( r0 > r1 ){
            r2++;
            
        }
        else{
            r2--;
            
        }
        
        
    }
    
    
    if ( r2 > 0 ){
        cout << "Gano A";
        
    }
    else{
        cout << "Gano B";
        
    }
    
    

    return 0;
}