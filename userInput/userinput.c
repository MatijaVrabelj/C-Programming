#include <stdio.h>
#include <string.h>

int main()
{
    char name[25];//veličina je 25 bajtova, odnosno 25 znakova jer char prihvaća samo 25 znakova.
    int age;

    printf("What is your name?\n");
    //scanf("%s", name);
    fgets(name, 25, stdin);//ova funkcija omogućava unos podataka, odnosno čitanje nakon pritiska na space, odnosno praznine. I automatski stavlja u novi red!
    name[strlen(name) -1] = "\0";


    printf("Enter your age.\n");
    scanf("%d", &age);

    printf("Hello %s, how are you?\n", name);
    printf("Your age is: %d \n", age);




    return 0;
}