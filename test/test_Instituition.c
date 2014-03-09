#include "unity.h"
#include "instituition.h"
#include "mock_LinkedList.h"
#include "mock_Stack.h"
#include <string.h>
#include <stdlib.h>

void setUp(){}
void tearDown(){}

void test_LinkedList_will_reverse_2_different_Institution(){
	//To check whether the function will return 1  
	int check ;
	//Initialize Instituition and linked list
	Institution institution1;
	Institution institution2;

	LinkedList list;
	LinkedList reversedlist;
	
	//Evaluate the reverse function
	//Remove head and push Element 1 to stack
	List_removeHead_ExpectAndReturn(&list,&institution1);
	Stack_push_Expect(&stack,&institution1);
	//Remove head and push Element 2 to stack
	List_removeHead_ExpectAndReturn(&list,&institution2);
	Stack_push_Expect(&stack,&institution2);
	
	//Pop Element 2 from stack and add to tail 
	Stack_pop_ExpectAndReturn(&stack,&institution2);
	List_addTail_Expect(&reversedlist,&institution2);
	//Pop Element 1 from stack and add to tail 
	Stack_pop_ExpectAndReturn(&stack,&institution1);
	List_addTail_Expect(&reversedlist,&institution1);
	
	//Call function
	check = Institution_reverse(&list,&reversedlist);
	//Unit test
	TEST_ASSERT_EQUAL(1,check);
}

void test_LinkedList_will_reverse_3_different_Institution(){
	
	//To check whether the function will return 1  
	int check ;
	//Initialize Instituition and linked list
	Institution institution1;
	Institution institution2;
	Institution institution3;
		
	LinkedList list;
	LinkedList reversedlist;
	
	//Evaluate the reverse function
	//Remove head and push Element 1 to stack
	List_removeHead_ExpectAndReturn(&list,&institution1);
	Stack_push_Expect(&stack,&institution1);
	//Remove head and push Element 2 to stack
	List_removeHead_ExpectAndReturn(&list,&institution2);
	Stack_push_Expect(&stack,&institution2);
	//Remove head and push Element 3 to stack
	List_removeHead_ExpectAndReturn(&list,&institution3);
	Stack_push_Expect(&stack,&institution3);

	//Pop Element 3 from stack and add to tail 
	Stack_pop_ExpectAndReturn(&stack,&institution3);
	List_addTail_Expect(&reversedlist,&institution3);
	//Pop Element 2 from stack and add to tail 
	Stack_pop_ExpectAndReturn(&stack,&institution2);
	List_addTail_Expect(&reversedlist,&institution2);
	//Pop Element 1 from stack and add to tail 
	Stack_pop_ExpectAndReturn(&stack,&institution1);
	List_addTail_Expect(&reversedlist,&institution1);
	
	//Call function
	check=Institution_reverse1(&list,&reversedlist);
	//Unit test
	TEST_ASSERT_EQUAL(1,check);
	
}

void test_LinkedList_will_reverse_4_different_Institution(){
	
	//To check whether the function will return 1  
	int check ;
	//Initialize Instituition and linked list
	Institution institution1;
	Institution institution2;
	Institution institution3;
	Institution institution4;
		
	LinkedList list;
	LinkedList reversedlist;
	
	//Evaluate the reverse function
	//Remove head and push Element 1 to stack
	List_removeHead_ExpectAndReturn(&list,&institution1);
	Stack_push_Expect(&stack,&institution1);
	//Remove head and push Element 2 to stack
	List_removeHead_ExpectAndReturn(&list,&institution2);
	Stack_push_Expect(&stack,&institution2);
	//Remove head and push Element 3 to stack
	List_removeHead_ExpectAndReturn(&list,&institution3);
	Stack_push_Expect(&stack,&institution3);
	//Remove head and push Element 4 to stack
	List_removeHead_ExpectAndReturn(&list,&institution4);
	Stack_push_Expect(&stack,&institution4);
	
	//Pop Element 4 from stack and add to tail 
	Stack_pop_ExpectAndReturn(&stack,&institution4);
	List_addTail_Expect(&reversedlist,&institution4);
	//Pop Element 3 from stack and add to tail 
	Stack_pop_ExpectAndReturn(&stack,&institution3);
	List_addTail_Expect(&reversedlist,&institution3);
	//Pop Element 2 from stack and add to tail 
	Stack_pop_ExpectAndReturn(&stack,&institution2);
	List_addTail_Expect(&reversedlist,&institution2);
	//Pop Element 1 from stack and add to tail 
	Stack_pop_ExpectAndReturn(&stack,&institution1);
	List_addTail_Expect(&reversedlist,&institution1);
	
	//Call function
	check=Institution_reverse2(&list,&reversedlist);
	//Unit test
	TEST_ASSERT_EQUAL(1,check);
	
}

void test_select_only_institution_of_particular_type(){
	
	Institution institution1 = {.type = Unknown };
	Institution institution2 = {.type = University };
	Institution institution3 = {.type = UniversityCollege };
	Institution institution4 = {.type = College };
	
	
	
	
	
	
	

	
}




