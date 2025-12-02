#ifndef PLAYER_H
#define PLAYER_H

typedef struct {
    char name[50];
    int age;
    char position[20];
    int goals;
    int assists;
    int injured;   // 0 = not injured, 1 = injured
} Player;

void printPlayer(Player p);
void printInjuredPlayers(Player squad[], int count);

#endif
