#include <iostream>

int main (){
    int r0, r1, r2 = 0;

    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "Codigo de estudiante: 236177" << std::endl;
    std::cout << "Nombres y Apellidos: Anderson Leonardo Flores Macedo" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;


    std::cout << "Times to repeat the add operation: ";
    std::cin >> r0;


    for ( int n = 0; n < r0; n++ ){
        std::cout << n + 1 << ". Insert number: ";
        std::cin >> r1;

        r2 = r2 + r1;

    }
    std::cout << "The result is: " << r2;


    return 0;
}
