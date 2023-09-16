#include<stdio.h>
int findMax(int x, int y)
{
    return (x > y) ? x : y;
}

int main()
{

    //ternary operators = shortcut to if/else when assigning/returning value
    //(condition) ? value if true : value if false -> objašnjenje: ako je (condition) true vračamo neki value (PRIJE:), a ako je false vraćamo false, odnosno ono poslije :

    int max = findMax(5, 4);

    printf("%d", max);



    return 0;
}