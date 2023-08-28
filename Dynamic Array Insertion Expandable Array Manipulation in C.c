#include <stdio.h>
#include<stdlib.h>
int main(){
int n,m,p,tmp;
printf("Enter the size of the array \n");
scanf("%d",&n);
printf("Input the %d elements of the array\n",n);
int * arr = (int *)calloc(n,sizeof(int));
for(int i = 0; i < n; i++){
    printf("Element No %d : ",i+1);
    scanf("%d",&arr[i]);
}
n++;
// arr = (int *)realloc(arr,n);
arr = (int *)realloc(arr,n*sizeof(int));
printf("Input the value to be inserted : ");
scanf("%d",&m);
printf("Input the Position, where the value to be inserted :");
scanf("%d",&p);
tmp = arr[p-1];
for (int i = n;i > p -2 ;i--){
    arr[i] = arr[i - 1];
}
arr[p-1] = m;
printf("The new array is \n");
for(int i = 0; i < n; i++){
    printf("%2d ", arr[i]);
}
return 0;

}