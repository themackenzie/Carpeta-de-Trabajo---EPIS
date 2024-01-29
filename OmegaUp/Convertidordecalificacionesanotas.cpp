#include <iostream>

using namespace std;

int main() {
    float r0;
    cin >> r0;
    
    
    if ( r0 > 93 ){
        cout << "A";
        
    }
    else if ( r0 > 90 ){
        cout << "A-";
        
    }
    else if ( r0 > 87 ){
        cout << "B+";
        
    }
    else if ( r0 > 83 ){
        cout << "B";
        
    }
    else if ( r0 > 80 ){
        cout << "B-";
        
    }
    else if ( r0 > 77 ){
        cout << "C+";
        
    }
    else if ( r0 > 73 ){
        cout << "C";
        
    }
    else if ( r0 > 70 ){
        cout << "C-";
        
    }
    else if ( r0 > 67 ){
        cout << "D+";
        
    }
    else if ( r0 > 60 ){
        cout << "D";
        
    }
    else{
        cout << "F";
        
    }
    
    
    

    return 0;
}