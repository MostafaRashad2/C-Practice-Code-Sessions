#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define ALPHABET_LEN 26
char *string_malloc(size_t size);
void fill_lowercase(char *str, size_t len);


int main() {
   char *str = string_malloc(ALPHABET_LEN + 1);
   fill_lowercase(str, ALPHABET_LEN + 1);
   printf("%4s \n",str);
}

char *string_malloc(size_t size){
    char* str = malloc(size);
    if (str == NULL){
        fprintf(stderr,"Out of memory");
        exit(EXIT_FAILURE);
    }
    for(size_t i; i < size;++i){
        str[i] = 0;
    }

    return str;
}


void fill_lowercase(char *str,size_t len){
    if (len > 26){
        len = 27;
    }
    for(size_t i = 0; i < len - 1;++i){
        str[i] = 'a' + i;
    }
    str[len - 1] = 0;
}
