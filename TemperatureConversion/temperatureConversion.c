#include<stdio.h>
#include<ctype.h>

int main()
{
    char unit;
    float temp;

    printf("Is this temperature in (F) or (C): ");
    scanf("%c", &unit);
    unit = toupper(unit);//ova se funkcija koristi u slučaju ako je korisnik unio malo slovo umjesto velikoga

    if(unit == 'C')
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        float C = (temp*1.800) + 32.00; 
        printf("FAHRENHEIT: %.2f", C);


    }else if(unit == 'F'){
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        float C = (temp - 32)/1.8000;
        printf("CELSIUS: %.2f", C);
    }else{
        printf("\n %c is not valid unit in input!", unit);
    }

   
 




    return 0;
}