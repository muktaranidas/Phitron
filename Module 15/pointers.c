#include<stdio.h>
int main ()
{
    int x = 100;
    int * ptr = &x;
    // printf("Address of x: %p\n" , &x);
    // printf("Value of ptr: %p\n" , ptr);
    // printf("Address of ptr: %p\n" , &ptr);
    // printf("Memory size of ptr: %d\n" , sizeof(ptr));
    // x=200;
    *ptr=200;
    // x -> *ptr same
    
    printf("x er value - %d\n" , x);
    printf("x er value - %d\n" , *ptr);
    return 0;
}