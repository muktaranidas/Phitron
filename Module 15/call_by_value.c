#include<stdio.h>
void fun(int x){
    x=200;
     printf("fun x er value - %d\n" , x);
}
int main ()
{
    int x = 10;
    fun(x);
    printf("Main x er value - %d\n" , x);


    
    return 0;
}