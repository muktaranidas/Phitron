#include <stdio.h>
int main() {
    int n, m; 
    scanf("%d %d", &n, &m);
    int matrix[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int j = 0; j < m; j++) {
        printf("%d ", matrix[n - 1][j]);
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][m - 1]);
    }
    return 0;
}
