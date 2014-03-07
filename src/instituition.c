#include <stdio.h>
#include <stdlib.h>
#include "instituition.h"
#include "LinkedList.h"
#include "Stack.h"

Stack stack;

/**
	Question 1
**/
int Institution_reverse(LinkedList *inputList, LinkedList *outputList){
	
	void *tempElement;
	
	if(inputList->head ==NULL)
	{
		return 0;
	}
	else
	{
		//push Element 1
		tempElement = List_removeHead(inputList);
		Stack_push(&stack,tempElement);
		//push Element 2
		tempElement = List_removeHead(inputList);
		Stack_push(&stack,tempElement);
		//pop Element2
		tempElement=Stack_pop(&stack);
		List_addTail(outputList,tempElement);
		//pop Element1
		tempElement=Stack_pop(&stack);
		List_addTail(outputList,tempElement);
		return 1;
	}
	
}

int Institution_reverse1(LinkedList *inputList, LinkedList *outputList){
	
	void *tempElement;
	
	if(inputList->head ==NULL)
	{
		return 0;
	}
	else
	{
		//push Element 1
		tempElement = List_removeHead(inputList);
		Stack_push(&stack,tempElement);
		//push Element 2
		tempElement = List_removeHead(inputList);
		Stack_push(&stack,tempElement);
		//push Element 3
		tempElement = List_removeHead(inputList);
		Stack_push(&stack,tempElement);
		//pop Element3
		tempElement=Stack_pop(&stack);
		List_addTail(outputList,tempElement);
		//pop Element2
		tempElement=Stack_pop(&stack);
		List_addTail(outputList,tempElement);
		//pop Element1
		tempElement=Stack_pop(&stack);
		List_addTail(outputList,tempElement);
		return 1;
	}
	
}

int Institution_select(){
