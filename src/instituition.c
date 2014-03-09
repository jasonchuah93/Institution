#include <stdio.h>
#include <stdlib.h>
#include "instituition.h"
#include "CException.h"


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
	
	if(inputList->head==NULL)
	{
		return 0;
	}
	//Look for institution which is the particular type
	tempInstitution = List_removeHead(inputList);
	tempInstitution = List_removeHead(inputList);
	tempInstitution = List_removeHead(inputList);
	//Compare the institution with the institution type
	if(compare(tempInstitution,criterion))
	{	
		Stack_push(&stack,tempInstitution);
	}
	tempInstitution = List_removeHead(inputList);
	
	List_addTail(outputList,tempInstitution);
	tempInstitution=Stack_pop(&stack);
	List_addTail(outputList,tempInstitution);
	return 1;
	
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

/** 
	Question 3
**/
int wasEstablishedBefore(void *elem1, void *year){
	Institution *tempInstitution = (Institution*)elem1;
	int *specificYear = (int*)year;

	if(tempInstitution->yearEstablished < *specificYear){
		return 1;
	}


	if(tempInstitution->yearEstablished >2014){
		
		Throw(Error_year_established);
	}
	return 0;
}


