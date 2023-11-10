#include<stdio.h>
void fun(int *ar, int n){
// for(int i=0; i<=4; i++){
//         printf("%d " ,ar[i]);
//     }
//     printf("\n");
ar[0] = 500;
}
int main ()
{
    int ar[5] = {1,2,3,4,5};
    fun(ar,5);
    for(int i=0; i<=4; i++){
        printf("%d " ,ar[i]);
    }
    return 0;
}