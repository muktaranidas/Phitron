#include <stdio.h>

void printSpaces(int spaces) {
    for (int i = 0; i < spaces; i++) {
        printf(" ");
    }
}

void printStars(int stars) {
    for (int i = 0; i < stars; i++) {
        printf("*");
    }
}

void printTree(int n) {
    // Print the top part of the tree
    for (int i = 1; i <= n; i += 2) {
        printSpaces((n - i) / 2);
        printStars(i);
        printf("\n");
    }

    // Print the bottom part of the tree
    for (int i = 0; i < 3; i++) {
        printSpaces((n - 1) / 2);
        printf("*\n");
    }
}

int main() {
    int N;

    // Read input
    // printf("Enter the size of the tree (N, where N is odd): ");
    scanf("%d", &N);

    // Check if N is odd
    if (N % 2 == 0 || N < 1 || N > 21) {
        printf("Invalid input! N should be odd and between 1 and 21.\n");
        return 1;
    }

    // Print the Christmas tree
    printTree(N);

    return 0;
}
