// int strcmp(const char *cs, const char *ct)

#include <stdio.h>

int mystrcmp(const char* cs, const char* ct);

/*
int mystrcmp(const char* cs, const char* ct) {
	while (*cs != '\0' || *ct != '\0') {
		if (*cs > *ct)
			return 1;
		if (*cs < *ct)
			return -1;

		*cs++;
		*ct++;
	}
	return 0;
}
*/

int main() {
	char cs[] = "MIPT";
	char ct[] = "MPEI";
	printf("%d", mystrcmp(cs, ct));

	return 0;
}

int mystrcmp(const char* cs, const char* ct) {
	while ((*cs != '\0') && (*cs == *ct)) {
		cs++;
		ct++;
	}

	return *cs - *ct;
}