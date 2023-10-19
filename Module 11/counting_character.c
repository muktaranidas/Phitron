#include<stdio.h>
#include<string.h>
int main ()
{
    char a[100];
    scanf("%s" , a);

    int count[26] = {0};
    for(int i=0; i<strlen(a); i++){
     
        int value = a[i]-97;
        // printf("%d " , value);
        count[value]++;
    }
    // for(int i=0; i<26;i++){
    //     if(count[i] != 0){
    //         printf("%c %d\n" , i+97, count[i]);
    //     }
    // }

    for(int i=0;i<strlen(a) ; i++){
        int value = a[i]-97;
        if(count[value] != 0){
            printf("%c - %d\n" , value+97, count[value]);
        }
        count[value]=0;
    }


    return 0;
}