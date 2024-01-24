#include <iostream>

using namespace std;

int main(){
  int r0, r1, r2 = 0;
  
  cin >> r0;
  cin >> r1;
  
  
  for ( int n = r0; n < r1; n++ ){
    if ( n % 2 != 0 ){
      r2 += n;
    }
    
  }
  
  
  cout << r2;
  
  
  return 0;
}