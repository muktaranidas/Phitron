#include<stdio.h>
int main ()
{
    int n; //5
    scanf("%d" , &n); // input nilam 5
    int ar[n]; // 6size er akta arry delcear korlam
    for(int i=0; i<n ; i++){ //loop chalailam, 5ta value 
        scanf("%d" , &ar[i]); //5ta value input nilam
    }

    int pos; // kon position e chai r value koto chai
    scanf("%d %d" , &pos); // input nilam kon position e chai r value koto chai

   for(int i=pos; i<n-1; i++) {
     ar[i] = ar[i+1];
   }
   for(int i=0; i<n-1;i++){
    printf("%d " , ar[i]);
   }

    return 0;
}