#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main() {
   int intarray[5] = {10,20,30,40,50};
   int s = sizeof(intarray) / sizeof(int);
   int *ptr = &intarray[s-1];
   int *parray = (int *)calloc(3,sizeof(int));
   for(int i = 0; i < 3; i++){
    parray[i] = &intarray[s-1-i];
   }
   for(int i = 0; i < s ;i++){
    printf("element no %d is %d at address @ %x \n",i+1,intarray[i],&intarray[i]);
   }
  for(int i = 0; i < 3 ;i++){
    printf("addresses of the last three elements are @ %x with value of %d\n",parray[i],*parray[i]);
   
   }
   return 0;
}

