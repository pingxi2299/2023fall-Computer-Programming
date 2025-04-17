#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int A, X, H, L, C, B;
    printf("Please enter A, X, H, L, C, B: ");
    scanf("%d %d %d %d %d %d", &A, &X, &H, &L, &C, &B);

    if (A < 0 || A > 10 || X < 2 || X > 100) {
        printf("Error: Invalid input.\n");
        return 1;
    }

    int dice[10];
    int i;

    for (i = 0; i < 10; i++) {
        dice[i] = rand() % X + 1;
    }

    printf("+---+ +---+ +---+ +---+ +---+\n");
    for (i = 0; i < 10; i++) {
        printf("|%2d | ", dice[i]);
    }
    printf("\n+---+ +---+ +---+ +---+ +---+\n");

    int sum = 0;
    for (i = 0; i < 10; i++) {
        if (i < H) {
            sum += dice[i];
        } else if (i >= 10 - L) {
            sum += dice[i];
        }
    }
    sum += C * B;

    printf("Highest %d: +---+ +---+\n", H);
    for (i = 0; i < H; i++) {
        printf("|%2d | ", dice[i]);
    }
    printf("+---+ +---+\n");

    printf("Lowest %d: +---+\n", L);
    for (i = 10 - L; i < 10; i++) {
        printf("|%2d | ", dice[i]);
    }
    printf("+---+\n");

    printf("Choose %d:\n", C);
    for (i = 0; i < C; i++) {
        printf("+---+ |%2d | +---+ ", dice[i]);
    }
    printf("\n");

    printf("result: %d\n", sum);

    return 0;
}
