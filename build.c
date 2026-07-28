#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int playerCorner;
    int keeperCorner;
    int score = 0;
    int i;
    int result;

    srand(time(NULL));

    printf("===== PENALTY SHOOTOUT =====\n");

    for (i = 1; i <= 5; i++)
    {
        printf("\nPenalty %d\n", i);

        do
        {
            printf("\nChoose a corner (1-4): ");
            result = scanf("%d", &playerCorner);
            if(result != 1){
                printf("\n Invalid Input entered ,Please enter a number (1-4):");
                while(getchar()!='\n');
            }
            if (result==1 && (playerCorner < 1 || playerCorner > 4))
            {
                printf("Invalid input! Please choose a corner between 1 and 4.\n");
            }

        } while (result!=1 || (playerCorner < 1 || playerCorner > 4));

        keeperCorner = rand() % 4 + 1;

        printf("You shot at corner %d\n", playerCorner);
        printf("Keeper dived at corner %d\n", keeperCorner);

        if (playerCorner == keeperCorner)
        {
            printf("SAVE!!\n");
        }
        else
        {
            printf("GOAL!!\n");
            score++;
        }
    }

    printf("\n===== MATCH OVER =====\n");
    printf("Total goals scored: %d/5\n", score);

    if (score >= 3)
    {
        printf("You Win!!\n");
    }
    else
    {
        printf("Keeper saved the day. You Lose!\n");
    }

    return 0;
}