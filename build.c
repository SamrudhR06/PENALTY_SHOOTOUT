#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int player_corner;
    int keeper_corner;
    int score = 0;
    int i;

    srand(time(0));

    printf("----- Penalty Shootout -----\n");

    for (i = 1; i <= 5; i++)
    {
        printf("\nEnter the corner at which you want to shoot (1-4): ");
        scanf("%d", &player_corner);

        keeper_corner = rand() % 4 + 1;

        printf("You shot at corner %d\n", player_corner);
        printf("Keeper dived at corner %d\n", keeper_corner);

        if (player_corner == keeper_corner)
        {
            printf("Save!\n");
        }
        else
        {
            printf("Goal!\n");
            score++;
        }
    }

    printf("\n----- Final Whistle! -----\n");
    printf("Total goals scored: %d\n", score);

    if (score >= 3)
    {
        printf("\nMatch won!!\n");
    }
    else
    {
        printf("\nGoalkeeper saved the day! Match lost.\n");
    }

    return 0;
}