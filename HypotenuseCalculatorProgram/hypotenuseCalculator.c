#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C;

    printf("This program is for finding right angled trangle - HYPOTENUSE\n");
    printf("-------------------------------------------------------------------\n");
    printf("Please enter A: ");
    scanf("%lf", &A);
    printf("-------------------------------------------------------------------\n");
    printf("\n");
    printf("Please enter B: ");
    scanf("%lf", &B);
    printf("-------------------------------------------------------------------\n");

    C = sqrt(pow(A, 2) + pow(B, 2));
    printf("\n");
    printf("Hypotenuse of triangle is: %lf", C);
    return 0;
}