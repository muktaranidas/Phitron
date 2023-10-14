#include <stdio.h>

int main() {
    int N;
    // printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N <= 0) {
        // printf("N must be a positive integer.\n");
        return 1;
    }

    int positiveSum = 0;
    int negativeSum = 0;

    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);

        if (num > 0) {
            positiveSum += num;
        } else if (num < 0) {
            negativeSum += num;
        }
    }

    printf("Sum of positive numbers and sum of negative numbers: %d %d\n", positiveSum, negativeSum);

    return 0;
}
