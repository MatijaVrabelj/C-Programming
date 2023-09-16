#include <stdio.h>

int main()
{
    FILE *pF = fopen("C:\\Users\\Administrator\\Desktop\\readingfiles.txt", "r");
    char buffer[255];
    
    if (pF == NULL)
    {
        printf("unable to open file!");
    }
    else
    {
        while (fgets(buffer, 255, pF) != 0)
        {

            printf("%s", buffer);
        }
    }

    fclose(pF);

    return 0;
}