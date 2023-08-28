#include <stdio.h>
#include<stdlib.h>
int main(){
int n,m,p;
printf("Enter the size of the array \n");
scanf("%d",&n);
printf("Input the %d elements of the array\n",n);
int * arr = (int *)calloc(n,sizeof(int));
for(int i = 0; i < n; i++){
    printf("Element No %d : ",i+1);
    scanf("%d",&arr[i]);
}
n++;
arr = (int *)realloc(*arr,n);
printf("Input the value to be inserted : ");
scanf("%d",&m);
printf("Input the Position, where the value to be inserted :");
scanf("%d",&p);
for (int i = p-1;i < n;i++){
    arr[i+1] = arr[i];
}
arr[p] = m;
printf("The new array is \n");
for(int i = 0; i < n; i++){
    printf("%2d ", arr[i]);
}
return 0;

}