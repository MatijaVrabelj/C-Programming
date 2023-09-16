#include <stdio.h>
#include <string.h>
int main()
{
    char x[] = "water";
    char y[] = "lemonade";
    char z[15];

    strcpy(z, x);
    strcpy(x, y);
    strcpy(y, z);

    printf("X = %s\n", x);
    printf("Y = %s\n", y);

    return 0;
}