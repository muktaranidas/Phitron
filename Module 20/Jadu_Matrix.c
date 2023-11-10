#include <stdio.h>

int isJaduMatrix(int matrix[100][100], int N, int M) {
    // Check primary diagonal
    for (int i = 0; i < N; i++) {
        if (matrix[i][i] != 1) {
            return 0; // Not a Jadu Matrix
        }
    }

    // Check secondary diagonal
    for (int i = 0; i < N; i++) {
        if (matrix[i][N - 1 - i] != 1) {
            return 0; // Not a Jadu Matrix
        }
    }

    // Check rest of the cells
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if ((i != j) && (i + j != N - 1) && matrix[i][j] != 0) {
                return 0; // Not a Jadu Matrix
            }
        }
    }

    return 1; // Jadu Matrix
}

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

    // Check if it's a Jadu Matrix and print the result
    if (isJaduMatrix(matrix, N, M)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
