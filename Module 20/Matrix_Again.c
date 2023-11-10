#include <stdio.h>

int main() {
    int N, M; // Rows and Columns of the matrix
    scanf("%d %d", &N, &M);

    int matrix[100][100];

    // Input matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print values of the last row
    for (int j = 0; j < M; j++) {
        printf("%d ", matrix[N - 1][j]);
    }
    printf("\n");

    // Print values of the last column
    for (int i = 0; i < N; i++) {
        printf("%d ", matrix[i][M - 1]);
    }

    return 0;
}
