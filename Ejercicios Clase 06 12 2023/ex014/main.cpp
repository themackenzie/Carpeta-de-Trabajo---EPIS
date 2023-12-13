#include <iostream>

using namespace std;

int main (){
    cout << "----------------------------------------------------" << endl;
    cout << "Codigo de estudiante: 236177" << endl;
    cout << "Nombres y Apellidos: Anderson Leonardo Flores Macedo" << endl;
    cout << "----------------------------------------------------" << endl;

    int r0, r1;

    cout << "Base square pyramid value: ";
    cin >> r0;

    cout << "Edge of the square pyramid value: ";
    cin >> r1;


    cout << "The perimeter of the square pyramid is: " << 4 * (r0 + r1);

    return 0;
}
