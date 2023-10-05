#include <stdio.h>
int main (){
    int i,n;
    scanf("%d", &n);
   for(i=1; i<=n; i++){
     if(i%5 == 0){
        printf("%d Yes\n", i);

    }
    else{
        printf("%d No\n",i);
    }
   }
 
    return 0; 
}

// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         printf("%d ", i);
//         if (i % 5 == 0) {
//             printf("Yes\n");
//         } else {
//             printf("No\n");
//         }
//     } 
//     return 0; 
// }