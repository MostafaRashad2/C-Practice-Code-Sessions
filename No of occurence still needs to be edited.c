#include <stdio.h>
#include<stdlib.h>
int main() {
    int s;
    printf("Enter the No of Elements\n");
    scanf("%d",&s);
    int * arr = (int *)calloc(s,sizeof(int));
    int * arr1 = (int *)calloc(s,sizeof(int));
    for(int i = 0; i < s;i++){
        printf("Enter the Element No %d\n",i + 1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < s;i++){
        for(int j = 0; j < s;j++){
            if (arr[i] == arr[j]){
                arr1[i]+=1;
            }
        }
    }
  for(int i = 0; i < s;i++){
    if(arr1[i] >= 1){
    printf("%d occured %d times\n",arr[i],arr1[i]);
    i += arr1[i]-1;
    }
    else{
     printf("%d occured %d times\n",arr[i],arr1[i]);
    }
  }
   

    return 0;
}