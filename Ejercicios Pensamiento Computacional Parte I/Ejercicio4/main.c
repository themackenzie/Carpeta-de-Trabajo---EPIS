#include <stdio.h>

int main(){
    int num1, num2, res;

    printf("----------------------------------------------------\n");
    printf("Codigo de estudiante: 236177\n");
    printf("Nombres y Apellidos: Anderson Leonardo Flores Macedo\n");
    printf("----------------------------------------------------\n");


    printf ("Multiplication\n");

    printf ("Enter 1st number: ");
    scanf("%d", &num1);

    printf ("Enter 2st number: ");
    scanf("%d", &num2);

    res = num1 * num2;

    printf ("The result is %d", res);

    return 0;
}
