#include <stdio.h>
#include <string.h>

int main() {
    char s[10001];
    int count[26] = {0}; 
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            count[s[i] - 'a']++;
        }
    }
          
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c - %d\n", 'a' + i, count[i]);
        }
    }
    return 0;
}
