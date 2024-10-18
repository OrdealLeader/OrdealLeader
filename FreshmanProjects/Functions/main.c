#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char input[20];
	sayHello();
	printf("Please put in a string of characters that you want to say (no space): ");
	scanf("%s", input);
	sayWhatISaid(input);
	return 0;
}

void sayHello() {
	printf("Hello, World!\n");
}

void sayWhatISaid(char inputsaid[]) {
	printf("Did you just say %s?", inputsaid);
}
