#include <stdio.h>
#include<stdlib.h>
int main(){
int n,mo,p,c;
printf("Enter the size of the array \n");
scanf("%d",&n);
printf("Input the %d elements of the array\n",n);
int * arr = (int *)calloc(n,sizeof(int));
for(int i = 0; i < n; i++){
    printf("Element No %d : ",i+1);
    scanf("%d",&arr[i]);
}
for(int i = 0; i < n;i++){
    for(int j = i + 1; j < n;j++){
        if(arr[i] == arr[j] && i != j){
        mo = arr[i];
        c++;
        }
    }
}
printf("The element %d ocurred max no of times with %d occurunces",mo,c);
return 0;
}