#ifndef TEAM_H
#define TEAM_H

#include "player.h"

typedef struct {
    char name[50];
    char managerName[50];
    char formation[10];
    int trophies;
    Player squad[30];
    int playerCount;
} Team;

void printTeam(Team t);
void updateMatchResult(Team *team);


#endif
