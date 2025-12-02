#ifndef MATCH_H
#define MATCH_H

typedef struct {
    char homeTeam[50];
    char awayTeam[50];
    char date[20];
    char venue[50];
    int played;
    int homeGoals;
    int awayGoals;
} Match;

#endif
