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



void test_isUniversityCollege_should_return_1_if_type_is_UniversityCollege_or_return_0_if_type_is_not_UniversityCollege(){

 int check;

 Institution institution1 = {.type = Unknown };

 InstitutionType institutionType = UniversityCollege;

 check = isUniversityCollege(&institution1,&institutionType);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)132, UNITY_DISPLAY_STYLE_INT);



 Institution institution2 = {.type = University };

 institutionType = UniversityCollege;

 check = isUniversityCollege(&institution2,&institutionType);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)137, UNITY_DISPLAY_STYLE_INT);



 Institution institution3 = {.type = UniversityCollege };

 institutionType = UniversityCollege;

 check = isUniversityCollege(&institution3,&institutionType);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)142, UNITY_DISPLAY_STYLE_INT);



 Institution institution4 = {.type = College };

 institutionType = UniversityCollege;

 check = isUniversityCollege(&institution4,&institutionType);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)147, UNITY_DISPLAY_STYLE_INT);

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





 List_removeHead_CMockExpectAndReturn(164, &InstitutionList, &institution1);

 List_removeHead_CMockExpectAndReturn(165, &InstitutionList, &institution2);

 List_removeHead_CMockExpectAndReturn(166, &InstitutionList, &institution3);

 Stack_push_CMockExpect(167, &stack, &institution3);

 List_removeHead_CMockExpectAndReturn(168, &InstitutionList, &institution4);



 List_addTail_CMockExpect(170, &SelectedInstitution, &institution4);

 Stack_pop_CMockExpectAndReturn(171, &stack, &institution3);

 List_addTail_CMockExpect(172, &SelectedInstitution, &institution3);







 check = Institution_select(&InstitutionList,&SelectedInstitution,&Institutions,isUniversityCollege);



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)178, UNITY_DISPLAY_STYLE_INT);

}



void test_wasEstablishedBefore_should_return_0_if_institution_establish_after_particular_year_but_before_2014(){

 int check;

 int year = 1980;



 Institution institution1 = {.yearEstablished = 1990 };

 Institution institution2 = {.yearEstablished = 2000 };

 Institution institution3 = {.yearEstablished = 2010 };

 Institution institution4 = {.yearEstablished = 2013 };



 check = wasEstablishedBefore(&institution1,&year);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)191, UNITY_DISPLAY_STYLE_INT);



 check = wasEstablishedBefore(&institution2,&year);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)194, UNITY_DISPLAY_STYLE_INT);



 check = wasEstablishedBefore(&institution3,&year);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)197, UNITY_DISPLAY_STYLE_INT);



 check = wasEstablishedBefore(&institution4,&year);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)200, UNITY_DISPLAY_STYLE_INT);





}



void test_wasEstablishedBefore_should_return_1_if_institution_establish_before_particular_year(){

 int check;

 int year = 1980;



 Institution institution1 = {.yearEstablished = 1970 };

 Institution institution2 = {.yearEstablished = 1960 };

 Institution institution3 = {.yearEstablished = 1950 };

 Institution institution4 = {.yearEstablished = 1930};





 check = wasEstablishedBefore(&institution1,&year);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)216, UNITY_DISPLAY_STYLE_INT);



 check = wasEstablishedBefore(&institution2,&year);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)219, UNITY_DISPLAY_STYLE_INT);



 check = wasEstablishedBefore(&institution3,&year);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)222, UNITY_DISPLAY_STYLE_INT);



 check = wasEstablishedBefore(&institution4,&year);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)225, UNITY_DISPLAY_STYLE_INT);

}



void test_wasEstablishedBefore_should_return_0_if_institution_establish_on_particular_year(){

 int check;

 int year = 1980;



 Institution institution1 = {.yearEstablished = 1980 };

 Institution institution2 = {.yearEstablished = 1980 };

 Institution institution3 = {.yearEstablished = 1980 };

 Institution institution4 = {.yearEstablished = 1980 };



 check = wasEstablishedBefore(&institution1,&year);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)238, UNITY_DISPLAY_STYLE_INT);



 check = wasEstablishedBefore(&institution2,&year);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)241, UNITY_DISPLAY_STYLE_INT);



 check = wasEstablishedBefore(&institution3,&year);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)244, UNITY_DISPLAY_STYLE_INT);



 check = wasEstablishedBefore(&institution4,&year);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)247, UNITY_DISPLAY_STYLE_INT);

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



  UnityAssertEqualNumber((_U_SINT)((Error_year_established)), (_U_SINT)((exception)), (((void *)0)), (_U_UINT)261, UNITY_DISPLAY_STYLE_INT);

  printf("Invalid year establish");

 }



}



void test_select_only_institution_which_establish_before_specific_year_and_throw_error_if_establish_after_2014(){

 ExceptionError exception;

 int check;

 int year =1980;



 Institution institution1 = {.yearEstablished = 1979 };

 Institution institution2 = {.yearEstablished = 1970 };

 Institution institution3 = {.yearEstablished = 2050 };

 Institution institution4 = {.yearEstablished = 1950 };



 LinkedList InstitutionList;

 LinkedList SelectedInstitution;









 List_removeHead_CMockExpectAndReturn(283, &InstitutionList, &institution1);

 List_removeHead_CMockExpectAndReturn(284, &InstitutionList, &institution2);

 List_removeHead_CMockExpectAndReturn(285, &InstitutionList, &institution3);



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  check=Institution_select(&InstitutionList,&SelectedInstitution,&year,wasEstablishedBefore);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((check)), (((void *)0)), (_U_UINT)289, UNITY_DISPLAY_STYLE_INT);

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { exception = CExceptionFrames[MY_ID].Exception; exception=exception; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((Error_year_established)), (_U_SINT)((exception)), (((void *)0)), (_U_UINT)292, UNITY_DISPLAY_STYLE_INT);

  printf("Invalid year establish after 2014");



 }







}
