#include <stdio.h>
#include <stdlib.h>
#include "instituition.h"
#include "CException.h"


Stack stack;

/**
	Question 1
**/
int Institution_reverse(LinkedList *inputList, LinkedList *outputList){
	int i;
	Institution *tempInstitution;
	int counter =0 ; 
	
	
	if(inputList->head ==NULL)
	{
		return 0;
	}
	while ((tempInstitution = (Institution*)List_removeHead(inputList)) !=NULL)
	{
		//push Element 1
		Stack_push(&stack,tempInstitution);
		counter ++;
	}
	
	for(i=0;i<counter;i++)
	{
		tempInstitution = Stack_pop(&stack);
		List_addTail(outputList,tempInstitution);
		
		
	}
	return counter;
}



/**
	Question 2 
	
**/

int Institution_select(LinkedList *inputList, LinkedList *outputList, void *criterion, int(*compare)(void *, void*)){
	int i;
	Institution *tempInstitution;
	int counter = 0;
	if(inputList->head==NULL)
	{
		return 0;
	}
	//Look for institution which is the particular type
	while((tempInstitution = (Institution*)List_removeHead(inputList)) !=NULL)
	{
		//Compare the institution with the institution type
		if(compare(tempInstitution,criterion))
		{	
			Stack_push(&stack,tempInstitution);
			counter++;
			
		}
	}
	for(i=0;i<counter;i++)
	{
		tempInstitution=Stack_pop(&stack);
		List_addTail(outputList,tempInstitution);
	}
	return counter;
	
	
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


