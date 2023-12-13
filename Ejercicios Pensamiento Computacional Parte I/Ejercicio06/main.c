#include <stdio.h>
#include <math.h>

int main(){
    float a = 0,b = 0,c = 0,fx = 0, r0 = 0;

    printf("----------------------------------------------------\n");
    printf("Codigo de estudiante: 236177\n");
    printf("Nombres y Apellidos: Anderson Leonardo Flores Macedo\n");
    printf("----------------------------------------------------\n");


    printf ("a = ");
    scanf ("%f", &a);

    printf ("b = ");
    scanf ("%f", &b);

    printf ("c = ");
    scanf ("%f", &c);


    r0 = sqrt(pow(b,2) - 4 * a * c);


    if (r0 > 0){
        printf ("Detected: There's many solution's\n");
    }
    else if (r0 == 0){
        printf ("There's one solution\n");
    }
    else{
        printf ("There's no solution\n");
    }


    for (int n = 0; n < 2; n++){
        if (n == 0){
            fx = 1;
        }
        else{
            fx = -1;
        }


        r0 = (-b + (fx * (r0))) / 2 * a;

        if (n == 0){
            printf ("The positive result is: %f\n", r0);
        }
        else{
            printf ("The negative result is: %f\n", r0);
        }

    }


    return 0;
}
