#include <stdio.h>
#include <stdlib.h>

void print_usage(char** args);

int main(int argc, char** argv) {
	if(argc != 3) {
		print_usage(argv);
		exit(1);
	}
	int a = atoi(argv[1]),
		b = atoi(argv[2]);
	printf("%d is the sum\n", a + b);
}

void print_usage(char** args) {
	printf("Usage: \t%s NUM1 NUM2, where NUM1 and NUM2 can "
		"safely be converted to integer values.\n", args[0]);
}
