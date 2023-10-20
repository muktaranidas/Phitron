#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) { 
        char s[10001];
        scanf("%s", s);
        int countcapital = 0;
        int countsmall = 0;
        int countdigits = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                countcapital++;
            } else if (s[i] >= 'a' && s[i] <= 'z') {
                countsmall++;
            } else if (s[i] >= '0' && s[i] <= '9') {
                countdigits++;
            }
        }
        printf("%d %d %d\n", countcapital, countsmall, countdigits);
    }

    return 0;
}
