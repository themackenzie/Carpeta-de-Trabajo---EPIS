#include <iostream>

using namespace std;

int main(){
    int r0, r1;
    bool r2 = true;
    
    cin >> r0;
    r1 = r0;
    
    for ( int n = 0; n < 2; n++ ){
        cin >> r0;
        
        if ( r1 != r0 ){
            r2 = false;
            
        }
        
        r1 = r0;
        
        
    }
    
    
    if ( r2 == true ){
        cout << "ELLA TE AMA";
        
    }
    else{
        cout << "ELLA NO TE AMA";
        
    }
    
    return 0;
}