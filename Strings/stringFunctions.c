#include <stdio.h>
#include <string.h> //ovo se mora include ako se želi koristiti string funckije

int main()
{
    char string1[] = "Matija";
    char string2[] = "Vrabelj";

    // strlwr(string1); //converts string to lowercase
    // strupr(string1); //converts string to uppercase
    // strcat(string1, string2); //appends string2 to end of string1
    // strncat(string1, string2, 1); //appends n charachters from string2 to string1
    // strcpy(string1, string2); //copy string2 to string1
    // strncpy(string1, string2, 4); //copy n charachtera of string2 to string1

    //strset(string1, '?'); //mijenja slova sa znakom
   // strnstr(string1, 'x', 1); // prvih n postavi znakom

    printf("%s", string1);

    return 0;
}