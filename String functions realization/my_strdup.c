//char* strdup(const char* str);

#include <stdio.h>
#include <stdlib.h>

char* mystrdup(const char* str){

    int length = 0; // size_t

    while (str[length])
        length++;

    char* copy = (char*)malloc(length + 1);
    char* copy_2 = copy;

    while(*str)
        *copy_2++ = *str++;

    *copy_2 = '\0';

    return copy;
}

int main(){

    char str[] = "mystrdup test";
    printf("%s", mystrdup(str));

    return 0;
}
