#include <iostream>

int main (){
    float r0 = 0;

    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "Codigo de estudiante: 236177" << std::endl;
    std::cout << "Nombres y Apellidos: Anderson Leonardo Flores Macedo" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;


    while ( r0 < 9 ){
        r0 = r0 + 0.000001;
        std::cout << "Number: " << r0 << std::endl;
    }

    return 0;
}
