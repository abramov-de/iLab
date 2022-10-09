// char*strncat(char* dest, const char* src, size_t num);

#include <stdio.h>
#include <string.h>

char* mystrncat(char* dest, const char* src, size_t num){

    char* dest_end = dest + strlen(dest);

    while (*src && num--){
        *dest_end++ = *src++;
    }

    *dest_end = '\0';

    return dest;
}

int main() {
    char dest[50] = "Moscow Institute of";
    char src[] = " Physics and Technology (state university)";

    puts(mystrncat(dest, src, 23)) ;

    return 0;
}
