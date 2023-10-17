#include<stdio.h>
#include<string.h>
int main ()
{
    char ch[5];
    // scanf("%s" , ch);
    // gets(ch);
    fgets(ch, 5, stdin);
    printf("%s %d %d\n" , ch, strlen(ch), sizeof(ch));
    return 0;
}