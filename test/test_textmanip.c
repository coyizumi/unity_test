#include "unity.h"
#include "textmanip.h"

void setUp(void)
{
}

void tearDown(void)
{
}

// str_reverse tests ---------------------------------------------------------
void test_reverse_null(void)
{
    TEST_ASSERT_NULL(str_reverse(NULL));
}

void test_reverse_hello(void)
{
    char test[] = "Hello";
    char *result = str_reverse(test);
    TEST_ASSERT_NOT_NULL(result)
    TEST_ASSERT_EQUAL_STRING("olleH", result);
}

void test_reverse_empty(void)
{
    char test[] = "";
    char *result = str_reverse(test);
    TEST_ASSERT_NOT_NULL(result)
    TEST_ASSERT_EQUAL_STRING("", result);
}

void test_reverse_len1(void)
{
    char test[] = "H";
    char *result = str_reverse(test);
    TEST_ASSERT_NOT_NULL(result)
    TEST_ASSERT_EQUAL_STRING("H", result);
}

void test_reverse_len2(void)
{
    char test[] = "He";
    char *result = str_reverse(test);
    TEST_ASSERT_NOT_NULL(result)
    TEST_ASSERT_EQUAL_STRING("eH", result);
}

// str_palindrome tests ------------------------------------------------------
void test_palindrome_null(void)
{
    TEST_ASSERT_EQUAL_INT(0, str_is_palindrome(NULL));
}

void test_palindrome_hello(void)
{
    char test[] = "Hello";
    TEST_ASSERT_EQUAL_INT(0, str_is_palindrome(test));
}

void test_palindrome_racecar(void)
{
    char test[] = "racecar";
    TEST_ASSERT_EQUAL_INT(1, str_is_palindrome(test));
}

// str_len tests --------------------------------------------------------------
void test_len_hello(void)
{
    char test[] = "Hello";
    TEST_ASSERT_EQUAL_INT(5, str_len(test));
}

void test_len_empty(void)
{
    char test[] = "";
    TEST_ASSERT_EQUAL_INT(0, str_len(test));
}

void test_len_null(void)
{
    TEST_ASSERT_EQUAL_INT(0, str_len(NULL));
}

// str_chr tests --------------------------------------------------------------
void test_strchr_null(void)
{
    TEST_ASSERT_NULL(str_chr(NULL, 0));
}

void test_strchr_empty(void)
{
    TEST_ASSERT_TRUE(NULL == str_chr("", 'a'));
}

void test_strchr_double(void)
{
    char test[] = "Hello";
    char *expected = &(test[2]);
    TEST_ASSERT_TRUE(expected == str_chr(test, 'l'));
}

void test_strchr_last(void)
{
    char test[] = "Hello";
    char *expected = &(test[4]);
    TEST_ASSERT_TRUE(expected == str_chr(test, 'o'));
}

void test_strchr_first(void)
{
    char test[] = "Hello";
    char *expected = &(test[0]);
    TEST_ASSERT_TRUE(expected == str_chr(test, 'H'));
}

void test_strchr_odd(void)
{
    char test[] = "Hello";
    char *expected = &(test[1]);
    TEST_ASSERT_TRUE(expected == str_chr(test, 'e'));
}

// str_rchr tests -------------------------------------------------------------
void test_strrchr_null(void)
{
    TEST_ASSERT_NULL(str_rchr(NULL, 0));
}

void test_strrchr_empty(void)
{
    TEST_ASSERT_TRUE(NULL == str_rchr("", 'a'));
}

void test_strrchr_double(void)
{
    char test[] = "Hello";
    char *expected = &(test[3]);
    TEST_ASSERT_TRUE(expected == str_rchr(test, 'l'));
}

void test_strrchr_last(void)
{
    char test[] = "Hello";
    char *expected = &(test[4]);
    TEST_ASSERT_TRUE(expected == str_rchr(test, 'o'));
}

void test_strrchr_first(void)
{
    char test[] = "Hello";
    char *expected = &(test[0]);
    TEST_ASSERT_TRUE(expected == str_rchr(test, 'H'));
}

void test_strrchr_odd(void)
{
    char test[] = "Hello";
    char *expected = &(test[1]);
    TEST_ASSERT_TRUE(expected == str_rchr(test, 'e'));
}

// str_cpy tests --------------------------------------------------------------
void test_cpy_null(void)
{
    char test[6];
    TEST_ASSERT_NULL(str_cpy(NULL, NULL));
    TEST_ASSERT_NULL(str_cpy(NULL, "Hello"));
    TEST_ASSERT_NULL(str_cpy(test, NULL));
}

void test_cpy_empty(void)
{
    char test[1];
    char *result = str_cpy(test, "");
    TEST_ASSERT_EQUAL_STRING("", result);
}

void test_cpy_hello(void)
{
    char test[6];
    char *result = str_cpy(test, "Hello");
    TEST_ASSERT_EQUAL_STRING("Hello", result);
}

void test_cat_null(void)
{
    char test[] = "Hello";
    TEST_ASSERT_NULL(str_cat(NULL, NULL));
    TEST_ASSERT_NULL(str_cat(NULL, "Hello"));
    TEST_ASSERT_NULL(str_cat(test, NULL));
}

void test_cat_empty(void)
{
    char test1[] = "";
    char test2[] = "Hello";
    char test3[6];
    test3[0] = '\0';
    TEST_ASSERT_EQUAL_STRING("Hello", str_cat(test2, ""));
    TEST_ASSERT_EQUAL_STRING("Hello", str_cat(test3, "Hello"));
    TEST_ASSERT_EQUAL_STRING("", str_cat(test1, ""));
}

void test_cat_hello(void)
{
    char test[11];
    test[0] = '\0';
    TEST_ASSERT_EQUAL_STRING("Hello", str_cat(test, "Hello"));
    TEST_ASSERT_EQUAL_STRING("HelloHello", str_cat(test, "Hello"));
}