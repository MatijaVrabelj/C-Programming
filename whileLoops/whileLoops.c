#include <stdio.h>
#include <string.h>

int main()
{
    /*
    char name[25];
    printf("\nWhat's your name?");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';



    while (strlen(name) == 0)
    {
        printf("You did not enter your name!!!!");
        printf("\nWhat's your name?");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }
    printf("Hello %s", name);
    */

    int number = 0;
    int sum = 0;

    do
    {

        {
            printf("Type some numbers");
            scanf("%d", &number);
            if (number > 0)
            {
                sum += number;
            }
        }

       
    } while (number > 0);

     printf("Sum: %d", sum);
    return 0;
}