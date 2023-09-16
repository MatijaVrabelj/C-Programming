#include <stdio.h>

int main()
{
    char grade;
    // SWITCH = može se koristiti za zamjenu umjesto else if statement
    printf("\n Enter a  letter grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect!\n");
        break;
    case 'B':
        printf("You did good!!\n");
        break;
    case 'C':
        printf("You did okay!!\n");
        break;
    case 'D':
        printf("At least it's not an F!\n");
        break;
    case 'F':
        printf("YOU FAILED!\n");
        break;

    default:
        printf("That's not a valid grade!");
        break;
    }

  
    return 0;
}