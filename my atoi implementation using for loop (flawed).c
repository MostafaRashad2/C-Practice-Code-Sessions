
#include <stdio.h>
#include<string.h> 
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int myAtoi(char * s){
int n = strlen(s) - 1;
int i = n;
int res = 0,p=0;

for(; i >= 0;i--){
if(isdigit(s[i])){
    res = res + (pow(10,p) * (((int)s[i])-48));
    p++;
   
    }

   if(s[i] == '-'){
    res = res * -1; 
    
    }
      
 }

return res;
}
