#include <stdio.h>

int main()
{
    // memory = an array of bytes withim RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address = the address of where memory block is located (house address)

    char a;
    int b[3];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    

    printf("%p\n", &a);//HEX ispis
    printf("%p\n", &b);
    


    return 0;
}