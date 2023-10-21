#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int w = m1 * d;
        int initialday = d;
        int combinedday = w / (m1 + m2);
        int fewerday = initialday - combinedday;
        printf("%d\n", fewerday);
    }
    return 0;
}
