#include <stdio.h>

int main(void) {
	char code;
	int i;
	printf("Enter an ASCII codepoint: ");
	scanf("%d", &code);
	printf("Wow! You entered the codepoint for %c!  That's amazing!\n\n", code);
	printf("Did you know there are 256 (2^8) ASCII codes in total? Wanna know"
		"what they are? Well you're about to find out!");
	for(i = 0; i < 256; i++) {
		printf("%3d : %c\n", i, i);
	}
}
