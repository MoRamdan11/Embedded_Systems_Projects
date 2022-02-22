#include <stdio.h>

int main() {
	char c;
	printf("Enter an alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);
	switch(c) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u': {
		printf("%c is a vowel.", c);
		break;
	}
	default: {
		printf("%c is a consonant.", c);
		break;
	}
	}
	return 0;
}
