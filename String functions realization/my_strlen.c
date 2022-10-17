#include <stdio.h>

/*
int mystrlen(const char* cs) {
	int i, strlen;
	for (i = 0; cs[0] != '\0'; i++) {
		strlen = i;
	}

	return strlen;
}

int main() {
	int c, i;
	char cs[256];
	for (i = 0; (c = getchar()) != '\0'; ++i) {
		cs[i];
	}

	return mystrlen(cs);
}
*/


/*
int mystrlen(const char* cs) {
	long count = 0;
	while (getchar() != '\0') {
		count++;
	}

	return count;
}
*/

int mystrlen(const char* cs);

int main() {
	char cs[256];
	gets(cs);
	printf("%d", mystrlen(cs));
	printf("%d", sizeof(int));
	printf("%d", sizeof(unsigned int));

}

typedef unsigned int strlen_t;

int mystrlen(const char* cs) {
	strlen_t c = 0;
	while (*cs++) {
		c++;
	}
	return c;

}