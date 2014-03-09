#ifndef __INSTITUITION_H__
#define __INSTITUITION_H__

#include "LinkedList.h"
#include "Stack.h"


extern Stack stack;


typedef enum{Unknown, University, UniversityCollege, College}InstitutionType;

typedef enum {Error_year_established}ExceptionError;

typedef struct Instituton_t{
	char *name;
	char *address;
	unsigned long postcode;
	unsigned long int telephone;
	InstitutionType type;
	int yearEstablished;
	}Institution;


int Institution_reverse(LinkedList *inputList, LinkedList *outputList);
int Institution_reverse1(LinkedList *inputList, LinkedList *outputList);
int Institution_reverse2(LinkedList *inputList, LinkedList *outputList);
int isUniversityCollege (void *elem1 , void *type);
int wasEstablishedBefore(void *elem1, void *year);

#endif //__INSTITUITION_H__
