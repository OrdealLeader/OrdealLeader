#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("Hello! Please enter a number that is positive!: ";
	scanf("%d", &a);
	if (a < 0) {
		printf("You entered a negative, doofus!");
		return 0;
	}
	PrimeOrNot(a);
	return 0;
}
int PrimeOrNot (int a) {


}
