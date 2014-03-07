#ifndef __INSTITUITION_H__
#define __INSTITUITION_H__

#include "LinkedList.h"
#include "Stack.h"


extern Stack stack;


typedef enum{Unknown, University, UniversityCollege, College}InstitutionType;

typedef struct Instituton_t{
	char *name;
	char *address;
	unsigned long postcode;
	unsigned long int telephone;
	InstitutionType type;
	int yearEstablished;
	}Institution;

 
int Institution_reverse(LinkedList *inputList, LinkedList *outputList);




#endif //__INSTITUITION_H__
