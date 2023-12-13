#include <stdio.h>
#include <math.h>

int main(){

    float pi = 3.1416, ra = 0, r0 = 0;

    printf("----------------------------------------------------\n");
    printf("Codigo de estudiante: 236177\n");
    printf("Nombres y Apellidos: Anderson Leonardo Flores Macedo\n");
    printf("----------------------------------------------------\n");


    printf ("Radius(r): ");
    scanf ("%f", &ra);


    r0 = 1.333 * pi * ( pow(ra, 3) );


    printf ("The volume of the sphere is: %f", r0);


    return 0;

}
