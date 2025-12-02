#include <stdio.h>
#include "menu.h"
#include "team.h"
#include "player.h"
#include "match.h"
#include "schedule.h"

// ================= REAL MADRID PLAYERS ===================
Player madridPlayers[] = {
    {"Thibaut Courtois", 32, "GK", 0, 0, 0},
    {"Andriy Lunin", 26, "GK", 0, 0, 0},
    {"Sergio Mestre", 19, "GK", 0, 0, 0},

    {"Dani Carvajal", 33, "RB", 1, 3, 1},
    {"Eder Militao", 28, "CB", 2, 0, 0},
    {"David Alaba", 32, "CB", 1, 0, 1},
    {"Trent Alexander-Arnold", 27, "RB", 2, 15, 0},
    {"Alvaro Carreras", 22, "LB", 0, 2, 0},
    {"Antonio Rudiger", 32, "CB", 1, 0, 0},
    {"Ferland Mendy", 30, "LB", 0, 1, 0},
    {"Dean Huijsen", 19, "CB", 0, 0, 1},
    {"Fran Garcia", 25, "LB", 0, 1, 0},
    {"Raul Asencio", 20, "CB", 0, 0, 0},

    {"Jude Bellingham", 21, "CM", 22, 10, 0},
    {"Eduardo Camavinga", 22, "CM", 3, 4, 0},
    {"Federico Valverde", 26, "CM", 6, 8, 0},
    {"Dani Ceballos", 28, "CM", 0, 2, 0},
    {"Aurelien Tchouameni", 25, "CDM", 2, 1, 0},
    {"Arda Guler", 20, "CAM", 4, 2, 0},
    {"Franco Mastantuono", 18, "CAM", 0, 1, 0},
    {"Thiago Pitarch", 18, "CM", 0, 0, 0},

    {"Vinicius Junior", 25, "LW", 18, 10, 0},
    {"Endrick", 19, "ST", 6, 2, 0},
    {"Kylian Mbappe", 26, "ST", 30, 8, 0},
    {"Rodrygo", 24, "RW", 12, 9, 0},
    {"Brahim Diaz", 25, "RW", 5, 4, 0},
    {"Gonzalo Garcia", 21, "ST", 2, 1, 0}};

int madridPlayerCount = sizeof(madridPlayers) / sizeof(Player);

// ================= BARCELONA PLAYERS ===================
Player barcaPlayers[] = {
    {"Marc-Andre Ter Stegen", 33, "GK", 0, 0, 1},
    {"Joan Garcia", 24, "GK", 0, 0, 0},
    {"Wojciech Szczesny", 35, "GK", 0, 0, 0},

    {"Alejandro Balde", 22, "LB", 2, 4, 0},
    {"Ronald Araujo", 26, "CB", 3, 1, 1},
    {"Pau Cubarsi", 18, "CB", 0, 0, 0},
    {"Andreas Christensen", 29, "CB", 1, 0, 0},
    {"Gerard Martin", 20, "RB", 0, 1, 0},
    {"Jules Kounde", 27, "RB", 1, 2, 0},
    {"Eric Garcia", 24, "CB", 1, 0, 0},

    {"Gavi", 21, "CM", 4, 3, 1},
    {"Pedri", 22, "CM", 5, 7, 0},
    {"Fermin Lopez", 22, "CAM", 6, 2, 1},
    {"Dani Olmo", 27, "CAM", 4, 4, 0},
    {"Frenkie de Jong", 28, "CM", 3, 7, 0},

    {"Ferran Torres", 25, "LW", 7, 6, 0},
    {"Robert Lewandowski", 37, "ST", 25, 9, 0},
    {"Lamine Yamal", 18, "RW", 11, 10, 0},
    {"Raphinha", 29, "RW", 9, 6, 0},
    {"Marcus Rashford", 28, "LW", 5, 3, 0}};

int barcaPlayerCount = sizeof(barcaPlayers) / sizeof(Player);

