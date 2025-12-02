#include <stdio.h>
#include "player.h"

void printPlayer(Player p) {
    printf("\nName: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Position: %s\n", p.position);
    printf("Goals: %d\n", p.goals);
    printf("Assists: %d\n", p.assists);
    printf("Injured: %s\n", p.injured ? "Yes" : "No");
}

void printInjuredPlayers(Player squad[], int count) {
    printf("\n===== INJURY REPORT =====\n");
    int found = 0;

    for(int i = 0; i < count; i++) {
        if (squad[i].injured) {
            printf("- %s (%s)\n", squad[i].name, squad[i].position);
            found = 1;
        }
    }

    if (!found) {
        printf("No injured players.\n");
    }
}
