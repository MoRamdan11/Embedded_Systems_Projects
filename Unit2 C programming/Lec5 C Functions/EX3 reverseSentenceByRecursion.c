#include <stdio.h>
#include "string.h"

void reverseSentence(char str[], int i);

int main() {
	char sentence[100];
	printf("Enter a sentence: ");
	fflush(stdin); fflush(stdout);
	gets(sentence);
	reverseSentence(sentence, 0);
	return 0;
}

void reverseSentence(char str[], int i) {
	if(str[i] == '\0')
		return;
	reverseSentence(str, i + 1);
	printf("%c", str[i]);
}
