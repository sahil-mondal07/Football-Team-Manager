#include <stdio.h>
#include "team.h"

void printTeam(Team t)
{
    printf("Team: %s\n", t.name);
    printf("Manager: %s\n", t.managerName);
    printf("Formation: %s\n", t.formation);
    printf("Trophies: %d\n", t.trophies);
    printf("Player Count: %d\n\n", t.playerCount);

    printf("Players:\n");
    for (int i = 0; i < t.playerCount; i++)
    {
        printPlayer(t.squad[i]);
        printf("\n");
    }
}
// ===== MATCH RESULT UPDATE FUNCTION =====
void updateMatchResult(Team *team)
{
    int goals;
    printf("\nHow many goals did %s score? ", team->name);
    scanf("%d", &goals);

    for (int i = 0; i < goals; i++)
    {
        int num;
        printf("Enter squad index (0 to %d) for goal scorer: ", team->playerCount - 1);
        scanf("%d", &num);

        if (num >= 0 && num < team->playerCount)
        {
            team->squad[num].goals++;
        }
        else
        {
            printf("Invalid player, skipping...\n");
        }
    }

    printf("\nStats updated successfully!\n");
}
