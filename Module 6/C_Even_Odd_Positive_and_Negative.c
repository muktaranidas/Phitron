#include<stdio.h>
int main ()
{
    int n;
    scanf("%d" , &n);
    int even=0, odd=0, pos=0, neg=0;
    int a;
    for(int i = 1; i <=n; i=i+1){
        scanf("%d" , &a);
        //kaj
        if(a%2==0){
            // even
            even++;
            // printf("%d\n" , a);
        }
        else{
            // odd
            odd++;
            //  printf("%d\n" , a);
        }
        if(a>0){
            // positive
            pos++;
            //  printf("%d\n" , a);
        }
        else if(a<0){
            // pos
            neg++;
        }


    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, pos, neg);
    return 0;
}