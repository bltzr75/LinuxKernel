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
	
	if ((fptr = fopen("program.bin","rb")) ==NULL)
	{
		printf("ERROR OPENING FILE!");
		exit(1);
	}


	for (num=1; num<5; num++)
	{
		number.num1 = num;
		number.num2 = 2*num;
		number.num3 = 3*num+5;
		
		fread(&num, sizeof(struct threeNumbers), 1, fptr);
		printf("num1: %d\tnum2: %d\tnum3:%d", number.num1, number.num2, number.num3);

	}

	fclose(fptr);



return 0;
}