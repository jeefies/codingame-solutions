// Code for https://www.codingame.com/ide/puzzle/shadows-of-the-knight-episode-1

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int center(int x, int y) {
    return (x + y) / 2;
}

int main()
{
    // width of the building.
    int W;
    // height of the building.
    int H;
    scanf("%d%d", &W, &H);
    // maximum number of turns before game over.
    int N;
    scanf("%d", &N);
    int nx, ny;
    scanf("%d%d", &nx, &ny);
    fprintf(stderr,"W, H = %d, %d\n", W, H);

    int lx = 0, ly = 0;
    int rx = W - 1, ry = H - 1;
    // game loop

    char bb[4];
    while (1) {
        scanf("%s", bb);

        switch (bb[0]) {
            case 'R':
                lx = nx;
                if (nx + 1 == rx)
                    lx = rx;
                break;
            case 'L':
                rx = nx;
                if (nx - 1 == lx)
                    rx = lx;
                break;
            case 'U':
                ry = ny;
                if (ny - 1 == ly) 
                    ry--;
                break;
            case 'D':
                ly = ny;
                if (ly + 1 == ry)
                    ly++;
                break;
        }

        switch (bb[1]) {
            case 'R':
            lx = nx;
                if (nx + 1 == rx)
                    lx = rx;
            break;
            case 'L':
            rx = nx;
                if (nx - 1 == lx)
                    rx = lx;
            break;
        }

        fprintf(stderr, "lx, rx, ly, ry = %d %d %d %d\n", lx, rx, ly, ry);
        nx = center(lx, rx);
        ny = center(ly, ry);
        printf("%d %d\n", nx, ny);
        fprintf(stderr, "nx, ny = %d %d\nbb = %s\n", nx, ny, bb);

    }

    return 0;
}
