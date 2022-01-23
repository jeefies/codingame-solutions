#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

// Solution one
int main()
{
    // the X position of the light of power
    int lx; // origin light_x
    // the Y position of the light of power
    int ly; // origin light_y
    // Thor's starting X position
    int ix; // origin initial_y
    // Thor's starting Y position
    int iy; // origin initial_y
    scanf("%d%d%d%d", &lx, &ly, &ix, &iy);

    fprintf(stderr, "%d %d %d %d", lx, ly, ix, iy);

    // game loop
    char r[3];
    while (1) {
        // The remaining amount of turns Thor can move. Do not remove this line.
        int remaining_turns;
        scanf("%d", &remaining_turns);
        memset(r, '\0', 3);

        if (iy < ly) {
            r[0] = 'S';
            iy++;
            if (ix < lx) {
                r[1] = 'E';
                ix++;
            } else if (ix > lx) {
                r[1] = 'W';
                ix--;
            }
        } else if (iy > ly) {
            r[0] = 'N';
            iy--;
            if (ix < lx) {
                r[1] = 'E';
                ix++;
            } else if (ix > lx) {
                r[1] = 'W';
                ix--;
            }
        } else {
            // Y is the same
            if (ix < lx) {
                r[0] = 'E';
                ix++;
            } else if (ix > lx) {
                r[0] = 'W';
                ix--;
            }
        }

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");


        // A single line providing the move to be made: N NE E SE S SW W or NW
        printf("%s\n", r);
    }

    return 0;
}

// Solution 2
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

 int min(int x, int y)  {
     return (x<y)?x:y;
 }

 int abs(int x){
     return (x<0)?-x:x;
 }

int turn() {
    int rturn;
    scanf("%d", &rturn);
    return rturn;
}

int main()
{
    // the X position of the light of power
    int lx; // origin light_x
    // the Y position of the light of power
    int ly; // origin light_y
    // Thor's starting X position
    int ix; // origin initial_y
    // Thor's starting Y position
    int iy; // origin initial_y
    scanf("%d%d%d%d", &lx, &ly, &ix, &iy);

    fprintf(stderr, "%d %d %d %d", lx, ly, ix, iy);

    // game loop
    // The remaining amount of turns Thor can move. Do not remove this line.

    int slanted = min(abs(ix-lx), abs(iy-ly));
    char ns[3];
    ns[2] = '\0';

    if (iy > ly) {
        ns[0] = 'N';
        iy -= slanted;
    } else {
        ns[0] = 'S';
        iy += slanted;
    }

    if (ix > lx) {
        ns[1] = 'W';
        ix -= slanted;
    } else {
        ns[1] = 'E';
        ix += slanted;
    }

    for (int i = 0; i < slanted; i++) {
        turn();
        printf("%s\n", ns);
    }

    fprintf(stderr, "OK");

    ns[1] = '\0';
    if (iy != ly) {
        ns[0] = (iy > ly) ? 'N' : 'S';
        for (int i = 0; i < abs(iy - ly); i++) {
            turn();
            printf("%s\n", ns);
        }
    } else {
        ns[0] = (ix > lx) ? 'W' : 'E';
        for (int i = 0; i < abs(ix - lx); i++) {
            turn();
            printf("%s\n", ns);
        }
    }

    return 0;
}

// official solution
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    scanf("%d%d%d%d", &lightX, &lightY, &initialTX, &initialTY);

    int thorX = initialTX;
    int thorY = initialTY;

    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        scanf("%d", &remainingTurns);
        char *directionX = "";
        char *directionY = "";
        if (thorY > lightY) {
            directionY = "N";
            thorY--;
        } else if (thorY < lightY) {
            directionY = "S";
            thorY++;
        }
        if (thorX > lightX) {
            directionX = "W";
            thorX--;
        } else if (thorX < lightX) {
            directionX = "E";
            thorX++;
        }
        printf("%s%s\n", directionY, directionX);
    }

    return 0;
}
