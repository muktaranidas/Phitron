#include <stdio.h>
int findMissingNumber(int m, int a, int b, int c) {
    int d = m / (a * b * c);
    if (a * b * c * d == m) {
        return d;
    } else {
        return -1;
    }
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int m, a, b, c;
        scanf("%d %d %d %d", &m, &a, &b, &c);
        int result = findMissingNumber(m, a, b, c);
        printf("%d\n", result);
    }
    return 0;
}
