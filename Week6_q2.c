#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FLOORS 5
#define ROOMS 10

int main(void) {
    /* Declare 2D array with 5 rows (floors) and 10 columns (rooms) */
    int occupancy[FLOORS][ROOMS];
    int floor, room;
    int occupiedCount, vacantCount;

    /* Seed the random number generator once */
    srand((unsigned int)time(NULL));

    printf("=== Room Occupancy (1 = Occupied, 0 = Vacant) ===\n\n");

    for (floor = 0; floor < FLOORS; floor++) {
        occupiedCount = 0;
        vacantCount = 0;

        printf("Floor %d: ", floor + 1);

        for (room = 0; room < ROOMS; room++) {
            /* Assign random 0 or 1 to each room */
            occupancy[floor][room] = rand() % 2;
            printf("%d ", occupancy[floor][room]);

            if (occupancy[floor][room] == 1) {
                occupiedCount++;
            } else {
                vacantCount++;
            }
        }

        printf(" | Occupied: %d, Vacant: %d\n", occupiedCount, vacantCount);
    }

    return 0;
}