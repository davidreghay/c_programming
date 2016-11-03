#include <stdio.h>
#include <stdlib.h>

void print_usage(void);

int main(int argc, char** argv) {
	if(argc != 3) {
		print_usage();
		exit(1);
	}
	int a = atoi(argv[1]),
		b = atoi(argv[2]);
	printf("%d is the sum", a + b);
}

void print_usage(void) {
	printf("Usage: \tsum NUM1 NUM2, where NUM1 and NUM2 can "
		"safely be converted to integer values.");
}