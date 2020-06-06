#include <stdio.h>

int main(int argc, char **argv) {
    if(argc > 2) {
	printf("Error: Number of arguments are more than required\n");
	return 0;
    }
    FILE *file = fopen(argv[1], "r");
    int x;
    while((x = fgetc(file)) != EOF) {
	printf("%c", x);
    }
    return 0;
}
