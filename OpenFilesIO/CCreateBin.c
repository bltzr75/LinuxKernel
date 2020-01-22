#include <stdio.h>
#include <stdlib.h>

struct threeNumbers
{
	int num1,num2,num3;
};

int main(){

	int num;
	struct threeNumbers number;
	FILE *fptr;
	
	if ((fptr = fopen("program.bin","wb")) ==NULL)
	{
		printf("ERROR OPENING FILE!");
		exit(1);
	}


	for (num=1; num<5; num++)
	{
		number.num1 = num;
		number.num2 = 2*num;
		number.num3 = 3*num+5;
		
		fwrite(&num, sizeof(struct threeNumbers), 1, fptr);
	}

	fclose(fptr);



return 0;
}