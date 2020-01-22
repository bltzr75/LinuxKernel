#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr;
	int num, sum=0;
	
	num=8;
	printf("We've got %d elements to allocate memory to\n ", num);
	

//syntax --> ptr = (cast-type*) calloc(byte-size, element-size); //Calloc uses en element-size
	
   	ptr= (int*) calloc( num, sizeof(int));			 // multiplies by 8
		
//Checking if memory was allocated		
	
	if(ptr==NULL){
		printf("Memory Allocation Failed!");
		exit(0);
	}
	else 
	{
		printf("Memory Allocation Succesful using Calloc() !\n");
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


//realloc()
//syntax --> ptr = realloc(ptr, newSize)
	ptr = realloc(ptr, 16*(sizeof(int)));   

 	printf("Memory Succesfully Reallocated using realloc");


return 0;
}