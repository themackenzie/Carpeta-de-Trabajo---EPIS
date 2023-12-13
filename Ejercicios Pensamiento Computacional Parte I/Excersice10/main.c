#include <stdio.h>
#include <math.h>

int main(){

    float base = 0, heigh = 0, r0 = 0;

    printf("----------------------------------------------------\n");
    printf("Codigo de estudiante: 236177\n");
    printf("Nombres y Apellidos: Anderson Leonardo Flores Macedo\n");
    printf("----------------------------------------------------\n");


    printf ("Base: ");
    scanf ("%f", &base);

    printf ("Heigh: ");
    scanf ("%f", &heigh);


    r0 = base * heigh;


    printf ("The area of a paralelogram is: %f", r0);


    return 0;

}
