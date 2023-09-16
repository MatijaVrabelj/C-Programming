#include <stdio.h>
#include <ctype.h>

int main()
{
    char questions[][100] = {"1. What year did the C langugage debut?: ",
                             "2. Who is credited with creating C?: ",
                             "3. What is the predecessor of C?: "};

    char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999.",
                           "A.Dennis Ritchie", "B. Nikola Tesla", "C. John Cena", "D. Doc Brown",
                           "A. Objective C", "B. B", "C. C++", "D. C#"};

    char answers[3] = {'B', 'A', 'B'};
    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("QUIZ GAME\n");

    for (int i = 0; i < numberOfQuestions; i++)
    {
        printf("*************************\n");
        printf("%s\n", questions[i]);
        printf("*************************\n");

        // i*4 dakle i = 0, stoga će j biti 0, a dok dođe do 1 onda će biti i bit
        // bit će svaka 4. iteracija
        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }
        printf("guess: ");
        scanf(" %c", &guess);
        // scanf("%c"); // clear \n from input buffer
        guess = toupper(guess); // ako se unese malo slovo

        if (guess == answers[i])
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong!\n");
        }
        printf("*************************\n");
        printf("FINAL SCORE: %d/%d\n", score, numberOfQuestions);
        printf("*************************\n");
 
 
   }

    return 0;
}