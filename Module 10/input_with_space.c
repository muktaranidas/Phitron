#include<stdio.h>
#include<stdio.h>
int main ()
{
    char a[19];
    // gets(a);
    fgets(a, 21,stdin);
    a[17] = '\0';
    printf("%s" , a);

    return 0;
}