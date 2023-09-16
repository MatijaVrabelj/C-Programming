#include <stdio.h>
#include <math.h>

int main()
{
    double A = sqrt(9);
    double B = pow(2, 4); // prvi broj je baza koji se diže na neku drugu potenciju, dakle 2^4
    int C = round(3.14);
    int D = ceil(3.14);  // zaokruži na veću  potenciju
    int E = floor(3.99); // zaokruži na manju vrijednost
    double F = fabs(-5); // apsolutna vrijednost broja
    double G = log(3);   // logaritam broja
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("%lf", J);
    return 0;
}