#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main() {
   int arr[] = {1,1,3,4,5,3};
   int n = (sizeof(arr)/sizeof(int));
   int d = 0;
   int * arr1 = (int *)calloc(n,sizeof(int));
   for(int i = 0; i < n;i++){
    for(int j = i+1; j < n;j++){
        if(arr[i] == arr[j]){
            arr1[d] = arr[j];
            d++;
        }
    }
   }
   printf("the number of duplicates is %d\n",d);
   for(int i = 0; i < d; i++){
   printf("the duplicates are %d\n",arr1[i]);
   }
   
   
}

