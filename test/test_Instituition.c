#include "unity.h"
#include "instituition.h"
#include "mock_LinkedList.h"
#include "mock_Stack.h"


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
	//Initialize Institution and linked list
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

void test_isUniversityCollege_should_return_1_if_type_is_UniversityCollege(){
	int check;
	Institution institution1 = {.type = Unknown };
	InstitutionType institutionType = UniversityCollege;
	check = isUniversityCollege(&institution1,&institutionType);
	TEST_ASSERT_EQUAL(0,check);
	
	Institution institution2 = {.type = University };
	institutionType = UniversityCollege;
	check = isUniversityCollege(&institution2,&institutionType);
	TEST_ASSERT_EQUAL(0,check);
	
	Institution institution3 = {.type = UniversityCollege };
	institutionType = UniversityCollege;
	check = isUniversityCollege(&institution3,&institutionType);
	TEST_ASSERT_EQUAL(1,check);
	
	Institution institution4 = {.type = College };
	institutionType = UniversityCollege;
	check = isUniversityCollege(&institution4,&institutionType);
	TEST_ASSERT_EQUAL(0,check);
}
	
void test_select_only_institution_of_particular_type(){
	int check;
	//Initialize institution and LinkedList
	Institution institution1 = {.type = Unknown };
	Institution institution2 = {.type = University };
	Institution institution3 = {.type = UniversityCollege };
	Institution institution4 = {.type = College };
	
	LinkedList InstitutionList;
	LinkedList SelectedInstitutionList;
	//To test Institutions is UniversityCollege
	InstitutionType Institutions = UniversityCollege;
	//Look for institution that is University College which is institution3
	//and push to compare
	List_removeHead_ExpectAndReturn(&InstitutionList,&institution1);
	List_removeHead_ExpectAndReturn(&InstitutionList,&institution2);
	List_removeHead_ExpectAndReturn(&InstitutionList,&institution3);
	Stack_push_Expect(&stack,&institution3);
	List_removeHead_ExpectAndReturn(&InstitutionList,&institution4);
	//Add back institution 3 to link list
	List_addTail_Expect(&SelectedInstitutionList,&institution4);
	Stack_pop_ExpectAndReturn(&stack,&institution3);
	List_addTail_Expect(&SelectedInstitutionList,&institution3);
	
	
	//Call function
	check = Institution_select(&InstitutionList,&SelectedInstitutionList,&Institutions,isUniversityCollege);
	
}





