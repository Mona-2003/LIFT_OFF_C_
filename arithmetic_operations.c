// c program to perform arithmetic operations
#include <stdio.h>
int main()
{
    float a, b, c;
    int n;
    printf("perform\n1:addition\n2:subtraction\n3:multiplication\n4:divide\n");
    printf("Enter two numbers:");
    scanf("%f%f", &a, &b);
    printf("enter the operator number above to perform\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        c = a + b;
        printf("the addition of %f and %f is:%f", a, b, c);
        break;
    case 2:
        c = a - b;
        printf("the subtraction of %f and %f is:%f", a, b, c);
        break;
    case 3:
        c = a * b;
        printf("the multiplication of %f and %f is:%f", a, b, c);
        break;
    case 4:
        c = a / b;
        printf("the division of %f and %f is:%f", a, b, c);
        break;
    default:
        break;
    }
    return 0;
}