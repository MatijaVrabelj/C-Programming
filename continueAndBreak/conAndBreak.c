#include<stdio.h>


int main()
{
    //continue = preskače dio koda i prisiljava iduću iteraciju unutar petlje
    //break = izlazi iz petlje

    for(int i=1;i<=20;i++)
    {
        if(i==13)
        {
            continue;
        }else if(i==16)
        {
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}