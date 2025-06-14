#include <stdio.h>

int count_before_one(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            break; 
        }
        count++; 
    }

    return count; 
}

int main() {
    int N;
    scanf("%d", &N); 

    int A[1000]; 

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]); 
    }

    int result = count_before_one(A, N);
    printf("%d\n", result);

    return 0;
}
