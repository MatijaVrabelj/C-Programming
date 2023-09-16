#include <stdio.h>


//ovo je zapravo bubble sort!
void sort(char array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void print(char array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%c ", array[i]);
    }


}

int main()
{
    //int array[] = {9, 10, 4, 6, 8, 7, 2, 1, 3, 5};
    char array[] = {'F', 'A', 'B', 'C', 'P', 'H', 'K'};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    print(array, size);

    return 0;
}