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





 List_removeHead_CMockExpectAndReturn(21, &list, &institution1);

 Stack_push_CMockExpect(22, &stack, &institution1);



 List_removeHead_CMockExpectAndReturn(24, &list, &institution2);

 Stack_push_CMockExpect(25, &stack, &institution2);





 Stack_pop_CMockExpectAndReturn(28, &stack, &institution2);

 List_addTail_CMockExpect(29, &reversedlist, &institution2);



 Stack_pop_CMockExpectAndReturn(31, &stack, &institution1);

 List_addTail_CMockExpect(32, &reversedlist, &institution1);





 check = Institution_reverse(&list,&reversedlist);



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)37, UNITY_DISPLAY_STYLE_INT);

}



void test_LinkedList_will_reverse_3_different_Institution(){





 int check ;



 Institution institution1;

 Institution institution2;

 Institution institution3;



 LinkedList list;

 LinkedList reversedlist;







 List_removeHead_CMockExpectAndReturn(54, &list, &institution1);

 Stack_push_CMockExpect(55, &stack, &institution1);



 List_removeHead_CMockExpectAndReturn(57, &list, &institution2);

 Stack_push_CMockExpect(58, &stack, &institution2);



 List_removeHead_CMockExpectAndReturn(60, &list, &institution3);

 Stack_push_CMockExpect(61, &stack, &institution3);





 Stack_pop_CMockExpectAndReturn(64, &stack, &institution3);

 List_addTail_CMockExpect(65, &reversedlist, &institution3);



 Stack_pop_CMockExpectAndReturn(67, &stack, &institution2);

 List_addTail_CMockExpect(68, &reversedlist, &institution2);



 Stack_pop_CMockExpectAndReturn(70, &stack, &institution1);

 List_addTail_CMockExpect(71, &reversedlist, &institution1);





 check=Institution_reverse1(&list,&reversedlist);



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)76, UNITY_DISPLAY_STYLE_INT);



}



void test_LinkedList_will_reverse_4_different_Institution(){





 int check ;



 Institution institution1;

 Institution institution2;

 Institution institution3;

 Institution institution4;



 LinkedList list;

 LinkedList reversedlist;







 List_removeHead_CMockExpectAndReturn(95, &list, &institution1);

 Stack_push_CMockExpect(96, &stack, &institution1);



 List_removeHead_CMockExpectAndReturn(98, &list, &institution2);

 Stack_push_CMockExpect(99, &stack, &institution2);



 List_removeHead_CMockExpectAndReturn(101, &list, &institution3);

 Stack_push_CMockExpect(102, &stack, &institution3);



 List_removeHead_CMockExpectAndReturn(104, &list, &institution4);

 Stack_push_CMockExpect(105, &stack, &institution4);





 Stack_pop_CMockExpectAndReturn(108, &stack, &institution4);

 List_addTail_CMockExpect(109, &reversedlist, &institution4);



 Stack_pop_CMockExpectAndReturn(111, &stack, &institution3);

 List_addTail_CMockExpect(112, &reversedlist, &institution3);



 Stack_pop_CMockExpectAndReturn(114, &stack, &institution2);

 List_addTail_CMockExpect(115, &reversedlist, &institution2);



 Stack_pop_CMockExpectAndReturn(117, &stack, &institution1);

 List_addTail_CMockExpect(118, &reversedlist, &institution1);





 check=Institution_reverse2(&list,&reversedlist);



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)123, UNITY_DISPLAY_STYLE_INT);



}



void test_select_only_institution_of_particular_type(){



 Institution institution1 = {.type = Unknown };

 Institution institution2 = {.type = University };

 Institution institution3 = {.type = UniversityCollege };

 Institution institution4 = {.type = College };



 LinkedList list;

 LinkedList reversedList;



 InstitutionType type = UniversityCollege;









}



void test_isUniversityCollege_should_return_1_if_type_is_UniversityCollege(){

 int check;

 Institution institution1 = {.type = Unknown };

 InstitutionType institutionType = UniversityCollege;

 check = isUniversityCollege(&institution1,&institutionType);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)149, UNITY_DISPLAY_STYLE_INT);



 Institution institution2 = {.type = University };

 institutionType = UniversityCollege;

 check = isUniversityCollege(&institution2,&institutionType);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)154, UNITY_DISPLAY_STYLE_INT);



 Institution institution3 = {.type = UniversityCollege };

 institutionType = UniversityCollege;

 check = isUniversityCollege(&institution3,&institutionType);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)159, UNITY_DISPLAY_STYLE_INT);



 Institution institution4 = {.type = College };

 institutionType = UniversityCollege;

 check = isUniversityCollege(&institution4,&institutionType);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)164, UNITY_DISPLAY_STYLE_INT);

}
