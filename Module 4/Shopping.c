#include<stdio.h>
int main () {
    int tk;
    scanf("%d", &tk);
    if(tk >= 1500 ) {
        printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes");
    }
    else if(tk  >  1000){
        printf("I will buy Punjabi");

    }
    else{
        printf("Bad luck!");
    }
    return 0;

}