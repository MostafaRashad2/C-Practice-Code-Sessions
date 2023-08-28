"// Online C compiler to run C program online
#include <stdio.h>
#include<string.h> 
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int myAtoi(char * s){
int n = strlen(s) - 1;
int i = n;
int res = 0,p=0;

while (i >= 0){
if(isdigit(s[i])){
    res = res + (pow(10,p) * (((int)s[i])-48));
    p++;
    i--;
    }
else{
    i--;
}
   if(s[i] == '-'){
    res = res * -1; 
    i--;
    }
      
 }

return res;
}

int main() {
    char * s = "4193 with words";
    int n = myAtoi(s);
    printf("%d",n);

    return 0;
}"