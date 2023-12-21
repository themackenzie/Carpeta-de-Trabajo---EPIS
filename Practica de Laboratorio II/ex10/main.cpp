#include <iostream>

using namespace std;

int main(){
    int entry_value, r0 = 0, r1 = 0;
    float r2 = 0;

    cout << "----------------------------------------------------" << endl;
    cout << "Codigo de estudiante: 236177" << endl;
    cout << "Nombres y Apellidos: Anderson Leonardo Flores Macedo" << endl;
    cout << "----------------------------------------------------" << endl;


    for (int n = 0; n < 6; n++){
        cout << "Input a entire value(Negative or Positive): ";
        cin >> entry_value;


        if ( entry_value < 0 ){
            r0 = r0 + entry_value;

        }
        else if ( entry_value > 0 ){
            r2 = r2 + entry_value;
            r1++;

        }


    }

    if (r1 != 0){
        r2 = r2 / r1;

    }
    else{
        cout << "Caution - No positive numbers provided" << endl;

    }

    cout << "Negative Numbers Sum: " << r0 << endl;
    cout << "Positive Number Average: " << r2 << endl;


    return 0;
}
