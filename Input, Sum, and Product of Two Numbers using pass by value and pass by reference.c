#include <stdio.h>
#include<stdlib.h>
int main() {
    int a,b;
    printf("Enter the value of A and B\n");
    scanf("%d%d",&a,&b);
    /*int arr[6] = {0};
    for(int i = 0; i < (sizeof(arr) / s5izeof(int));i++){
    printf("Hello udemy world!\n");
    printf("%d\n",arr[i]);
    } */
    printf("The sum of the number is %d\n",a + b);
    printf("The product of the numbers is %d\n",a * b);
    return 0;
}