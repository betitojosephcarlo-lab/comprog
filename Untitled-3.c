#include <stdio.h>

int main () {
    int i;

    //While loop: Print numbers from 1 to 10
    printf ("While loop: Numbers from 1 to 10:\n");
    i = 1;
    while (i <= 10) {
        printf ("%d\n", i);
        i++;
    }
    printf("\n\n");

    //For loop: Print even numbers from 2 to 20
    printf ("For loop: Even numbers from 2 to 20:\n");
    for (i = 2; i <= 20; i += 2) {
        printf ("%d\n", i);
    }
    printf("\n\n");

    //Do-while loop: Print odd numbers from 1 to 5
    printf ("Do-while loop: Odd numbers from 1 to 5:\n");
    i = 1;
    do {
        printf ("%d\n", i);
        i += 2;
    } while (i <= 5);

    return 0;
}