#include "unity.h"
#include "mock_Stack.h"
#include "mock_LinkedList.h"
#include "instituition.h"


void setUp(){}

void tearDown(){}



void test_LinkedList_will_reverse_2_different_Institution(){



 int check ;



 Institution institution1;

 Institution institution2;



 LinkedList list;

 LinkedList reversedlist;







 List_removeHead_CMockExpectAndReturn(23, &list, &institution1);

 Stack_push_CMockExpect(24, &stack, &institution1);



 List_removeHead_CMockExpectAndReturn(26, &list, &institution2);

 Stack_push_CMockExpect(27, &stack, &institution2);





 Stack_pop_CMockExpectAndReturn(30, &stack, &institution2);

 List_addTail_CMockExpect(31, &reversedlist, &institution2);



 Stack_pop_CMockExpectAndReturn(33, &stack, &institution1);

 List_addTail_CMockExpect(34, &reversedlist, &institution1);





 check = Institution_reverse(&list,&reversedlist);



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)39, UNITY_DISPLAY_STYLE_INT);

}



void test_LinkedList_will_reverse_3_different_Institution(){





 int check ;



 Institution institution1;

 Institution institution2;

 Institution institution3;



 LinkedList list;

 LinkedList reversedlist;







 List_removeHead_CMockExpectAndReturn(56, &list, &institution1);

 Stack_push_CMockExpect(57, &stack, &institution1);



 List_removeHead_CMockExpectAndReturn(59, &list, &institution2);

 Stack_push_CMockExpect(60, &stack, &institution2);



 List_removeHead_CMockExpectAndReturn(62, &list, &institution3);

 Stack_push_CMockExpect(63, &stack, &institution3);





 Stack_pop_CMockExpectAndReturn(66, &stack, &institution3);

 List_addTail_CMockExpect(67, &reversedlist, &institution3);



 Stack_pop_CMockExpectAndReturn(69, &stack, &institution2);

 List_addTail_CMockExpect(70, &reversedlist, &institution2);



 Stack_pop_CMockExpectAndReturn(72, &stack, &institution1);

 List_addTail_CMockExpect(73, &reversedlist, &institution1);





 check=Institution_reverse1(&list,&reversedlist);



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)78, UNITY_DISPLAY_STYLE_INT);



}



void test_LinkedList_will_reverse_4_different_Institution(){





 int check ;



 Institution institution1;

 Institution institution2;

 Institution institution3;

 Institution institution4;



 LinkedList list;

 LinkedList reversedlist;







 List_removeHead_CMockExpectAndReturn(97, &list, &institution1);

 Stack_push_CMockExpect(98, &stack, &institution1);



 List_removeHead_CMockExpectAndReturn(100, &list, &institution2);

 Stack_push_CMockExpect(101, &stack, &institution2);



 List_removeHead_CMockExpectAndReturn(103, &list, &institution3);

 Stack_push_CMockExpect(104, &stack, &institution3);



 List_removeHead_CMockExpectAndReturn(106, &list, &institution4);

 Stack_push_CMockExpect(107, &stack, &institution4);





 Stack_pop_CMockExpectAndReturn(110, &stack, &institution4);

 List_addTail_CMockExpect(111, &reversedlist, &institution4);



 Stack_pop_CMockExpectAndReturn(113, &stack, &institution3);

 List_addTail_CMockExpect(114, &reversedlist, &institution3);



 Stack_pop_CMockExpectAndReturn(116, &stack, &institution2);

 List_addTail_CMockExpect(117, &reversedlist, &institution2);



 Stack_pop_CMockExpectAndReturn(119, &stack, &institution1);

 List_addTail_CMockExpect(120, &reversedlist, &institution1);





 check=Institution_reverse2(&list,&reversedlist);



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)125, UNITY_DISPLAY_STYLE_INT);



}



void test_select_only_institution_of_particular_type(){



 Institution institution1 = {.type = Unknown };

 Institution institution2 = {.type = University };

 Institution institution3 = {.type = UniversityCollege };

 Institution institution4 = {.type = College };

}
