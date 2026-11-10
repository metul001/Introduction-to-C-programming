#include<stdio.h>
int main() {
/*
int num = 10;
float num2 = 5.32;
double num3 = 8.3654;
char name = 'A';

printf("Int: %d\nFloat: %f\nDouble: %lf\nChar: %c\n", num, num2, num3, name);
*/

int num;
float num2;
double num3;
char name;

printf("Enter an integer: ");
scanf("%d", &num);

printf("Enter a float: ");
scanf("%f", &num2);

printf("Enter a double: ");
scanf("%lf", &num3);

printf("Enter a character: ");
scanf(" %c", &name);

printf("Int: %d\nFloat: %f\nDouble: %lf\nChar: %c\n", num, num2, num3, name);

//multiple input
printf("Enter a character and a number: ");
scanf(" %c %d", &name, &num);
printf("Char: %c\nInt: %d\n", name, num);


return 0;
}
