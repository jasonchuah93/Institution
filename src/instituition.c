#include <stdio.h>
#include <stdlib.h>
#include "instituition.h"


Stack stack;

/**
	Question 1
**/
int Institution_reverse(LinkedList *inputList, LinkedList *outputList){
	
	Institution *tempInstitution;
	
	if(inputList->head ==NULL)
	{
		return 0;
	}
	else
	{
		
		//push Element 1
		tempInstitution = List_removeHead(inputList);
		Stack_push(&stack,tempInstitution);
		//push Element 2
		tempInstitution = List_removeHead(inputList);
		Stack_push(&stack,tempInstitution);
		
		//pop Element2
		tempInstitution=Stack_pop(&stack);
		List_addTail(outputList,tempInstitution);
		//pop Element1
		tempInstitution=Stack_pop(&stack);
		List_addTail(outputList,tempInstitution);
		
	}
	return 1;
}

int Institution_reverse1(LinkedList *inputList, LinkedList *outputList){
	
	Institution *tempInstitution;
	
	if(inputList->head ==NULL)
	{
		return 0;
	}
	else
	{
		//push Element 1
		tempInstitution = List_removeHead(inputList);
		Stack_push(&stack,tempInstitution);
		//push Element 2
		tempInstitution = List_removeHead(inputList);
		Stack_push(&stack,tempInstitution);
		//push Element 3
		tempInstitution = List_removeHead(inputList);
		Stack_push(&stack,tempInstitution);
		
		//pop Element3
		tempInstitution=Stack_pop(&stack);
		List_addTail(outputList,tempInstitution);
		//pop Element2
		tempInstitution=Stack_pop(&stack);
		List_addTail(outputList,tempInstitution);
		//pop Element1
		tempInstitution=Stack_pop(&stack);
		List_addTail(outputList,tempInstitution);
	
	}
		return 1;
}

int Institution_reverse2(LinkedList *inputList, LinkedList *outputList){
	
	Institution *tempInstitution;
	
	if(inputList->head ==NULL)
	{
		return 0;
	}
	else
	{
		//push Element 1
		tempInstitution = List_removeHead(inputList);
		Stack_push(&stack,tempInstitution);
		//push Element 2
		tempInstitution = List_removeHead(inputList);
		Stack_push(&stack,tempInstitution);
		//push Element 3
		tempInstitution = List_removeHead(inputList);
		Stack_push(&stack,tempInstitution);
		//push Element 4
		tempInstitution = List_removeHead(inputList);
		Stack_push(&stack,tempInstitution);
		
		//pop Element4
		tempInstitution=Stack_pop(&stack);
		List_addTail(outputList,tempInstitution);
		//pop Element3
		tempInstitution=Stack_pop(&stack);
		List_addTail(outputList,tempInstitution);
		//pop Element2
		tempInstitution=Stack_pop(&stack);
		List_addTail(outputList,tempInstitution);
		//pop Element1
		tempInstitution=Stack_pop(&stack);
		List_addTail(outputList,tempInstitution);
		
	}
	return 1;
}

/**
	Question 2 
	
**/

int Institution_select(LinkedList *inputList, LinkedList *outputList, void *criterion, int(*compare)(void *, void*)){
	
	
	Institution * tempInstitution;
	
	if(inputList->head==NULL)
	{
		return 0;
	}
	
	tempInstitution = List_removeHead(inputList);
	
	while(tempInstitution != NULL)
	{
		if(compare(tempInstitution,criterion))
		{
			List_addTail(outputList,tempInstitution);
		}
		tempInstitution = List_removeHead(inputList);
	}
	

	
}

int isUniversityCollege (void *elem1 , void *type){
	Institution *tempInstitution = (Institution*)elem1;
	InstitutionType *tempInstitutionType = (InstitutionType*)type;
	
	if(tempInstitution->type == *tempInstitutionType)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}	

