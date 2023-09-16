#include <stdio.h>
#include <stdbool.h>

int main()
{
    // variable = alocirano mjesto unutar memorije u koje se sprema neka određena naša vrijednosti
    //           većinom svaka varijabla ima neko ime pod kojim je spremljena određena vrijednost, stoga korisitmo imena preko kojioh stpamo u kontakt s oidređenom vrijednosti
    //            prilikom deklariranja varijabli moramo postaviti konkretan top podataka koji spremamo u tu varijablu, cijeli broj (int), decimalni (double), ...
    // foramt specifier % = definira i formatira tio podatka koji će se prikazati
    // c - karakter, s - string, f - float, lf - double, d - integer, %.1 - decimalna preciznost, %1 - minimu field width, %- left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;


    printf("Item 1: $%8.2f\n", item1); // ova 8 označava field width, koliko želimo prostora prije ispisa tog broja
    printf("Item 2: $%-8.2f\n", item2);// ova 8 označava field width, ali u suprotnome smjeru, dakle poslije toga broja
    printf("Item 3: $%8.2f\n", item3); //




    int x; // dekalaracija
    x = 5; // inicijalizacija

    int y = 321; // deklaracija i inacijalizacija

    int age = 100;          // integer
    float cm = 20.5;        // floating point number
    char grade = 'A';       // single character
    char name[] = "Matija"; // array of characters

    bool e = true;

    printf("You are %d years old!\n", age);
    printf("Hello, %s\n", name);
    printf("Your average grade is %c\n", grade);
    printf("Your dick size is %0.2f", cm);

    return 0;
}