#include <stdio.h>
#include <stdbool.h>

int main()
{
    // logical operator = && (AND) provjerava jesu li dva ili više uvjeta istinita

    float temp = 5;
    bool sunny = true;

    if (temp >= 0 && temp <= 35 && sunny)
    {
        printf("\nWeather is good!\n");
    }
    else
    {
        printf("\nWeather is bad!\n");
    }
    printf("---------------------------------------\n");

    // logical operator = || (OR) provjerava jel je bar jedan uvjet istinit

    if (temp >= 0 || temp <= 35 || sunny)
    {
        printf("\nWeather is good!\n");
    }
    else
    {
        printf("\nWeather is bad!\n");
    }
    printf("---------------------------------------\n");
    // logical operator = !(NOT) mjenja stanje uvjeta iz true u false

    if (!sunny == true)
    {
        printf("\nIt's sunny outside!\n");
    }
    else
    {
        printf("\nIt's not cloudy outside!\n");
    }

    return 0;
}