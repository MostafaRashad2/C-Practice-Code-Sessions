#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sumn(int n){
    int sum;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return(sum);
}

int main() {
   /* printf("what is your name?\n");
    char c[50];
    fgets(c,50,stdin);
    c[strlen(c)-1] = 0;
    int n = 0;
    // strupr capitalizes all letters 
    //strupr(c);
    // this is the algorithm that does that manually
    for (int i = 0; i < strlen(c);i++){
        if (c[i] == 'a' || c[i] == 'e' || c[i] == 'o' || c[i] == 'u' || c[i] == 'i'){
             n++;  
            }
    }
    printf("The numbers of vowels is %d\n",n);*/
    int n = 4;
    int z = sumn(n);
    printf("The sum of 1 to %d is %d",n,z);
    return 0;
}