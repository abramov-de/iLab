//char* myfgets (char* str, int num, FILE* stream);

#include <stdio.h>
#include <assert.h>

char* myfgets (char* str, unsigned int num, FILE* stream){ // num < 1

    // assert();
    assert (stream != '\0');

    int string, count = 0; // bad name

    while (count < num - 1 && (string = getc(stream)) != EOF){
        str[count++] = string;
        if (string == '\n'){
            break;
        }
    }

    str[count]  = '\0';

    if (count > 0){

        return str;
    }
    else{

        return NULL;
    }
}

int main(){

    char str[256];
    FILE* stream = fopen("my_fputs.txt", "r");

    printf(myfgets(str, sizeof(str), stream));


    return 0;
}
