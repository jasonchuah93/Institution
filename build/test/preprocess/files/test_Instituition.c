#include "unity.h"
#include "mock_Stack.h"
#include "mock_LinkedList.h"
#include "instituition.h"
#include "CException.h"




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



 List_removeHead_CMockExpectAndReturn(27, &list, ((void *)0));





 Stack_pop_CMockExpectAndReturn(30, &stack, &institution2);

 List_addTail_CMockExpect(31, &reversedlist, &institution2);



 Stack_pop_CMockExpectAndReturn(33, &stack, &institution1);

 List_addTail_CMockExpect(34, &reversedlist, &institution1);





 check = Institution_reverse(&list,&reversedlist);



 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)39, UNITY_DISPLAY_STYLE_INT);

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



 List_removeHead_CMockExpectAndReturn(65, &list, ((void *)0));





 Stack_pop_CMockExpectAndReturn(68, &stack, &institution3);

 List_addTail_CMockExpect(69, &reversedlist, &institution3);



 Stack_pop_CMockExpectAndReturn(71, &stack, &institution2);

 List_addTail_CMockExpect(72, &reversedlist, &institution2);



 Stack_pop_CMockExpectAndReturn(74, &stack, &institution1);

 List_addTail_CMockExpect(75, &reversedlist, &institution1);





 check=Institution_reverse(&list,&reversedlist);



 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)80, UNITY_DISPLAY_STYLE_INT);



}



void test_LinkedList_will_reverse_4_different_Institution(){





 int check ;



 Institution institution1;

 Institution institution2;

 Institution institution3;

 Institution institution4;



 LinkedList list;

 LinkedList reversedlist;







 List_removeHead_CMockExpectAndReturn(99, &list, &institution1);

 Stack_push_CMockExpect(100, &stack, &institution1);



 List_removeHead_CMockExpectAndReturn(102, &list, &institution2);

 Stack_push_CMockExpect(103, &stack, &institution2);



 List_removeHead_CMockExpectAndReturn(105, &list, &institution3);

 Stack_push_CMockExpect(106, &stack, &institution3);



 List_removeHead_CMockExpectAndReturn(108, &list, &institution4);

 Stack_push_CMockExpect(109, &stack, &institution4);



 List_removeHead_CMockExpectAndReturn(111, &list, ((void *)0));





 Stack_pop_CMockExpectAndReturn(114, &stack, &institution4);

 List_addTail_CMockExpect(115, &reversedlist, &institution4);



 Stack_pop_CMockExpectAndReturn(117, &stack, &institution3);

 List_addTail_CMockExpect(118, &reversedlist, &institution3);



 Stack_pop_CMockExpectAndReturn(120, &stack, &institution2);

 List_addTail_CMockExpect(121, &reversedlist, &institution2);



 Stack_pop_CMockExpectAndReturn(123, &stack, &institution1);

 List_addTail_CMockExpect(124, &reversedlist, &institution1);





 check=Institution_reverse(&list,&reversedlist);



 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)129, UNITY_DISPLAY_STYLE_INT);



}



void test_isUniversityCollege_should_return_1_if_type_is_UniversityCollege_or_return_0_if_type_is_not_UniversityCollege(){

 int check;

 Institution institution1 = {.type = Unknown };

 InstitutionType institutionType = UniversityCollege;

 check = isUniversityCollege(&institution1,&institutionType);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)138, UNITY_DISPLAY_STYLE_INT);



 Institution institution2 = {.type = University };

 institutionType = UniversityCollege;

 check = isUniversityCollege(&institution2,&institutionType);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)143, UNITY_DISPLAY_STYLE_INT);



 Institution institution3 = {.type = UniversityCollege };

 institutionType = UniversityCollege;

 check = isUniversityCollege(&institution3,&institutionType);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)148, UNITY_DISPLAY_STYLE_INT);



 Institution institution4 = {.type = College };

 institutionType = UniversityCollege;

 check = isUniversityCollege(&institution4,&institutionType);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)153, UNITY_DISPLAY_STYLE_INT);

}



void test_select_only_institution_of_particular_type(){

 int check;



 Institution institution1 = {.type = Unknown };

 Institution institution2 = {.type = University };

 Institution institution3 = {.type = UniversityCollege };

 Institution institution4 = {.type = College };



 LinkedList InstitutionList;

 LinkedList SelectedInstitution;



 InstitutionType Institutions = UniversityCollege;





 List_removeHead_CMockExpectAndReturn(170, &InstitutionList, &institution1);

 List_removeHead_CMockExpectAndReturn(171, &InstitutionList, &institution2);

 List_removeHead_CMockExpectAndReturn(172, &InstitutionList, &institution3);

 Stack_push_CMockExpect(173, &stack, &institution3);

 List_removeHead_CMockExpectAndReturn(174, &InstitutionList, &institution4);

 List_removeHead_CMockExpectAndReturn(175, &InstitutionList, ((void *)0));



 Stack_pop_CMockExpectAndReturn(177, &stack, &institution3);

 List_addTail_CMockExpect(178, &SelectedInstitution, &institution3);





 check = Institution_select(&InstitutionList,&SelectedInstitution,&Institutions,isUniversityCollege);



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)183, UNITY_DISPLAY_STYLE_INT);

}



