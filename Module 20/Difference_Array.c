#include <stdio.h>
#include <stdlib.h>
int main() {
    int t; 
    scanf("%d", &t);
    while (t--) {
        int n; 
        scanf("%d", &n);
        int a[1000], b[1000], c[1000];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            b[i] = a[i]; 
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (b[j] > b[j + 1]) {
                    int temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            c[i] = abs(a[i] - b[i]);
        }
        for (int i = 0; i < n; i++) {
            printf("%d", c[i]);
            if (i < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
