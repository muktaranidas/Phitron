#include <stdio.h>
#include <string.h>
int is_palindrome(const char * str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; 
        }
    }
    return 1;
}
int main() {
    char s[1001]; 
    scanf("%s", s);
    if (is_palindrome(s)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    return 0;
}
