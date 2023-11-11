#include <stdio.h>
int main() {
    int t; 
    scanf("%d", &t);
    while (t--) {
        int n; 
        scanf("%d", &n);
        char size[n+1]; 
        scanf("%s", size);
        int countForTiger = 0, countForPathaan = 0;
        for (int i = 0; i < n; i++) {
            if (size[i] == 'T') {
                countForTiger++;
            } else if (size[i] == 'P') {
                countForPathaan++;
            }
        }
        if (countForTiger > countForPathaan) {
            printf("Tiger\n");
        } else if (countForPathaan > countForTiger) {
            printf("Pathaan\n");
        } else {
            printf("Draw\n");
        }
    }

    return 0;
}
