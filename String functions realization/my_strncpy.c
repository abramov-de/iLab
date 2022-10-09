//char* strncpy( char* dest, const char* src, size_t num );

#include <stdio.h>
#include <string.h>

char* mystrncpy(char* dest, const char* src, size_t num)
{
    char* begin_dest = dest;

    while (printf("[INFO] %d %c\n", num, *src) && *src && num--)       // src!=0 && num == 0    src==0 && num >= 0
    {
        *dest++ = *src++;
    }

    printf("[Info] %d\n", num);

    if (*src == 0 && num > 0)
            *dest = '\0';


    //if (strlen(src) =< num)


    //*dest = '\0';   // check docs

    return begin_dest;
}

int main()
{

    char dest[265] = "qwertyuiopasdfghjkl";
    char* src = "MIPT";
    size_t num = 6;

    printf("%s", mystrncpy(dest, src, num));

    return 0;
}

// "MIPT" num = 4 -> write 4 characters
// "MIPT" num = 3 -> write 3 characters
// "MIPT" num = 6 -> write 4 characters + '\0'
