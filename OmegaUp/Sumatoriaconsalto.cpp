#include <iostream>

using namespace std;

int main(){
    int r0, r1, r2 = 0;
    
    cin >> r0;
    cin >> r1;
    
    
    for ( int n = 1; n < r1 + 1; n = n + r0 ){
        r2 += n;
    }
    
    cout << r2;
    
    
    return 0;
}