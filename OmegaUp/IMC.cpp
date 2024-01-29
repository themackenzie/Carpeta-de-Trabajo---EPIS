#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    float r0, r1, r2;
    
    
    cin >> r0;
    cin >> r1;
    
    r2 = r1 / ( r0 * r0 );
    
    
    printf ( "%.2f\n", r2 );
    
    
    if ( r2 >= 40 ){
        cout << "Obesidad Morbida";
        
    }
    
    else if ( r2 >= 35 ){
        cout << "Obesidad Media";
        
    }
    
    else if ( r2 >= 30 ){
        cout << "Obesidad Leve";
        
    }
    
    else if ( r2 >= 25 ){
        cout << "Sobre Peso";
        
    }
    
    else if ( r2 >= 18.5 ){
        cout << "Peso Normal";
        
    }
    
    else{
        cout << "Infra Peso";
        
    }
    
    
    
    return 0;
}