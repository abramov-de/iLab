//char* strchr(const char *cs, int c);

#include <stdio.h>

char* mystrchr(const char* cs, int c) {

	while (*cs != c && *cs != '\0') {
		cs++;
	}
	if (*cs == c)
		return cs;
	else
		return NULL;
}

int main() {
	char cs[] = "Kernigan Ritchy";
	const size_t str_size = sizeof(cs) / sizeof(cs[0]);
	printf("%d && %u\n", mystrchr(cs, '\0') - cs, str_size);

	return 0;
}