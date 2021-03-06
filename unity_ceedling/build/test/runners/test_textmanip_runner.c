/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_reverse_null(void);
extern void test_reverse_hello(void);
extern void test_reverse_empty(void);
extern void test_reverse_len1(void);
extern void test_reverse_len2(void);
extern void test_palindrome_null(void);
extern void test_palindrome_hello(void);
extern void test_palindrome_racecar(void);
extern void test_len_hello(void);
extern void test_len_empty(void);
extern void test_len_null(void);
extern void test_strchr_null(void);
extern void test_strchr_empty(void);
extern void test_strchr_double(void);
extern void test_strchr_last(void);
extern void test_strchr_first(void);
extern void test_strchr_odd(void);
extern void test_strrchr_null(void);
extern void test_strrchr_empty(void);
extern void test_strrchr_double(void);
extern void test_strrchr_last(void);
extern void test_strrchr_first(void);
extern void test_strrchr_odd(void);
extern void test_cpy_null(void);
extern void test_cpy_empty(void);
extern void test_cpy_hello(void);
extern void test_cat_null(void);
extern void test_cat_empty(void);
extern void test_cat_hello(void);


//=======Test Reset Option=====
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  UnityBegin("test_textmanip.c");
  RUN_TEST(test_reverse_null, 13);
  RUN_TEST(test_reverse_hello, 18);
  RUN_TEST(test_reverse_empty, 26);
  RUN_TEST(test_reverse_len1, 34);
  RUN_TEST(test_reverse_len2, 42);
  RUN_TEST(test_palindrome_null, 51);
  RUN_TEST(test_palindrome_hello, 56);
  RUN_TEST(test_palindrome_racecar, 62);
  RUN_TEST(test_len_hello, 69);
  RUN_TEST(test_len_empty, 75);
  RUN_TEST(test_len_null, 81);
  RUN_TEST(test_strchr_null, 87);
  RUN_TEST(test_strchr_empty, 92);
  RUN_TEST(test_strchr_double, 97);
  RUN_TEST(test_strchr_last, 104);
  RUN_TEST(test_strchr_first, 111);
  RUN_TEST(test_strchr_odd, 118);
  RUN_TEST(test_strrchr_null, 126);
  RUN_TEST(test_strrchr_empty, 131);
  RUN_TEST(test_strrchr_double, 136);
  RUN_TEST(test_strrchr_last, 143);
  RUN_TEST(test_strrchr_first, 150);
  RUN_TEST(test_strrchr_odd, 157);
  RUN_TEST(test_cpy_null, 164);
  RUN_TEST(test_cpy_empty, 172);
  RUN_TEST(test_cpy_hello, 179);
  RUN_TEST(test_cat_null, 186);
  RUN_TEST(test_cat_empty, 194);
  RUN_TEST(test_cat_hello, 205);

  return (UnityEnd());
}
