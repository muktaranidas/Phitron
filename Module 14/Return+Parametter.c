#include<stdio.h>
// retur_type name(parameter)
// {
//     code
//     return what?
// }
// int sum(int x, int y);
int sum(int x, int y){
    int sum = x+y;
    return sum;
}
int main ()
{
    int result = sum(1,20);
    printf("%d\n" , result);
    printf("%d\n" , sum(10,20));
    return 0;
}