#include <stdio.h>

int main()
{
    // BITWISE OPERATORS = special operators used in bit level programming

    //& = AND
    //| = OR
    //^ = XOR - samo jedan može biti 1 
    //<< LEFT SHIFT
    //>> RIGHT SHIFT

    int x = 6;  // 00000110
    int y = 12; // 00001100
    int z = 0;  // 00001100

    z = x & y;
    printf("AND = %d\n", z);

    z = x | y;
    printf("OR = %d\n", z);

    z = x ^ y;
    printf("XOR = %d\n", z);

    z = x << 2;
    printf("<< = %d\n", z);

    z = x >> 2;
    printf(">> = %d\n", z);
    return 0;
}