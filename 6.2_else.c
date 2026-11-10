/*

if (test expression) {
    // run code if test expression is true
}
else {
    // run code if test expression is false
}

*/



// Check whether an integer is odd or even

#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // True if the remainder is 0
    if  (number%2 == 0) {
        printf("%d is an even.\n",number);
    }
    else {
        printf("%d is an odd.\n",number);
    }

    return 0;
}