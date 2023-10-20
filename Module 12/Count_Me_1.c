#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d" , &n);
    int a[100];

    int countfor2=0;
    int countfor3 = 0;
    for(int i=0; i<n; i++){
        scanf("%d" , &a[i]);
        
        if(a[i]%2 == 0){
            countfor2++;        
        } 
        if(a[i]%2 == 0 && a[i]%3 == 0){
            countfor3--;        
        }    
        if(a[i]%3 == 0){
            countfor3++;        
        }   
         

    }
        printf("%d %d" , countfor2 , countfor3);
    
    return 0;
}