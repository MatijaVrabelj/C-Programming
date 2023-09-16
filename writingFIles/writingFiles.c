#include <stdio.h>

int main()
{ 
     FILE *pF = fopen("C:\\Users\\Administrator\\Desktop\\test.txt", "a");

     fprintf(pF, "Bože daj mi snage! Molim te!");
     fclose(pF);
    
/*
   if(remove("test.txt") == 0)
   {
    printf("That file was deleted successfully!");
   }else{
    printf("That file was NOT deleted!");
   }
*/
    return 0;
}