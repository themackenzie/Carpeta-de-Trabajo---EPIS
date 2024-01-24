#include <iostream>


int main(){
  int r0, r1, r2 = 0, r3 = 0;
  std::cin >> r0;
  
  
  for ( int n = 0; n < r0; n++ ){
    std::cin >> r1;
    
    
    if ( r0 / 2 > n ){
      r2 += r1;
      
    }
    else{
      r3 += r1;
      
    }
  
  }  
  
  if ( r2 == r3 ){
    std::cout << r2 << " 1";
    
  }
  else{
    std::cout << r2 + r3 << " 0";
    
  }
  
  
  return 0;
}