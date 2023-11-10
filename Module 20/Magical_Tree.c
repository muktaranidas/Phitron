#include <stdio.h>

void printSpaces(int num) {
    for (int i = 0; i < num; i++) {
        printf(" ");
    }
}

void printStars(int num) {
    for (int i = 0; i < num; i++) {
        printf("*");
    }
}

int main() {
    int N; // Size of the tree
    scanf("%d", &N);

    // Print the upper part of the tree
    for (int i = 1; i <= N; i += 2) {
        printSpaces((N - i) / 2);
        printStars(i);
        printf("\n");
    }

    // Print the lower part of the tree (trunk)
    for (int i = 0; i < N / 2; i++) {
        printSpaces(N / 2);
        printStars(1);
        printf("\n");
    }

    return 0;
}
