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
    int index_result = 0;

    char vocals[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char result[5] = {' ', ' ', ' ', ' ', ' ' };

    cout << "Write something: ";
    getline( cin, write_entry);


    for ( char l: write_entry){
        for ( char v: vocals ){
            if ( l == v || l == vocals[index_vocals + 5] ){
                result[index_result] = v;

                index_result++;

                vocals[index_vocals] = '@';
                vocals[index_vocals + 5] = '@';

            }

            if ( index_vocals > 3 ){
                index_vocals = 0;

            }
            else{
                index_vocals++;

            }

        }

    }

    index_vocals = 0;


    for ( char l: result ){
        cout << l;


        if ( result[index_vocals + 1] != ' ' && result[index_vocals + 1] != '@' ){
            cout << "; ";

        }

        index_vocals++;

    }

    return 0;
}
