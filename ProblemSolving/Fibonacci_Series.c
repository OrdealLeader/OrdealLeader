#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char ans = 'y';
	do{
	int a = 0, b = 0, pre2Number = 0, pre1Number = 1, number = 0, temp = 0;
	
	printf("Input a number: ");
	scanf("%d", &a);
	
	if (a == 0)
		number = 0;
	else if (a == 1)
		number = 1;
	else{
	for (b = 1; b < a; ++b) {	
		number = pre2Number + pre1Number;
		pre2Number = pre1Number;
		pre1Number = number;
		
	}
	}
	
	printf("The fibonacci number in the series is: %d", number);
	printf("\nTry Again? Y/N \n");
	scanf("\n%c", &ans);
	}while (ans == 'y' || ans == 'Y');
	return 0;
}
