#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  
  
  while ( n < 100 ){
    if ( n % 2 == 0 ){
      n += 3;
      
    }
    else{
      n *= 2;
      
    }
    
    
  }
  
  
  cout << n;
  
  
  return 0;
}