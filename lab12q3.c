#include <stdio.h>
#include <stdlib.h>
#include "stack_struct1.h"


int main()
{

	FILE*binaryp;
	binaryp = fopen("person_info", "rb");
	person array;
	stack_t stack;
	initializeS(&stack);
	fread(&array, sizeof(person), 1, binaryp);
	
	while (!feof(binaryp))
	{
		push(&stack, array);
		fread(&array, sizeof(person), 1, binaryp);
		
	
		
	}
	while (!isEmptyS(&stack))
	{
		
		array = pop(&stack);
		printf("%s %s %d\n", array.name, array.surname, array.age);
	}

	while (!feof(binaryp))
	{
		
		fread(&array, sizeof(person), 1, binaryp);
	}


	
	system("PAUSE");

}
