#include<stdio.h>
#include<string.h>
int main ()
{
    int a[100] ;
    scanf("%s",a);

    int st = strlen(a);
    printf("%d\n" , st);

    // while
    // int count = 0;
    // int i=0;
    // while (a[i]!='\0')
    // {
    //     count++;
    //     i++;
    // }
    // printf("%d\n" , count);
    

    // for
    // for(int i=0;a[i]!='\0'; i++){
    //     count++;

    // }
    //  printf("%d\n" , count);
    return 0;
}