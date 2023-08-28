#include <stdio.h>
#include<stdlib.h>
int main() {
    int s,e = 0,o = 0;
    printf("Enter the No of Elements\n");
    scanf("%d",&s);
    int * arr = (int *)calloc(s,sizeof(int));
    int * even = (int *)calloc(s,sizeof(int));
    int * odd = (int *)calloc(s,sizeof(int));
    for(int i = 0; i < s;i++){
        printf("Enter the Element No %d\n",i + 1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < s; i++){
       if((arr[i] % 2) == 0){
          even[e] = arr[i];
          e++;
       }
       else{
        odd[o] = arr[i];
        o++;
       }
    }
    printf("The Even numbers are\n");
    for(int i = 0; i < e;i++){
    printf("%2d ", even[i]);
    }
    printf("\n");
    printf("The odd numbers are\n");
    for(int i = 0; i < o;i++){
    printf("%2d ",odd[i]);
    }
return 0;
}