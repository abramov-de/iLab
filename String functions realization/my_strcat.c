//char *strcat(char *dest, const char *src);

#include <stdio.h>
#include <string.h>

char* mystrcat(char* dest, const char* src) {
	char* d = dest + strlen(dest); // dest end

	while (*src != '\0') {
		*d = *src;
		*d++;
		*src++;
	}

	*d = '\0';

	return dest;
}

int main() {
	char src[256] = "Take it from here";
	char dest[256] = "Write it down here";

	//char src[256];
	//char dest[256];
	//strcpy(src, "Take it down from here");
	//strcpy(dest, "Write it down here");

	printf("%s", mystrcat(dest, src));

	return 0;
}