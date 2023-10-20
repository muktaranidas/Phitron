#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, x;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &x);
        int searchvalue = 0; 
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                searchvalue = 1;
                break;
            }
        }
        if (searchvalue) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
