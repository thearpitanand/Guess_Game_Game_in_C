#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number, guess, ng=1;
    int again=0;
    char name[30];
    srand(time(0));
    number = rand()%100 + 1;
    // printf("Number is %d \n", number); //This line will print the random number
    printf("\n");
    printf("*********Welcome to the Game*********");
    printf("\n");
    printf("Enter Players Name =====>>>>>> ");
    scanf("%s", name);
    printf("\n");
    printf("****You'r awsome lest play the game****");
    printf("\n");
    do {
        srand(time(0));
        number = rand()%100 + 1;
        printf("Guess the number between 1 to 100 \n");
        printf("\n");
        do
        {
            scanf("%d", &guess);
            printf("\n");
            again=0;
            if (guess>number)
            {
                printf("Lower number please \n");
                printf("\n");
            }
            else if (guess<number)
            {
                printf("Higher number please\n");
                printf("\n");
            }
            else
            {
                printf("%s Guessed it in %d attempts\n", name, ng);
                printf("\n");
            }
            ng++;
        } while (guess!=number);
        printf("If Your want to play this game again hit 1 and press enter else type any number\n");
        scanf("%d", &again);
        ng=1;
    } while (again==1);
    return 0;
}