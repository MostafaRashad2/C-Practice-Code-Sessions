#include <stdio.h>
#include<stdlib.h>
int main(){
    int s;
    int min = 0;
    int max = 0;
    printf("Enter the No of Elements\n");
    scanf("%d",&s);
    int * arr = (int *)calloc(s,sizeof(int));
    for(int i = 0; i < s;i++){
        printf("Enter the Element No %d\n",i + 1);
        scanf("%d",&arr[i]);
        min = arr[0];
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
printf("The max is %d and the min is %d",max,min);


return 0;
}