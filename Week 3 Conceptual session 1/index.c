#include<stdio.h>
#include<string.h>
int main ()
{
    // char ch[5];
    // // scanf("%s" , ch);
    // // gets(ch);
    // fgets(ch, 5, stdin);
    // printf("%s %d %d\n" , ch, strlen(ch), sizeof(ch));

    int t;
    scanf("%d" , &t);
    
    getchar();
    while (t--)
    {
    char ch[100];
    // scanf("%s" , ch);
    //   gets(ch);
       fgets(ch, 100, stdin);
    printf("%s\n" , ch);
      
    } 
    
    return 0;
}