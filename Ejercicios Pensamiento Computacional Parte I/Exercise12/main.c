#include <stdio.h>
#include <stdlib.h>


int main(){
    int date_born = 0, date_now = 0, r0 = 0, r1 = 0, age = 0;
    unsigned char error = 0;

    printf("----------------------------------------------------\n");
    printf("Codigo de estudiante: 236177\n");
    printf("Nombres y Apellidos: Anderson Leonardo Flores Macedo\n");
    printf("----------------------------------------------------\n");


    printf ("The date must be in the next format\nddmmyyyy\n14122000 / 8082008\n");

    printf ("Born date: ");
    scanf ("%d", &date_born);

    printf ("Actual date: ");
    scanf ("%d", &date_now);

    r0 = date_born / 10000;
    r0 = date_born - (r0 * 10000);

    r1 = date_now / 10000;
    r1 = date_now - (r1 * 10000);

    if (r0 > r1){
        printf ("You don't exist haha");
        exit(0);

    }
    else if (r0 == r1){
        error = 1;

    }
    age = r1 - r0;

    r0 = date_born / 1000000;
    r0 = date_born - (r0 * 1000000);
    r0 = r0 / 10000;

    r1 = date_now / 1000000;
    r1 = date_now - (r1 * 1000000);
    r1 = r1 / 10000;

    if (r1 < r0 && error == 1){
        printf ("You come from the future hah?");
        exit(0);

    }
    if (r0 == r1){
        error = 2;

    }

    if (r1 > r0){
           age = age;

    }
    else{
        r0 = date_born / 1000000;
        r1 = date_now / 1000000;

        if (r1 < r0 && error == 2){
            printf ("This is not Back to Future");
            exit(0);

        }

        if (r1 < r0){
            age--;

        }

    }
    printf ("Your age is: %d years old", age);


    return 0;
}
