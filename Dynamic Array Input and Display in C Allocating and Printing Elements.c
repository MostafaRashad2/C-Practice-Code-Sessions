#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main() {
   int n;
   printf("Enter the number of elements\n");
   scanf("%d",&n);
   int * ptr = (int *)calloc(n,sizeof(int));
   for(int i = 1; i <= n;i++){
   printf("Enter the next element\n");
   scanf("%d",&ptr[i]);
   }
   for(int i = 1; i <= n;i++){
    printf("%d\n", ptr[i]);
   }
  
}

