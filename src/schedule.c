#include <stdio.h>
#include "schedule.h"

void printSchedule(Match fixtures[], int count) {
    printf("\n===== FIXTURE LIST =====\n");
    for(int i = 0; i < count; i++) {
        printf("%d. %s vs %s - %s - %s\n",
            i+1,
            fixtures[i].homeTeam,
            fixtures[i].awayTeam,
            fixtures[i].date,
            fixtures[i].venue
        );
    }
}
