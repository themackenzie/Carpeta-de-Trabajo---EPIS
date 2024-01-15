#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int r0;
    float r2, r3, r4, r5 = 0;
    bool r1 = true;

    while ( r1 == true ){
        cout << "''''''''''''''''''\n";
        cout << "Choose an option\n";
        cout << "1. Perimeters\n";
        cout << "2. Areas\n";
        cout << "3. Volumes\n";
        cout << "0. Exit\nOption: ";

        cin >> r0;

        switch ( r0 ){
            case 1:
                system("cls");
                cout << "$$$Perimeters$$$\n\n";
                cout << "## Operations Avaiable ##\n";
                cout << " Operation // Formula\n";
                cout << "1. P. of a Square // a * 4\n";
                cout << "2. P. of a Rectangle // 2 (a + b)\n";
                cout << "3. P. of a Triangle (Scalene) a + b + c\n";
                cout << "4. P. of a Triangle (Equilateral) // 3 * a\n";
                cout << "5. P. of a Triangle (Isosceles) // 2a + b\n";
                cout << "6. P. of a Trapezium // a + b + c + d\n";
                cout << "7. P. of a Circle // 2 * pi * r\n";
                cout << "8. P. of a Pentagon // 5 * a\n";
                cout << "9. P. of a Hexagon // 6 * a\n";
                cout << "10. P. of a Dodecagon // 12 * a\n";
                cout << "0. Exit\nOption: ";
                cin >> r0;
                if ( r0 == 0){
                    r0 = 0;
                }
                break;

            case 2:
                system("cls");
                cout << "###Areas###\n\n";
                cout << "$$ Operations Avaiable $$\n";
                cout << " Operation / Formula\n";
                cout << "1. A. of a Square // a * a\n";
                cout << "2. A. of a Rectangle // a * b\n";
                cout << "3. A. of a Triangle // (a * b) / 2\n";
                cout << "4. A. of a Trapezium // (h * (B * b)) / 2\n";
                cout << "5. A. of a Circle // pi * r * r\n";
                cout << "6. A. of a Paralelogram // b * h\n";
                cout << "7. A. of a Romboid // (D * d) / 2\n";
                cout << "8. A. of a Circle Sector // pi * r * r * (a / 360) \n";
                cout << "9. A. of a Elipse // pi * a * b\n";
                cout << "10. A. of a Regular Poligon // (P * a) / 2\n";
                cout << "0. Exit \nOption: ";
                cin >> r0;

                if ( r0 == 0){
                    r0 = 0;
                }
                else{
                    r0 += 10;
                }
                break;

            case 3:
                system("cls");
                cout << "###Volumes###\n\n";
                cout << "$$ Operations Avaiable $$\n";
                cout << " Operation / Formula \n";
                cout << "1. V of a Cube // a * a * a\n";
                cout << "2. V of a Prism // A * h\n";
                cout << "3. V of a Square Pyramid // A * h * (1 / 3)\n";
                cout << "4. V of a Cylinder // pi * r * r * h\n";
                cout << "5. V of a Cone // pi * r * r * h * (1 / 3)\n";
                cout << "6. V of a Sphere // pi * r * r * r * (4 / 3)\n";
                cout << "7. V of a Box // a * b * c\n";
                cout << "8. V of a Trunk of a Cone // pi * h * ( 1 / 3 )\n";
                cout << "9. V of a Regular Tetrahedron // (1.4142 * L * L * L) / 12\n";
                cout << "10. V of a Ramp // (a * b * h) / 2\n";
                cout << "0. Exit\nOption: ";
                cin >> r0;

                if ( r0 == 0){
                    r0 = 0;
                }
                else{
                    r0 += 20;
                }
                break;
            default:
                r0 = 0;
        }

        system("cls");

        switch ( r0 ){
            case 1:
                cout << "P. of a Square // a * 4\na = ";
                cin >> r2;
                r5 = r2 * 4;
                break;
            case 2:
                cout << "P. of a Rectangle // 2 (a + b)\na = ";
                cin >> r2;
                cout << "b = ";
                cin >> r3;
                r5 = (r2 + r3) * 2;
                break;
            case 3:
                cout << "A. of a Triangle // (a * b) / 2\na = ";
                cin >> r2;
                cout << " b = ";
                cin >> r3;
                r5 = (r2 * r3) / 2;
                break;
            case 4:
                cout << "P. of a Triangle (Scalene) a + b + c\na = ";
                cin >> r2;
                cout << " b = ";
                cin >> r3;
                cout << " c = ";
                cin >> r4;
                r5 = r2 + r3 + r4;
                break;
            case 5:
                cout << "P. of a Triangle (Equilateral) // 3 * a\na = ";
                cin >> r2;
                r5 = r2 * 3;
                break;
            case 6:
                cout << "P. of a Triangle (Isosceles) // 2a + b\na = ";
                cin >> r2;
                cout << "b = ";
                cin >> r3;
                r5 = 2 * r2 + r3;
                break;
            case 7:
                cout << "A. of a Romboid // (D * d) / 2\nD = ";
                cin >> r2;
                cout << " b = ";
                cin >> r3;
                r5 = (r2 * r3) / 2;
                break;
            case 8:
                cout << "P. of a Pentagon // 5 * a\na = ";
                cin >> r2;
                r5 = r2 * 5;
                break;
            case 9:
                cout << "P. of a Hexagon // 6 * a\na = ";
                cin >> r2;
                r5 = r2 * 6;
                break;
            case 10:
                cout << "P. of a Dodecagon // 12 * a\na = ";
                cin >> r2;
                r5 = r2 * 12;
                break;
            case 11:
                cout << "A. of a Square // a * a\na = ";
                cin >> r2;
                r5 = r2 * r2;
                break;
            case 12:
                cout << "A. of a Rectangle // a * b\na = ";
                cin >> r2;
                cout << " b = ";
                cin >> r3;
                r5 = r2 * r3;
                break;
            case 13:
                cout << "A. of a Triangle // (a * b) / 2\na = ";
                cin >> r2;
                cout << " b = ";
                cin >> r3;
                r5 = (r2 * r3) / 2;
                break;
            case 14:
                cout << "A. of a Trapezium // (h * (B * b)) / 2\nh = ";
                cin >> r2;
                cout << " B = ";
                cin >> r3;
                cout << " b = ";
                cin >> r4;
                r5 = ( r2 * ( r3 * r4 ) ) / 2;
                break;
            case 15:
                cout << "A. of a Circle // pi * r * r\nr = ";
                cin >> r2;
                r5 = 3.1416 * r2 * r2;
                break;
            case 16:
                cout << "A. of a Paralelogram // b * h\nb = ";
                cin >> r2;
                cout << " h = ";
                cin >> r3;
                r5 = r2 * r3;
                break;
            case 17:
                cout << "A. of a Romboid // (D * d) / 2\nD = ";
                cin >> r2;
                cout << " d = ";
                cin >> r3;
                r5 = ( r2 * r3 ) / 2;
                break;
            case 18:
                cout << "A. of a Circle Sector // pi * r * r * (sector / 360)\nr = ";
                cin >> r2;
                cout << " sector = ";
                cin >> r3;
                r5 = 3.1416 * r2 * r2 * ( r3 / 360 );
                break;
            case 19:
                cout << "A. of a Elipse // pi * a * b\na = ";
                cin >> r2;
                cout << " b = ";
                cin >> r3;
                r5 = 3.1416 * r2 * r3;
                break;
            case 20:
                cout << "A. of a Regular Poligon // (P * a) / 2\nP = ";
                cin >> r2;
                cout << " a = ";
                cin >> r3;
                r5 = ( r2 * r3 ) / 2;
                break;
            case 21:
                cout << "V of a Cube // a * a * a\na = ";
                cin >> r2;
                r5 = r2 * r2 * r2;
                break;
            case 22:
                cout << "V of a Prism // A * h\nA = ";
                cin >> r2;
                cout << " h = ";
                cin >> r3;
                r5 = r2 * r3;
                break;
            case 23:
                cout << "V of a Square Pyramid // A * h * (1 / 3)\nA = ";
                cin >> r2;
                cout << " h = ";
                cin >> r3;
                r5 = r2 * r3 * 0.33;
                break;
            case 24:
                cout << "V of a Cylinder // pi * r * r * h\nr = ";
                cin >> r2;
                cout << " h = ";
                cin >> r3;
                r5 = 3.1416 * r2 * r2 * r3;
                break;
            case 25:
                cout << "V of a Cone // pi * r * r * h * (1 / 3)\nr = ";
                cin >> r2;
                cout << " h = ";
                cin >> r3;
                r5 = 3.1416 * r2 * r2 * r3 * 0.33;
                break;
            case 26:
                cout << "V of a Sphere // pi * r * r * r * (4 / 3)\nr = ";
                cin >> r2;
                r5 = 3.1416 * r2 * r2 * r2 * 1.33;
                break;
            case 27:
                cout << "7. V of a Box // a * b * c\na = ";
                cin >> r2;
                cout << " b = ";
                cin >> r3;
                cout << " c = ";
                cin >> r4;
                r5 = r2 * r3 * r4;
                break;
            case 28:
                cout << "V of a Trunk of a Cone // pi * h * ( 1 / 3 )\nh = ";
                cin >> r2;
                r5 = 3.1416 * r2 * 0.33;
                break;
            case 29:
                cout << "V of a Regular Tetrahedron // (1.4142 * L * L * L) / 12\nL = ";
                cin >> r2;
                r5 = (1.4142 * r2 * r2 * r2) / 12;
                break;
            case 30:
                cout << "V of a Ramp // (a * b * h) / 2\na = ";
                cin >> r2;
                cout << " b = ";
                cin >> r3;
                cout << " h = ";
                cin >> r4;
                r5 = (r2 * r3 * r4) / 2;
                break;
            case 0:
                r1 = false;
                break;
            default:
                r1 = false;
                break;
        }

        if (r0 != 0){
            cout << "Result: " << r5 << "\nContinue?\nY(1)/N(0); ";
            cin >> r0;

            if ( r0 == 0 ){
                r1 = false;
            }
            else{
                system("cls");
            }
        }

    }

    cout << "Thank you, will see you soon";

    return 0;
}
