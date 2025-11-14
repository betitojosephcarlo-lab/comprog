#include <stdio.h>

int main() {
   
    int a = 5;
    int b = 15;
    int c = -3;

    //AND operation
    printf ("Logical Operations:\n");
    if (a > 0 && b > 0 && c > 0) {  // AND operation
        printf ("AND: All numbers are positive.\n");
    }
    else {
        printf ("AND: Not all numbers are positive.\n");
    }

    //OR operation
    if (a > 0 || c < 0 || b > 0) {  // OR operation
        printf ("OR: One number is negative.\n");
    }

    //Not operation
    if (!(c > 0)) {  // NOT operation
        printf ("NOT: c is not a positive number.\n");
    }
    return 0;
}