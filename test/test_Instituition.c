#include "unity.h"
#include "instituition.h"
#include "mock_LinkedList.h"
#include "mock_Stack.h"
#include <string.h>
#include <stdlib.h>

void setUp(){}
void tearDown(){}

void test_LinkedList_will_reverse_2_different_Instituition(){
	//Initialize Instituition
	Institution institution1;
	Institution institution2;

	LinkedList list;
	LinkedList reversedlist;
	
	list.head; 
	list.tail;
	
	//Evaluate the reverse function
	//push Element 1
	List_removeHead_ExpectAndReturn(&list,&institution1);
	Stack_push_Expect(&stack,&institution1);
	//push Element 2
	List_removeHead_ExpectAndReturn(&list,&institution2);
	Stack_push_Expect(&stack,&institution2);
	//pop Element 2
	Stack_pop_ExpectAndReturn(&stack,&institution2);
	List_addTail_Expect(&reversedlist,&institution2);
	//pop Element 1
	Stack_pop_ExpectAndReturn(&stack,&institution1);
	List_addTail_Expect(&reversedlist,&institution1);
	
	//Call function
	Institution_reverse(&list,&reversedlist);
	
}

void test_LinkedList_will_reverse_3_different_Instituition(){
	//Initialize Instituition
	Institution institution1;
	Institution institution2;
	Institution institution3;
		
	LinkedList list;
	LinkedList reversedlist;
	
	list.head; 
	list.tail;
	
	//Evaluate the reverse function
	//push Element 1
	List_removeHead_ExpectAndReturn(&list,&institution1);
	Stack_push_Expect(&stack,&institution1);
	//push Element 2
	List_removeHead_ExpectAndReturn(&list,&institution2);
	Stack_push_Expect(&stack,&institution2);
	//push Element 3
	List_removeHead_ExpectAndReturn(&list,&institution3);
	Stack_push_Expect(&stack,&institution3);

	//Pop Element 3
	Stack_pop_ExpectAndReturn(&stack,&institution3);
	List_addTail_Expect(&reversedlist,&institution3);
	//pop Element 2
	Stack_pop_ExpectAndReturn(&stack,&institution2);
	List_addTail_Expect(&reversedlist,&institution2);
	//pop Element 1
	Stack_pop_ExpectAndReturn(&stack,&institution1);
	List_addTail_Expect(&reversedlist,&institution1);
	
	//Call function
	Institution_reverse1(&list,&reversedlist);
}





