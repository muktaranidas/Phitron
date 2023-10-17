#include<stdio.h>
int main ()
{
    // char a[5];
    // for(int i=0; i<5; i++){
    //     scanf("%c" , &a[i]);
    // }
    // for(int i=0;i<5;i++){
    //     printf("%c " , a[i]);
    // }

    int a[5];
    int sz = sizeof(a)/sizeof(int);
    printf("%d\n" , sz);
    
    printf("%d\n" , sizeof(a));
    printf("%d\n" , sizeof(int));
    printf("%d\n" , sizeof(long long int));
    return 0;
}