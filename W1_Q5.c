// c program to find D,P, and A of a circle
#include <stdio.h>
int main()
{
    float R, D = 0, P = 0, A = 0;
    printf("enter the radius of the given circle:");
    scanf("%f",&R);
    D = 2 * R;
    P = 2 * 3.14 * R;
    A = 3.14 * R * R;
    printf("diameter:%f\n", D);
    printf("perimeter:%f\n", P);
    printf("area:%f\n", A);
    return 0;
}
