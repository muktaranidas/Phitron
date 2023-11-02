#include<stdio.h>
int Max(int i, int n, int *a){
    //base case
    if(i== n-1){
        return a[i];
    }
    // recursive call
    int mx = Max(i+1 , n,a);
}
int main ()
{
    int n;
    scanf("%d" , &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d" , &ar[i]);
    }
    return 0;
}