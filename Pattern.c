#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Top half including the middle
    for (int i = 0; i < N; i++) {
        // Print leading spaces
        for (int s = 0; s < N - 1 - i; s++) {
            printf(" ");
        }

        // Choose character based on line number
        char ch = (i % 2 == 0) ? '#' : '-';

        // Print characters
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    // Bottom half (mirror of top excluding the middle)
    for (int i = N - 2; i >= 0; i--) {
        // Print leading spaces
        for (int s = 0; s < N - 1 - i; s++) {
            printf(" ");
        }

        // Choose character based on line number
        char ch = (i % 2 == 0) ? '#' : '-';

        // Print characters
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}