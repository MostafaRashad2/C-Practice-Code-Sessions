#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sumn(int n){
    int sum;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return(sum);
}

int main() {
   int c = 0;
   int n = 0;
   while (c < 100){
     printf("Enter a Number\n");
     scanf("%d",&n);
     c += n;
   }
   printf("The Sum has exceeded a 100 as the sum has reached %d",c);
    return 0;
}