#include <iostream>

using namespace std;

int main(){
    int r0;
    cin >> r0;
    
    
    if ( r0 > 14 ){
        cout << "Are you kidding me?";
        
    }
    else if ( r0 == 14 ){
        cout << "Base";
        
    }
    else if ( r0 == 7 ){
        cout << "Neutro";
        
    }
    else if ( r0 == 0 ){
        cout << "Acido";
        
    }
    
    
    
    return 0;
}