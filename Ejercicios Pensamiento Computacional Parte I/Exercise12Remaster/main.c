#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("----------------------------------------------------\n");
    printf("Codigo de estudiante: 236177\n");
    printf("Nombres y Apellidos: Anderson Leonardo Flores Macedo\n");
    printf("----------------------------------------------------\n");


    int r0 = 1, r1 = 1, r2 = 2001, r3 = 1, r4 = 1, r5 = 2002;
    int r6[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int r7[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int r8 = r4 - 1;
    int r9 = 0, r10 = 0, r11 = 0, r12 = 0;


    printf ( "Insert you born day (1 1 2001): " );
    scanf ( "%d %d %d", &r0, &r1, &r2 );

    printf ( "Insert the actual day (1 1 2002): " );
    scanf ( "%d %d %d", &r3, &r4, &r5 );


    while ( r0 != r3 || r1 != r4 || r2 != r5 ){
        r0++;
        r9++;

        if ( r9 == r7[r12] ){
            r9 = 0;
            r12++;


            if (r10 + 1 == 12){
                r12 = 0;
                r10 = 0;
                r11++;


                if ( r11 % 4 == 0 && ( r11 % 100 != 0 || r11 % 400 == 0 ) ){
                    r7[1] = 29;
                }
                else{
                    r7[1] = 28;

                }


            }
            else{
                r10++;

            }

        }


        if ( r8 > 11 ){
            r8 = 0;

        }


        if ( r0 == r6[r8] + 1 ){
            r0 = 1;
            r8++;


            if ( r1 == 12){
                r1 = 1;
                r8 = 0;
                r2++;


                if ( r2 % 4 == 0 && ( r2 % 100 != 0 || r2 % 400 == 0 ) ){
                    r6[1] = 29;

                }
                else{
                    r6[1] = 28;

                }

            }

            else{
                r1++;

            }

        }

    }


    printf ( "Elapsed Time:: Days - %d / Months - %d / Years - %d", r9, r10, r11 );
    return 0;
}
