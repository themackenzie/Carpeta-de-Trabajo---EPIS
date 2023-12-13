#include <iostream>

using namespace std;

int main (){

    cout << "----------------------------------------------------" << endl;
    cout << "Codigo de estudiante: 236177" << endl;
    cout << "Nombres y Apellidos: Anderson Leonardo Flores Macedo" << endl;
    cout << "----------------------------------------------------" << endl;

    int r0, r1;
    float r2;

    cout << "Input the 1st Number: ";
    cin >> r0;
    cout << "Input the 2nd Number: ";
    cin >> r1;


    cout << "The sum is: " << r0 + r1 << endl;
    cout << "The difference is: " << r0 - r1 << endl;
    cout << "The multiplication is: " << r0 * r1 << endl;

    if ( r1 == 0 ){
        cout << "Divition by Zero not Aviable\nModule by Zero not Aviable";

    }
    else{
        r2 = r0 / r1;
        cout << "The division is: " << r2 << endl;

        r2 = r0 % r1;
        cout << "The module is: " << r2 << endl;

    }

    return 0;

}
