#include<stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main()
{
    //enum = a user defined  type of named integer idnetifiers
    //       helps to make ap rogram more readable

    enum Day today = Tue;

   // printf("%d", today); //ENUM nije string, ali se mogu tretrirati kao INT

   if(today == 1 || today == 7)
   {
    printf("it's the weekend! Party time!");
   }else{
    printf("I have to work today!");
   }
    return 0;
}