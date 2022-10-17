// char* strcpy(char* dest, const char* src);

#include <stdio.h>

char* mystrcpy(char* dest, const char* src);

int main(void) {
	char src[] = "X-company";
	char dest[10];
	printf("%s\n", mystrcpy(dest, src));

	return 0;
}

char* mystrcpy(char* dest, const char* src) {
	char* d = dest;

	while (*src != '\0') {		//while (*src)
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return d;
}