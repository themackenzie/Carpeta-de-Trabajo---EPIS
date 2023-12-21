#include <iostream>

using namespace std;

int main (){

    cout << "----------------------------------------------------" << endl;
    cout << "Codigo de estudiante: 236177" << endl;
    cout << "Nombres y Apellidos: Anderson Leonardo Flores Macedo" << endl;
    cout << "----------------------------------------------------" << endl;


    int r0;
    cout << "Input a positive entire number: ";
    cin >> r0;

    for ( int r1 = r0 * 2; r0 < r1; r0 ++ ){
        cout << "Number: " << r0 << endl;

    }

    return 0;
}
