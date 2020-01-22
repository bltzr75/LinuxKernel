#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	FILE *fptr;

	if((fptr = fopen("example1.txt","r"))==NULL)
	{
		printf("ERROR reading file!");
		exit(1);
	}

	printf("Enter number: ");
	fscanf(fptr, "%d ", &num);
	
	printf("Value of number=%d ", num);	
		
	fclose(fptr);


	return 0;
}