#include<stdio.h>
int main ()
{
    int n; //5
    scanf("%d" , &n); // input nilam 5
    int ar[n+1]; // 6size er akta arry delcear korlam
    for(int i=0; i<n ; i++){ //loop chalailam, 5ta value 
        scanf("%d" , &ar[i]); //5ta value input nilam
    }

    int pos, val; // kon position e chai r value koto chai
    scanf("%d %d" , &pos, &val); // input nilam kon position e chai r value koto chai

    for(int i=n; i>=pos+1; i--){
        ar[i] = ar[i-1];
    }
    ar[pos] = val; // 100 kke index 1 er moddhe rakhlam
    for(int i=0; i<=n; i++){
        printf("%d " , ar[i]);
    }

    return 0;
}