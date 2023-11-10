#include <stdio.h>

int findMissingNumber(int M, int A, int B, int C) {
    int total = A * B * C;

    if (total == 0) {
        if (M == 0) {
            return 0;
        } else {
            return -1;
        }
    }

    int D = total / M;

    return D;
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int M, A, B, C;
        scanf("%d %d %d %d", &M, &A, &B, &C);

        int missingNumber = findMissingNumber(M, A, B, C);

        printf("%d\n", missingNumber);
    }

    return 0;
}
