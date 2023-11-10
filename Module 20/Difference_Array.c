#include <stdio.h>
#include <stdlib.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N; // Size of the array
        scanf("%d", &N);

        int A[1000], B[1000], C[1000];

        // Input array A
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            B[i] = A[i]; // Make a copy of array A
        }

        // Sort array B in ascending order
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                if (B[j] > B[j + 1]) {
                    // Swap elements if they are in the wrong order
                    int temp = B[j];
                    B[j] = B[j + 1];
                    B[j + 1] = temp;
                }
            }
        }

        // Calculate array C
        for (int i = 0; i < N; i++) {
            C[i] = abs(A[i] - B[i]);
        }

        // Output array C
        for (int i = 0; i < N; i++) {
            printf("%d", C[i]);
            if (i < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
