#include <stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;
};
int main()
{

    // struct = kolekcija povezanih članova ("variabli")
    // mogu biti različiti tipovi podataka
    // postavljeni unutar jednoga imena unutar bloka memorije
    // SLIČNO JE klasama u drugim jezicima

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Matija");
    player1.score = 4;

    strcpy(player2.name, "Mafija");
    player2.score = 5;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);
    
    printf("%s\n", player2.name);
    printf("%d\n", player2.score);

    return 0;
}