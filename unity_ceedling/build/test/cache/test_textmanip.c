#include "textmanip.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}





void test_reverse_null(void)

{

 if ((((str_reverse(((void *)0)))) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)15);;};

}



void test_reverse_hello(void)

{

 char test[] = "Hello";

 char *result = str_reverse(test);

 if ((((result)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)22);;}

 UnityAssertEqualString((const char*)("olleH"), (const char*)(result), (((void *)0)), (_U_UINT)23);

}



void test_reverse_empty(void)

{

 char test[] = "";

 char *result = str_reverse(test);

 if ((((result)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)30);;}

 UnityAssertEqualString((const char*)(""), (const char*)(result), (((void *)0)), (_U_UINT)31);

}



void test_reverse_len1(void)

{

 char test[] = "H";

 char *result = str_reverse(test);

 if ((((result)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)38);;}

 UnityAssertEqualString((const char*)("H"), (const char*)(result), (((void *)0)), (_U_UINT)39);

}



void test_reverse_len2(void)

{

 char test[] = "He";

 char *result = str_reverse(test);

 if ((((result)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)46);;}

 UnityAssertEqualString((const char*)("eH"), (const char*)(result), (((void *)0)), (_U_UINT)47);

}





void test_palindrome_null(void)

{

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((str_is_palindrome(((void *)0)))), (((void *)0)), (_U_UINT)53, UNITY_DISPLAY_STYLE_INT);

}



void test_palindrome_hello(void)

{

 char test[] = "Hello";

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((str_is_palindrome(test))), (((void *)0)), (_U_UINT)59, UNITY_DISPLAY_STYLE_INT);

}



void test_palindrome_racecar(void)

{

 char test[] = "racecar";

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((str_is_palindrome(test))), (((void *)0)), (_U_UINT)65, UNITY_DISPLAY_STYLE_INT);

}





void test_len_hello(void)

{

 char test[] = "Hello";

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((str_len(test))), (((void *)0)), (_U_UINT)72, UNITY_DISPLAY_STYLE_INT);

}



void test_len_empty(void)

{

 char test[] = "";

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((str_len(test))), (((void *)0)), (_U_UINT)78, UNITY_DISPLAY_STYLE_INT);

}



void test_len_null(void)

{

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((str_len(((void *)0)))), (((void *)0)), (_U_UINT)83, UNITY_DISPLAY_STYLE_INT);

}





void test_strchr_null(void)

{

 if ((((str_chr(((void *)0), 0))) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)89);;};

}



void test_strchr_empty(void)

{

 if ((((void *)0) == str_chr("", 'a'))) {} else {UnityFail( (" Expected TRUE Was FALSE"), (_U_UINT)(_U_UINT)94);;};

}



void test_strchr_double(void)

{

 char test[] = "Hello";

 char *expected = &(test[2]);

 if ((expected == str_chr(test, 'l'))) {} else {UnityFail( (" Expected TRUE Was FALSE"), (_U_UINT)(_U_UINT)101);;};

}



void test_strchr_last(void)

{

 char test[] = "Hello";

 char *expected = &(test[4]);

 if ((expected == str_chr(test, 'o'))) {} else {UnityFail( (" Expected TRUE Was FALSE"), (_U_UINT)(_U_UINT)108);;};

}



void test_strchr_first(void)

{

 char test[] = "Hello";

 char *expected = &(test[0]);

 if ((expected == str_chr(test, 'H'))) {} else {UnityFail( (" Expected TRUE Was FALSE"), (_U_UINT)(_U_UINT)115);;};

}



void test_strchr_odd(void)

{

 char test[] = "Hello";

 char *expected = &(test[1]);

 if ((expected == str_chr(test, 'e'))) {} else {UnityFail( (" Expected TRUE Was FALSE"), (_U_UINT)(_U_UINT)122);;};

}





void test_strrchr_null(void)

{

 if ((((str_rchr(((void *)0), 0))) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)128);;};

}



void test_strrchr_empty(void)

{

 if ((((void *)0) == str_rchr("", 'a'))) {} else {UnityFail( (" Expected TRUE Was FALSE"), (_U_UINT)(_U_UINT)133);;};

}



void test_strrchr_double(void)

{

 char test[] = "Hello";

 char *expected = &(test[3]);

 if ((expected == str_rchr(test, 'l'))) {} else {UnityFail( (" Expected TRUE Was FALSE"), (_U_UINT)(_U_UINT)140);;};

}



void test_strrchr_last(void)

{

 char test[] = "Hello";

 char *expected = &(test[4]);

 if ((expected == str_rchr(test, 'o'))) {} else {UnityFail( (" Expected TRUE Was FALSE"), (_U_UINT)(_U_UINT)147);;};

}



void test_strrchr_first(void)

{

 char test[] = "Hello";

 char *expected = &(test[0]);

 if ((expected == str_rchr(test, 'H'))) {} else {UnityFail( (" Expected TRUE Was FALSE"), (_U_UINT)(_U_UINT)154);;};

}



void test_strrchr_odd(void)

{

 char test[] = "Hello";

 char *expected = &(test[1]);

 if ((expected == str_rchr(test, 'e'))) {} else {UnityFail( (" Expected TRUE Was FALSE"), (_U_UINT)(_U_UINT)161);;};

}



void test_cpy_null(void)

{

 char test[6];

 if ((((str_cpy(((void *)0), ((void *)0)))) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)167);;};

 if ((((str_cpy(((void *)0), "Hello"))) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)168);;};

 if ((((str_cpy(test, ((void *)0)))) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)169);;};

}



void test_cpy_empty(void)

{

 char test[1];

 char *result = str_cpy(test, "");

 UnityAssertEqualString((const char*)(""), (const char*)(result), (((void *)0)), (_U_UINT)176);

}



void test_cpy_hello(void)

{

 char test[6];

 char *result = str_cpy(test, "Hello");

 UnityAssertEqualString((const char*)("Hello"), (const char*)(result), (((void *)0)), (_U_UINT)183);

}



void test_cat_null(void)

{

 char test[] = "Hello";

 if ((((str_cat(((void *)0), ((void *)0)))) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)189);;};

 if ((((str_cat(((void *)0), "Hello"))) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)190);;};

 if ((((str_cat(test, ((void *)0)))) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)191);;};

}



void test_cat_empty(void)

{

 char test1[] = "";

 char test2[] = "Hello";

 char test3[6];

 test3[0] = '\0';

 UnityAssertEqualString((const char*)("Hello"), (const char*)(str_cat(test2, "")), (((void *)0)), (_U_UINT)200);

 UnityAssertEqualString((const char*)("Hello"), (const char*)(str_cat(test3, "Hello")), (((void *)0)), (_U_UINT)201);

 UnityAssertEqualString((const char*)(""), (const char*)(str_cat(test1, "")), (((void *)0)), (_U_UINT)202);

}



void test_cat_hello(void)

{

 char test[11];

 test[0] = '\0';

 UnityAssertEqualString((const char*)("Hello"), (const char*)(str_cat(test, "Hello")), (((void *)0)), (_U_UINT)209);

 UnityAssertEqualString((const char*)("HelloHello"), (const char*)(str_cat(test, "Hello")), (((void *)0)), (_U_UINT)210);

}
