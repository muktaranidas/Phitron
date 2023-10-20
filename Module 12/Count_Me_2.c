#include<stdio.h>
#include<string.h>
int main ()
{
    char s[100001];
    scanf("%s" , s);
    int countconsonents = 0;
    for(int i=0; i<strlen(s); i++){
    //  printf("%c " ,  s[i]); 
    if((s[i] >= 'a' && s[i] <= 'z') && (s[i]!= 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')){
        countconsonents++;
    }
    }
    printf("%d" , countconsonents);
    return 0;
}