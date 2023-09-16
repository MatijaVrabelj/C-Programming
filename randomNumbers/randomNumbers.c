#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // pseduo random numbers = set vrijednosti i elemenata koji su slučajni
    srand(time(0)); // ovo je važno koristiti kod generiranja radnom numbera.

    int number1 = (rand() % 6) + 1; // ovo generarira random broj od o do 5, ako hoćemo do 6 stavimo +1
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;
    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);
    return 0;
}