void test_wasEstablishedBefore_should_return_0_if_institution_establish_after_particular_year_but_before_2014(){

 int check;

 int year = 1980;



 Institution institution1 = {.yearEstablished = 1990 };

 Institution institution2 = {.yearEstablished = 2000 };

 Institution institution3 = {.yearEstablished = 2010 };

 Institution institution4 = {.yearEstablished = 2013 };



 check = wasEstablishedBefore(&institution1,&year);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)196, UNITY_DISPLAY_STYLE_INT);



 check = wasEstablishedBefore(&institution2,&year);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)199, UNITY_DISPLAY_STYLE_INT);



 check = wasEstablishedBefore(&institution3,&year);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)202, UNITY_DISPLAY_STYLE_INT);



 check = wasEstablishedBefore(&institution4,&year);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)205, UNITY_DISPLAY_STYLE_INT);





}



void test_wasEstablishedBefore_should_return_1_if_institution_establish_before_particular_year(){

 int check;

 int year = 1980;



 Institution institution1 = {.yearEstablished = 1970 };

 Institution institution2 = {.yearEstablished = 1960 };

 Institution institution3 = {.yearEstablished = 1950 };

 Institution institution4 = {.yearEstablished = 1930};





 check = wasEstablishedBefore(&institution1,&year);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)221, UNITY_DISPLAY_STYLE_INT);



 check = wasEstablishedBefore(&institution2,&year);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)224, UNITY_DISPLAY_STYLE_INT);



 check = wasEstablishedBefore(&institution3,&year);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)227, UNITY_DISPLAY_STYLE_INT);



 check = wasEstablishedBefore(&institution4,&year);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)230, UNITY_DISPLAY_STYLE_INT);

}



void test_wasEstablishedBefore_should_return_0_if_institution_establish_on_particular_year(){

 int check;

 int year = 1980;



 Institution institution1 = {.yearEstablished = 1980 };

 Institution institution2 = {.yearEstablished = 1980 };

 Institution institution3 = {.yearEstablished = 1980 };

 Institution institution4 = {.yearEstablished = 1980 };



 check = wasEstablishedBefore(&institution1,&year);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)243, UNITY_DISPLAY_STYLE_INT);



 check = wasEstablishedBefore(&institution2,&year);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)246, UNITY_DISPLAY_STYLE_INT);



 check = wasEstablishedBefore(&institution3,&year);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)249, UNITY_DISPLAY_STYLE_INT);



 check = wasEstablishedBefore(&institution4,&year);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)252, UNITY_DISPLAY_STYLE_INT);

}



void test_wasEstablisedBefore_should_throw_exception_if_institution_established_after_2014(){

 ExceptionError exception;

 Institution institution1={.yearEstablished = 2020};

 int year = 1980;

 int check;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  check = wasEstablishedBefore(&institution1,&year);

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { exception = CExceptionFrames[MY_ID].Exception; exception=exception; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){



  UnityAssertEqualNumber((_U_SINT)((Error_year_established)), (_U_SINT)((exception)), (((void *)0)), (_U_UINT)266, UNITY_DISPLAY_STYLE_INT);

  printf("Invalid year establish");

 }



}



void test_select_only_institution_which_establish_before_specific_year_and_throw_error_if_establish_after_2014(){

 ExceptionError exception;

 int check;

 int year =1980;



 Institution institution1 = {.yearEstablished = 1979 };

 Institution institution2 = {.yearEstablished = 1970 };

 Institution institution3 = {.yearEstablished = 2022 };

 Institution institution4 = {.yearEstablished = 1950 };



 LinkedList InstitutionList;

 LinkedList SelectedInstitution;









 List_removeHead_CMockExpectAndReturn(288, &InstitutionList, &institution1);

 Stack_push_CMockExpect(289, &stack, &institution1);

 List_removeHead_CMockExpectAndReturn(290, &InstitutionList, &institution2);

 Stack_push_CMockExpect(291, &stack, &institution2);

 List_removeHead_CMockExpectAndReturn(292, &InstitutionList, &institution3);



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  check=Institution_select(&InstitutionList,&SelectedInstitution,&year,wasEstablishedBefore);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)296, UNITY_DISPLAY_STYLE_INT);

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { exception = CExceptionFrames[MY_ID].Exception; exception=exception; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((Error_year_established)), (_U_SINT)((exception)), (((void *)0)), (_U_UINT)299, UNITY_DISPLAY_STYLE_INT);

  printf("Invalid year establish after 2014");



 }



}
