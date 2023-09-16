#include <stdio.h>

int main()
{
    // nested loop = a loop insade of antother loop.

    int col, row;
    char symbol;

    printf("Enter a number of rows: ");
    scanf("%d", &row);
    printf("\nEnter number of columns: ");
    scanf("%d", &col);
   // scanf(" %c");

    printf("\nEnter a symbol to use: ");
    scanf(" %c", &symbol);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}