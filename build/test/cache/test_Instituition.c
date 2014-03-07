#include "unity.h"
#include "mock_Stack.h"
#include "mock_LinkedList.h"
#include "instituition.h"


void setUp(){}

void tearDown(){}



void test_LinkedList_will_reverse_2_different_Instituition(){



 Institution institution1;

 Institution institution2;



 LinkedList list;

 LinkedList reversedlist;



 list.head;

 list.tail;







 List_removeHead_CMockExpectAndReturn(24, &list, &institution1);

 Stack_push_CMockExpect(25, &stack, &institution1);



 List_removeHead_CMockExpectAndReturn(27, &list, &institution2);

 Stack_push_CMockExpect(28, &stack, &institution2);



 Stack_pop_CMockExpectAndReturn(30, &stack, &institution2);

 List_addTail_CMockExpect(31, &reversedlist, &institution2);



 Stack_pop_CMockExpectAndReturn(33, &stack, &institution1);

 List_addTail_CMockExpect(34, &reversedlist, &institution1);





 Institution_reverse(&list,&reversedlist);



}



void test_LinkedList_will_reverse_3_different_Instituition(){



 Institution institution1;

 Institution institution2;

 Institution institution3;



 LinkedList list;

 LinkedList reversedlist;



 list.head;

 list.tail;







 List_removeHead_CMockExpectAndReturn(55, &list, &institution1);

 Stack_push_CMockExpect(56, &stack, &institution1);



 List_removeHead_CMockExpectAndReturn(58, &list, &institution2);

 Stack_push_CMockExpect(59, &stack, &institution2);



 List_removeHead_CMockExpectAndReturn(61, &list, &institution3);

 Stack_push_CMockExpect(62, &stack, &institution3);





 Stack_pop_CMockExpectAndReturn(65, &stack, &institution3);

 List_addTail_CMockExpect(66, &reversedlist, &institution3);



 Stack_pop_CMockExpectAndReturn(68, &stack, &institution2);

 List_addTail_CMockExpect(69, &reversedlist, &institution2);



 Stack_pop_CMockExpectAndReturn(71, &stack, &institution1);

 List_addTail_CMockExpect(72, &reversedlist, &institution1);





 Institution_reverse1(&list,&reversedlist);



}
