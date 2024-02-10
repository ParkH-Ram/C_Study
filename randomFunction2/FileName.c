#include <stdio.h>
#include <stdlib.h>

main() {
    unsigned int ctime = time(NULL);
    int x = 0, y = 0, z = 0;

    srand(ctime);

    //generate unique 3 numbers
    do {
        x = rand() % 10;
        y = rand() % 10;
        z = rand() % 10;
    } while (x == y || x == z || y == z);

    //printf("%d %d %d\n",x, y, z);

    for (int round = 1; round <= 10; round++) {
        int strike = 0, ball = 0;
        int xi = 0, yi = 0, zi = 0; //user input numbers

        printf("Round %d, Input x y z: ", round);
        scanf_s("%d %d %d", &xi, &yi, &zi);

        if (x == xi)
            strike++;
        else if (x == yi || x == zi)
            ball++;

        if (y == yi)
            strike++;
        else if (y == zi || y == zi)
            ball++;

        if (z == zi)
            strike++;
        else if (z == xi || z == yi)
            ball++;

        if (strike == 3) {
            printf("3 Strike!!");
            break;
        }

        printf("%dS %dB\n", strike, ball);

        if (round == 10) {
            printf("OUT!! It was %d %d %d\n", x, y, z);
        }
    }
}
