#include <stdio.h>

int main(){

    printf("----------------------------------------------------\n");
    printf("Codigo de estudiante: 236177\n");
    printf("Nombres y Apellidos: Anderson Leonardo Flores Macedo\n");
    printf("----------------------------------------------------\n");


    printf ("Average of 5\n");
    int n,nums, oper;
    nums = 0;

    for (n = 0;n < 5; n++) {
        printf ("Enter a number: ");
        scanf ("%d", &oper);
        nums += oper;
    }
    nums /= n;
    printf ("%d",nums);
    return 0;
}
