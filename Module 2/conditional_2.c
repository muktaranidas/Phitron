#include<stdio.h>
int main () {
    int tk;
    scanf("%d" , &tk);
    if(tk >= 100){
        printf("Oats khabo");
    }
    else if(tk >= 50){
        printf("Dry Fruits");
    }
     else if(tk >= 20){
        printf("Bhelpori Khabo");
    }
    else{
        printf("Shara din na kheye thakbo");
    }
    return 0;
}