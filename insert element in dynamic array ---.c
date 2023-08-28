#include <stdio.h>
#include<stdlib.h>
int main(){
int n,m;
printf("Enter the size of the array \n");
scanf("%d",&n);
printf("Input the %d elements of the array in ascending order \n",n);
int * arr = (int *)calloc(n,sizeof(int));
for(int i = 0; i < n; i++){
    printf("Element No %d : ",i+1);
    scanf("%d",&arr[i]);
}
n++;
 arr = (int *)realloc(arr,n);
printf("Enter the value to be inserted :  \n");
scanf("%d",&m);
int i = n - 2;
while (i >= 0 && arr[i] > m){
    arr[i + 1] = arr[i];
    i--;
}
arr[i+1] = m;
printf("The new array is \n");
for(int i = 0; i < n; i++){
    printf("%2d ", arr[i]);
}


return 0;
}