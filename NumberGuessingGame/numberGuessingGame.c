#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int counter = 1;
int N = 100;
int main()
{
     srand(time(0));
    int guessNumber;
    int choosenNumber = (rand() % 100) + 1;
     

    printf("Guess number between 0 and %d!\n", N);

    while (guessNumber != choosenNumber)
    {
        if (counter > 3)
        {
            printf("You loose!\n");
            printf("The choosen number is %d", choosenNumber);
            break;
        }
        scanf("%d", &guessNumber);

        if (guessNumber > choosenNumber)
        {
            printf("Go lower!\n");
            counter++;
        }
        else if (guessNumber < choosenNumber)
        {
            printf("Go higher!\n");
            counter++;
        }

        if (guessNumber == choosenNumber)
        {
            printf("That's it!\n");
        }
    }
    return 0;
}