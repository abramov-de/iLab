// int puts(const char *cs);

#include <stdio.h>

// myputs(str); мен€етс€ ли указатель, как передаютс€ аргументы в —и

int myputs(const char *cs)
{ // bad name

    // while (*cs) {putchar(*cs++);}

    for(int i = 0;;i++)
    {
        if (cs[i] == '\0')
        {
            putchar('\n'); // ret val
            break;
        }

        putchar(cs[i]); // PUTCHAR
    }
    //putchar('\n');

    return 1;
}

int main()
{
    char cs[] = "Print this text";
    myputs(cs);
    puts(cs);
    puts(cs);

    return 0;
}
