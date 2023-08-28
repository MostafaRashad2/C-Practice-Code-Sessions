#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
   int i = 0;
   int arr[] = {1,3,5};
   int arr2[] = {2,4,6};
   int n1 = sizeof(arr)/ sizeof(int);
   int n2 = sizeof(arr2)/ sizeof(int);
   int n3 =  n1 + n2;
   int tmp = 0;
   int arr3[6] = {0};
 // algorithm for concatinating the 2 arrays
  while(i < n3){
if (i < n1) {
    arr3[i] = arr[i];
    }
else{
       arr3[i] = arr2[i-n1] ;
    }
    i++; 
  }
// algorithm for sorting the new array


for(int i = 0; i < n3; i++){
  for(int j = i + 1; j < n3; j++){
    if (arr3[i] < arr3[j]){
        tmp = arr3[j];
        arr3[j] = arr3[i];
        arr3[i] = tmp;
    }
 }  
}






// for loop for printing
  for(int i = 0; i < n1 + n2; i++){
    printf("%2d",arr3[i]);
  }
   
  // printf("the length of arr is %d",n);
}