int main()
{

    // Setup Madrid team struct
    Team madrid = {"Real Madrid", "Xabi Alonso", "4-3-3", 96};
    madrid.playerCount = madridPlayerCount;
    for (int i = 0; i < madrid.playerCount; i++)
    {
        madrid.squad[i] = madridPlayers[i];
    }

    // Setup Barca team struct
    Team barca = {"Barcelona", "Hansi Flick", "4-3-3", 77};
    barca.playerCount = barcaPlayerCount;
    for (int i = 0; i < barca.playerCount; i++)
    {
        barca.squad[i] = barcaPlayers[i];
    }

    // ==== FIXTURE LIST ====
    Match madridFixtures[] = {
        {"Athletic Club", "Real Madrid", "3 Dec", "San Mames", 0, 0, 0},
        {"Real Madrid", "Celta Vigo", "7 Dec", "Bernabeu", 0, 0, 0},
        {"Alaves", "Real Madrid", "14 Dec", "Mendizorroza", 0, 0, 0},
        {"TBD", "Real Madrid", "16 Dec", "Away", 0, 0, 0},
        {"Real Madrid", "Sevilla", "20 Dec", "Bernabeu", 0, 0, 0},
        {"Real Madrid", "Real Betis", "4 Jan", "Bernabeu", 0, 0, 0},
        {"TBD", "Real Madrid", "8 Jan", "Saudi Arabia", 0, 0, 0},
        {"Real Madrid", "Levante", "18 Jan", "Bernabeu", 0, 0, 0},
        {"Villarreal", "Real Madrid", "25 Jan", "La Ceramica", 0, 0, 0}};

    int madridFixtureCount = sizeof(madridFixtures) / sizeof(Match);

    int choice = 0;

    Match barcaFixtures[] = {
        {"Barcelona", "Atletico Madrid", "2 Dec", "Camp Nou", 0, 0, 0},
        {"Real Betis", "Barcelona", "6 Dec", "Villamarin", 0, 0, 0},
        {"Barcelona", "Eintracht Frankfurt", "9 Dec", "Camp Nou", 0, 0, 0},
        {"Barcelona", "Osasuna", "13 Dec", "Camp Nou", 0, 0, 0},
        {"TBD", "Barcelona", "17 Dec", "Away", 0, 0, 0},
        {"Villarreal", "Barcelona", "21 Dec", "La Ceramica", 0, 0, 0},
        {"Espanyol", "Barcelona", "3 Jan", "Stage Front Stadium", 0, 0, 0},
        {"Barcelona", "Athletic Club", "7 Jan", "Saudi Arabia", 0, 0, 0},
        {"Real Sociedad", "Barcelona", "17 Jan", "Anoeta", 0, 0, 0},
        {"Slavia Praha", "Barcelona", "21 Jan", "Eden Arena", 0, 0, 0},
        {"Barcelona", "Real Oviedo", "24 Jan", "Camp Nou", 0, 0, 0},
        {"Barcelona", "Copenhague", "28 Jan", "Camp Nou", 0, 0, 0},
        {"Elche", "Barcelona", "31 Jan", "Martinez Valero", 0, 0, 0}};

    int barcaFixtureCount = sizeof(barcaFixtures) / sizeof(Match);

    while (choice != 5)
    {
        mainMenu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printTeam(madrid);
            break;

        case 2:
            printTeam(barca);
            break;

        case 3:
        {
            int idx, tchoice;
            printf("\nEnter player number: ");
            scanf("%d", &idx);

            printf("\nChoose team:\n1. Real Madrid\n2. Barcelona\n");
            scanf("%d", &tchoice);

            if (tchoice == 1 && idx >= 1 && idx <= madrid.playerCount)
                printPlayer(madrid.squad[idx - 1]);
            else if (tchoice == 2 && idx >= 1 && idx <= barca.playerCount)
                printPlayer(barca.squad[idx - 1]);
            else
                printf("Invalid selection!\n");

            break;
        }
        case 4:
        {
            printf("\nView fixtures for:\n1. Real Madrid\n2. Barcelona\n");
            int fchoice;
            scanf("%d", &fchoice);

            if (fchoice == 1)
                printSchedule(madridFixtures, madridFixtureCount);
            else if (fchoice == 2)
                printSchedule(barcaFixtures, barcaFixtureCount);
            else
                printf("Invalid option!\n");

            break;
        }

        case 5:
        {
            printf("\nShow injury list for:\n1. Real Madrid\n2. Barcelona\n");
            int tchoice;
            scanf("%d", &tchoice);

            if (tchoice == 1)
                printInjuredPlayers(madrid.squad, madrid.playerCount);
            else if (tchoice == 2)
                printInjuredPlayers(barca.squad, barca.playerCount);
            else
                printf("Invalid selection!\n");

            break;
        }
        case 6:
            printf("\nUpdate result for:\n1. Real Madrid\n2. Barcelona\n");
            int mchoice;
            scanf("%d", &mchoice);

            if (mchoice == 1)
                updateMatchResult(&madrid);
            else if (mchoice == 2)
                updateMatchResult(&barca);
            else
                printf("Invalid team!\n");

            break;
        case 7:
            printf("Exiting... Goodbye!\n");
            break;

        default:
            printf("Invalid option\n");
        }
    }

    return 0;
}
