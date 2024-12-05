#include <stdio.h>

int main(int argc, char *argv[]) {
			int number,row;
			for(row = 1; row <= 3; row++) {
				for(number = 1; number <= row; number++) {
					printf("%d", number);
					}
					printf("\n");
					}	
	return 0;
}
