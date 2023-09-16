#include <stdio.h>

int main()
{
    // constant - konstane su vrijednosti koje ne mogu biti promjenjene od strane programa prilikom njihovog izvođenja - const je ključna riječ

    const float pi = 3.14159;

   // pi = 420.69; -> dakkle ovo neće igrati zbog const!

    printf("%f", pi);

    return 0;
}