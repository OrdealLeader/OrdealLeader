#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 0, b = 0;
	printf("Hello, please input a number: ");
	scanf("%d", &a);
	printf("\nInput the next number: ");
	scanf("%d", &b);
	printf("\nYour numbers when added are equal to: %d\n\nThank you for using my code :)", Addition(a,b));
	
	return 0;
}

int Addition(int a, int b) {
	int c = 0;
	c = a + b;
	return c;
	
}


