#include <stdio.h>

int main()
{
    // double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};
    // char name[] = "Matija";

    // printf("%d bytes\n", sizeof(prices));

    // printf("%.2lf$", prices[3]);
    /*
        for (int i = 1; i <= sizeof(prices)/sizeof(prices[0]); i++)
        {
            printf("%.2lf\n", prices[i]);
        }
    */

    // 2D ARRAY == polje gdje svaki element je polje, korisno kod matrica, gridova i tablica podataka
    /*
        int numbers[2][3] = {
            {1, 2, 3},
            {4, 5, 6}

        };
        // unutar polja moraš specificirati maksimalan broj znakova. U drugu [] stavljaš broj koji će se odnositi na veličinu polja, odnosno koliko će znakova biti unuutra.
        // prva [] označava makismalan broja polja unutar polja, 2 su jer postoje dvije {}. PRIMJER: numbers[row number][col number]

        */

    int numbers[3][3];

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    int rows = sizeof(numbers) / sizeof(numbers[0]);//kalkulacija broja redova
    int cols = sizeof(numbers[0]) / sizeof(numbers[0][0]);//kalkulacija broja stupaca - veličina prvoga redova podijeljenja sa neko mveličinom iz prvog reda

    printf("rows: %d\n", rows);
    printf("cols: %d\n", cols);


    //kako bi isprintao 2-D polja moraš koristiti 2x for petlje
    for(int i =0;i<rows; i++){//row
        for(int j=0; j<cols;j++){//col
            printf("%d", numbers[i][j]);
        }
        printf("\n");
    }


    return 0;
}