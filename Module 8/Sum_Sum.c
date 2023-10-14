#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int pos = 0;
    int neg = 0;
    int num;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num > 0) {
            pos += num;
        }
        else if (num < 0) {
            neg += num;
        }
    }
    printf("%d %d\n", pos, neg);
    return 0;
}
