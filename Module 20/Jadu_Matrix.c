#include <stdio.h>
int isJaduMatrix(int matrix[100][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        if (matrix[i][i] != 1) {
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        if (matrix[i][n - 1 - i] != 1) {
            return 0; 
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i != j) && (i + j != n - 1) && matrix[i][j] != 0) {
                return 0; 
            }
        }
    }
    return 1; 
}
int main() {
    int n, m; 
    scanf("%d %d", &n, &m);
    int matrix[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (isJaduMatrix(matrix, n, m)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
