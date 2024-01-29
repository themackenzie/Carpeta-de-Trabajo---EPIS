#include <iostream>

using namespace std;

int main() {
    int r2;
    float r0 = 0, r1; 
    
    for ( int n = 0; n < 8; n++ ){
        cin >> r1;
        r0 += r1;
        
    }
    
    cin >> r2;
    
    r0 = r0 / 8;
    
    if ( r0 >= r2 ){
        cout << "lo lograran!";
        
    }
    else{
        cout << "Aun son muy malos";
        
    }
    
    
    
    
    

    return 0;
}