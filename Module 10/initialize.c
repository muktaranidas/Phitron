#include<stdio.h>
int main ()
{
    // power  of string


    // Initialization
    // char a[5] = {'M', 'u' , 'k' , 't' , 'a'};
    // char a[5] = "Mukta";
    // for(int i = 0; i<5; i++){
    //     printf("%c " , a[i]);
    // }


    // Print
     // char a[5] = {'M', 'u' , 'k' , 't' , 'a'};
    char a[] = "Mukta\0";
    int sz = sizeof(a)/sizeof(char);
    printf("%d\n" , sz);

    printf("%s " , a);
    
    
    return 0;
}