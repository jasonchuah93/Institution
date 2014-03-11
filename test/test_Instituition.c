#include "unity.h"
#include "instituition.h"
#include "mock_LinkedList.h"
#include "mock_Stack.h"
#include "CException.h"

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
	
	List_removeHead_ExpectAndReturn(&list,NULL);
	
	//Pop Element 2 from stack and add to tail 
	Stack_pop_ExpectAndReturn(&stack,&institution2);
	List_addTail_Expect(&reversedlist,&institution2);
	//Pop Element 1 from stack and add to tail 
	Stack_pop_ExpectAndReturn(&stack,&institution1);
	List_addTail_Expect(&reversedlist,&institution1);
	
	//Call function
	check = Institution_reverse(&list,&reversedlist);
	//Unit test
	TEST_ASSERT_EQUAL(2,check);
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

	List_removeHead_ExpectAndReturn(&list,NULL);
	
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
	check=Institution_reverse(&list,&reversedlist);
	//Unit test
	TEST_ASSERT_EQUAL(3,check);
	
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
	
	List_removeHead_ExpectAndReturn(&list,NULL);
	
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
	check=Institution_reverse(&list,&reversedlist);
	//Unit test
	TEST_ASSERT_EQUAL(4,check);
	
}

void test_isUniversityCollege_should_return_1_if_type_is_UniversityCollege_or_return_0_if_type_is_not_UniversityCollege(){
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
	LinkedList SelectedInstitution;
	//To test Institutions is UniversityCollege
	InstitutionType Institutions = UniversityCollege;
	//Look for institution that is University College which is institution3
	//and push to compare
	List_removeHead_ExpectAndReturn(&InstitutionList,&institution1);
	List_removeHead_ExpectAndReturn(&InstitutionList,&institution2);
	List_removeHead_ExpectAndReturn(&InstitutionList,&institution3);
	Stack_push_Expect(&stack,&institution3);
	List_removeHead_ExpectAndReturn(&InstitutionList,&institution4);
	List_removeHead_ExpectAndReturn(&InstitutionList,NULL);
	//Add back institution 3 to link list
	Stack_pop_ExpectAndReturn(&stack,&institution3);
	List_addTail_Expect(&SelectedInstitution,&institution3);
	
	//Call function
	check = Institution_select(&InstitutionList,&SelectedInstitution,&Institutions,isUniversityCollege);
	//Unit test
	TEST_ASSERT_EQUAL(1,check);
}

void test_wasEstablishedBefore_should_return_0_if_institution_establish_after_particular_year_but_before_2014(){
	int check;
	int year = 1980;
	
	Institution institution1 = {.yearEstablished = 1990 };
	Institution institution2 = {.yearEstablished = 2000 };
	Institution institution3 = {.yearEstablished = 2010 };
	Institution institution4 = {.yearEstablished = 2013 };
	//Institution 1
	check = wasEstablishedBefore(&institution1,&year);
	TEST_ASSERT_EQUAL(0,check);
	//Institution 2
	check = wasEstablishedBefore(&institution2,&year);
	TEST_ASSERT_EQUAL(0,check);
	//Institution 3
	check = wasEstablishedBefore(&institution3,&year);
	TEST_ASSERT_EQUAL(0,check);
	//Institution 4
	check = wasEstablishedBefore(&institution4,&year);
	TEST_ASSERT_EQUAL(0,check);
	
	
}

void test_wasEstablishedBefore_should_return_1_if_institution_establish_before_particular_year(){
	int check;
	int year = 1980;
	
	Institution institution1 = {.yearEstablished = 1970 };
	Institution institution2 = {.yearEstablished = 1960 };
	Institution institution3 = {.yearEstablished = 1950 };
	Institution institution4 = {.yearEstablished = 1930};
	
	//Institution 1
	check = wasEstablishedBefore(&institution1,&year);
	TEST_ASSERT_EQUAL(1,check);
	//Institution 2
	check = wasEstablishedBefore(&institution2,&year);
	TEST_ASSERT_EQUAL(1,check);
	//Institution 3
	check = wasEstablishedBefore(&institution3,&year);
	TEST_ASSERT_EQUAL(1,check);
	//Institution 3
	check = wasEstablishedBefore(&institution4,&year);
	TEST_ASSERT_EQUAL(1,check);
}

void test_wasEstablishedBefore_should_return_0_if_institution_establish_on_particular_year(){
	int check;
	int year = 1980;
	
	Institution institution1 = {.yearEstablished = 1980 };
	Institution institution2 = {.yearEstablished = 1980 };
	Institution institution3 = {.yearEstablished = 1980 };
	Institution institution4 = {.yearEstablished = 1980 };
	//Institution 1
	check = wasEstablishedBefore(&institution1,&year);
	TEST_ASSERT_EQUAL(0,check);
	//Institution 2
	check = wasEstablishedBefore(&institution2,&year);
	TEST_ASSERT_EQUAL(0,check);
	//Institution 3
	check = wasEstablishedBefore(&institution3,&year);
	TEST_ASSERT_EQUAL(0,check);
	//Institution 4
	check = wasEstablishedBefore(&institution4,&year);
	TEST_ASSERT_EQUAL(0,check);
}	

void test_wasEstablisedBefore_should_throw_exception_if_institution_established_after_2014(){
	ExceptionError exception;
	Institution institution1={.yearEstablished = 2020};
	int year = 1980; 
	int check;

	Try{
		check = wasEstablishedBefore(&institution1,&year);
	}
	Catch(exception){
		//If establish year is 2014 and above will show invalid year establish
		TEST_ASSERT_EQUAL(Error_year_established,exception);
		printf("Invalid year establish");
	}

}

void test_select_only_institution_which_establish_before_specific_year_and_throw_error_if_establish_after_2014(){
	ExceptionError exception;
	int check;
	int year =1980;
	//Initialize institution and LinkedList
	Institution institution1 = {.yearEstablished = 1979 };
	Institution institution2 = {.yearEstablished = 1970 };
	Institution institution3 = {.yearEstablished = 2022 };
	Institution institution4 = {.yearEstablished = 1950 };
	
	LinkedList InstitutionList;
	LinkedList SelectedInstitution;
	//To test Institutions is established before 1980
	
	//Look for institution that is established after 2014 which is institution3
	//and throw an error
	List_removeHead_ExpectAndReturn(&InstitutionList,&institution1);
	Stack_push_Expect(&stack,&institution1);
	List_removeHead_ExpectAndReturn(&InstitutionList,&institution2);
	Stack_push_Expect(&stack,&institution2);
	List_removeHead_ExpectAndReturn(&InstitutionList,&institution3);
	
	Try{
		check=Institution_select(&InstitutionList,&SelectedInstitution,&year,wasEstablishedBefore);
		TEST_ASSERT_EQUAL(1,check);
	}
	Catch(exception){
		TEST_ASSERT_EQUAL(Error_year_established,exception);
		printf("Invalid year establish after 2014");
		
	}
	
}

