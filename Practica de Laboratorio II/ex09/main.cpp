#include <iostream>

int main (){
    int r0 = 0;

    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "Codigo de estudiante: 236177" << std::endl;
    std::cout << "Nombres y Apellidos: Anderson Leonardo Flores Macedo" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;


    for ( int n = 0; n <= 100; n++ ){
        if (n % 3 == 0){
            r0 = r0 + n;

        }

    }

    std::cout << r0;


    return 0;
}
