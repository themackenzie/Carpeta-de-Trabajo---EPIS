#include <stdio.h>

int main(){

    float radius = 0, r0 = 0;

    printf("----------------------------------------------------\n");
    printf("Codigo de estudiante: 236177\n");
    printf("Nombres y Apellidos: Anderson Leonardo Flores Macedo\n");
    printf("----------------------------------------------------\n");


    printf ("Radius: ");
    scanf ("%f", &radius);


    r0 = 3.1416 * radius * radius;


    printf ("The circle area is: %f", r0);


    return 0;

}
