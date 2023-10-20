#include<stdio.h>
int main ()
{
    int n;
    scanf("%d" , &n);
    int a[n];
    for(int i=0; i<n;i++){
        scanf("%d" , &a[i]);
   
    }
    int count[7]={0};
    for(int i=0;i<n; i++){
        count[a[i]]++;
        // if(a[i] == 0){
        //     count[a[i]]++;
        // }
        // if(a[i] == 1){
        //     count[a[i]]++;
        // }
        // if(a[i] == 2){
        //     count[a[i]]++;
        // }
       
      
    }
        
        for(int i=0; i<=6;i++){
            printf("%d - %d\n" ,i, count[i]);
        }
     
     
    return 0;
}