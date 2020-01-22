#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	FILE *fptr;
	fptr = fopen("example1.txt","w");
	
	if(fptr == NULL)
	{
		printf("ERROR");	
		exit(1);
	}



	
	fprintf(fptr, "%d", num);	
		
	fclose(fptr);

	return 0;
}