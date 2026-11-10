#include <stdio.h>
#include <stdbool.h>
int main()
{
    int age = 25;
    char section = 'A';
    float salary = 50000.50;
    double bonus = 1500.75;
    bool married = true;

    printf("Age: %d\n", age);
    printf("Section: %c\n", section);
    printf("Salary: %.2f\n", salary);
    printf("Bonus: %.2lf\n", bonus);
    printf("Marital Status: %s\n", married ? "Married" : "Not Married");
    return 0;
}