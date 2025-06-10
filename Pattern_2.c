#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int s = 1; s <= N - i; s++) {
            printf(" ");
        }
        // Print numbers from i to 1
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
