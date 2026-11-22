#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BRANCHES 3
#define FLOORS 5
#define ROOMS 10

int main(void) {
    int chain[BRANCHES][FLOORS][ROOMS];
    int branch, floor, room;
    int branchOccupied, totalOccupied = 0;
    int totalRooms = BRANCHES * FLOORS * ROOMS;

    /* Seed the random number generator once */
    srand((unsigned int)time(NULL));

    printf("=== Hotel Chain Occupancy Across All Branches ===\n\n");

    for (branch = 0; branch < BRANCHES; branch++) {
        branchOccupied = 0;

        for (floor = 0; floor < FLOORS; floor++) {
            for (room = 0; room < ROOMS; room++) {
                /* Assign random occupancy: 1 = occupied, 0 = vacant */
                chain[branch][floor][room] = rand() % 2;

                if (chain[branch][floor][room] == 1) {
                    branchOccupied++;
                    totalOccupied++;
                }
            }
        }

        printf("Branch %d: Occupied = %d, Vacant = %d\n",
               branch + 1, branchOccupied, (FLOORS * ROOMS) - branchOccupied);
    }

    printf("\n----\n");
    printf("Total Occupied Rooms Across All Branches: %d / %d\n",
           totalOccupied, totalRooms);

    return 0;
}