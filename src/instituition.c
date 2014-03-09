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
	
	Institution *tempInstitution;
	
	if(inputList->head ==NULL)
	{
		return 0;
	}
	else
	{
		while(tempInstitution!=NULL)
		{
			tempInstitution = List_removeHead(inputList);
			Stack_push(&stack,tempInstitution);
			compare(tempInstitution,criterion);
			tempInstitution = Stack_pop(&stack);
			List_addTail(outputList,tempInstitution);
		}
	}
			
}

