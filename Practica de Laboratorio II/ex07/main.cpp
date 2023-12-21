#include <iostream>

using namespace std;

int main (){
    string write_entry;
    string part_2;

    cout << "----------------------------------------------------" << endl;
    cout << "Codigo de estudiante: 236177" << endl;
    cout << "Nombres y Apellidos: Anderson Leonardo Flores Macedo" << endl;
    cout << "----------------------------------------------------" << endl;


    int index_vocals = 0;
    int n_a = 0, n_e = 0, n_i = 0, n_o = 0, n_u = 0;

    char vocals[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    cout << "Write something: ";
    getline( cin, write_entry);


    for ( char l: write_entry ){
        for ( char v: vocals ){


            if ( l == v ){;
                if ( index_vocals == 0 ){
                    n_a++;

                }
                else if ( index_vocals == 1 ){
                    n_e++;

                }
                else if ( index_vocals == 2 ){
                    n_i++;

                }
                else if ( index_vocals == 3 ){
                    n_o++;

                }
                else if ( index_vocals == 4 ){
                    n_u++;

                }

            }

            if ( index_vocals >= 4 ){
                index_vocals = 0;

            }
            else{
                index_vocals++;

            }

        }

    }

    cout << "'a' times: " << n_a << endl;
    cout << "'e' times: " << n_e << endl;
    cout << "'i' times: " << n_i << endl;
    cout << "'o' times: " << n_o << endl;
    cout << "'u' times: " << n_u << endl;


    return 0;
}
