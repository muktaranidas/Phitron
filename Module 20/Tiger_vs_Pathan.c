#include <stdio.h>
int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    while (T--) {
        int N; // Number of rounds
        scanf("%d", &N);
        char S[N+1]; // String of size N
        scanf("%s", S);
        // Count the number of 'T' and 'P' in the string
        int count_T = 0, count_P = 0;
        for (int i = 0; i < N; i++) {
            if (S[i] == 'T') {
                count_T++;
            } else if (S[i] == 'P') {
                count_P++;
            }
        }
        // Compare the counts and determine the winner
        if (count_T > count_P) {
            printf("Tiger\n");
        } else if (count_P > count_T) {
            printf("Pathaan\n");
        } else {
            printf("Draw\n");
        }
    }

    return 0;
}
