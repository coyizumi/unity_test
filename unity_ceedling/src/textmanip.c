#include <stdlib.h>
#include "textmanip.h"

char *str_reverse(char *str)
{
    if (str == NULL)
        return NULL;
    char *start = str;
    char *end = start;
    // Move end to end of string
    while (*end) 
        end++;
    // Move end one back so it doesn't point to null plug
    end--;
    while (start < end)
    {
        char tmp = *start;
        *start = *end;
        *end = tmp;
        start++; end--;
    }
    return str;
}

int str_is_palindrome(const char *str)
{
    if (str == NULL)
        return 0;
    const char *start = str;
    const char *end = start;

    while (*end)
        end++;
    end--;
    while (start < end)
    {
        if (!(*start == *end))
            return 0;
        start++; end--;
    }
    return 1;
}

int str_len(const char *str)
{
    if (str == NULL)
        return 0;
    int len = 0;
    while (*str)
    {
        len++; str++;
    }
    return len;
}

char *str_chr(const char *str, int c)
{
    if (str == NULL)
        return NULL;
    while (*str) {
        if (*str == (char)c)
            return (char *)str;
        str++;
    }
    return NULL;
}

char *str_rchr(const char *str, int c)
{
    if (str == NULL)
        return NULL;
    char *index = NULL;
    while (*str) {
        if (*str == (char)c)
            index = (char *) str;
        str++;
    }
    return index;
}

char *str_cpy(char *dest, const char *src)
{
    if (dest == NULL || src == NULL)
        return NULL;
    char *start = dest;
    while (*dest++ = *src++);
    return start;
}

char *str_cat(char *dest, const char *src)
{
    if (dest == NULL || src == NULL)
        return NULL;
    char *start = dest;
    while (*dest)
        dest++;
    while (*dest++ = *src++);
    return start;
}