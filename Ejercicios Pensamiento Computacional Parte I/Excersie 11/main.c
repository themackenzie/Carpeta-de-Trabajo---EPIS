#include <stdio.h>
#include <math.h>

int main(){

    float pi = 3.1416, radius = 0, r0 = 0;

    printf("----------------------------------------------------\n");
    printf("Codigo de estudiante: 236177\n");
    printf("Nombres y Apellidos: Anderson Leonardo Flores Macedo\n");
    printf("----------------------------------------------------\n");


    printf ("Radius: ");
    scanf ("%f", &radius);


    r0 = (4/3) * pi * pow(radius, 3);


    printf ("The volume of a sphere is: %f", r0);


    return 0;

}
