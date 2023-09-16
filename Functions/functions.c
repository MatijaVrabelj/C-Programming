#include <stdio.h>
#include <math.h>

void hello(char[], int); //function prototype - neki kompajleri ne žele raditi bez prototypa!
/*
void birthday()
{
    int count = 0;
    for (int i = 1; i <= 5; i++)
    {
        count++;
        printf("\n%d. Happy birthday to you!", count);
    }
}
*/
int square()
{

    return pow(3, 2);
}
int main()
{   
    char name[]= "Matija";
    int age = 24;

    hello(name, age);

    /*double x = 9;
    x = square(3);
    printf("%.2lf\n", x);
    //  birthday();
    */
    return 0;
}
void hello(char name[], int age)
{
    printf("Hello %s\n", name);
    printf("You are %d years old!", age);

}