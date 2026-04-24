#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char *tmp;

	for (int i = 1; i < argc - 1; i++) {
		for (int j = 1; j < argc - i; j++) {
			if (strcmp(argv[j], argv[j + 1]) > 0) {
					tmp = argv[j];
					argv[j] = argv[j + 1];
					argv[j + 1] = tmp;
			}
		}
	}


	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
	
	return 0;
}
