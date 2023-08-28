// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int maxc = 0 ,c = 0,mo =0,n = 0;
    int p = 0;
    printf("Enter the number of elements : \n");
    scanf("%d",&n);
    int * arr = (int*)calloc(n,sizeof(int));
    for(int i = 0; i < n;i++){
        printf("Enter element no %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n;i++){
        c = 1;
        for(int j = i+1; j < n; j++){
            if(arr[i] == arr[j] && i != j){
                mo = arr[i];
                c++;
            }
        }
        if(c > maxc){
            maxc =c;
            mo = arr[i];
        }
    }
    int * ind = (int *)calloc(maxc,sizeof(int));
    for (int i = 0; i < n;i++){
        if (mo == arr[i]){
            ind[p] = i;
            p++;
        }
    }
    printf("The element %d ocurred max no of times with %d occurunces\n",mo,maxc);
    printf("The element %d ocurred at indices : \n",mo);
    for(int i =0 ; i < p; i++){
        printf("%d\t",ind[i]);
    }
    return 0;
}