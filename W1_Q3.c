// c program to check odd/even no.

#include <stdio.h>
int main()
{
    int n, k;
    printf("enter a number:");
    scanf("%d", &n);
    k = n % 2;
    switch (k == 0)
    {
    case 1:
        printf("%d is an even number", n);
        break;
    case 0:
        printf("%d is an odd number", n);
        break;
    }
    return 0;
}
