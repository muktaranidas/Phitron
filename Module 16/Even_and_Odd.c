#include <stdio.h>
void odd_even() {
    int n;
    scanf("%d", &n);
    int ar[n];
    int evenValue = 0, oddValue = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
        if (ar[i] % 2 == 0) {
            evenValue++;
        } else {
            oddValue++;
        }
    }
    printf("%d %d\n", evenValue, oddValue);
}
int main() {
    odd_even();
    return 0;
}
