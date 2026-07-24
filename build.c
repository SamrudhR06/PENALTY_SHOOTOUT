#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int playerCorner;
    int keeperCorner;
    int score = 0;
    int i;

    srand(time(NULL));

    printf("===== PENALTY SHOOTOUT =====\n");

    for (i = 1; i <= 5; i++)
    {
        printf("\nPenalty %d\n", i);

        do
        {
            printf("Choose a corner (1-4): ");
            scanf("%d", &playerCorner);

            if (playerCorner < 1 || playerCorner > 4)
            {
                printf("Invalid input! Please choose a corner between 1 and 4.\n");
            }

        } while (playerCorner < 1 || playerCorner > 4);

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