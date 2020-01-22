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
	
	free(ptr);
	printf("Calloc Deallocated Succestully using Free() ");

return 0;

}