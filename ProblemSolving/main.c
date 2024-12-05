#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int days = 0;
	printf("Input your days: \n");
	scanf("%d", &days);
	
	printf("On the ");
	if (days == 12) 
		printf("twelfth");
	if (days == 11)
		printf("eleventh");
	if (days == 10)
		printf("tenth");
	if (days == 9)
		printf("ninth");
	if (days == 8)
		printf("eigth");
	if (days == 7)
		printf("seventh");
	if (days == 6)
		printf("sixth");
	if (days == 5)
		printf("fifth");
	if  (days == 4)
		printf("fourth");
	if (days == 3)
		printf("first");
	if (days == 2)
		printf("second");
	if (days == 1)
		printf("first");
	printf(" day of Christmas, my true love gave to me\n");
	
	if (days == 12)
		printf("\ntwelve drummers drumming\n");	
	if (days >= 11)
		printf("\neleven pipers piping\n");
	if (days >= 10)
		printf("\nten lords a-leaping\n" );
	if (days >= 9)
		printf("\nnine ladies dancing\n" );
	if (days >= 8)
		printf("\neight maids a-milking\n" );
	if (days >= 7)
		printf("\nseven swans a-swimming\n" );
	if (days >= 6)
		printf("\nsix geese a-laying\n" );	
	if (days >= 5)
		printf("\nfive golden rings\n" );
	if (days >= 4)
		printf("\nfour calling birds\n" );
	if (days >= 3)
		printf("\nthree French hens\n" );
	if (days >= 2)
		printf("\ntwo turtle doves\n" );						
	if (days > 1) 
	 	printf("\nand ");
	if (days >= 1) 
		printf("a partridge in a pear tree!");
	 	
	return 0;
}

