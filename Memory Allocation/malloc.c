#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr;
	int num, sum=0;
	
	num=8;
	printf("We've got %d elements to allocate memory to\n ", num);
	

//syntax --> ptr = (cast-type*) malloc(byte-size); 
	
   	ptr= (int*) malloc( num*sizeof(int));
	
//Checking if memory was allocated		
	
	if(ptr==NULL){
		printf("Memory Allocation Failed!");
		exit(0);
	}
	else 
	{
		printf("Memory Allocation Succesful using Malloc() !\n");
	}
	
//Passing elements
	
	for(int i=0; i<num; ++i)
	{
	ptr[i] = i+1;
	}

//Print results
	
	printf("Inserted 8 elements in the block are as follows: \n");
	for(int i=0; i<num; ++i)
	{
	printf("Pointer's Array Element %d, in address %p \n", ptr[i], &ptr[i]);	
	}

return 0;
}