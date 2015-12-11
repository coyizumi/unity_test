#ifndef textmanip_H
#define textmanip_H

char *str_reverse (char *str);

int str_is_palindrome(const char *str);

int str_len(const char *str);

char *str_chr(const char *str, int c);

char *str_rchr(const char *str, int c);

char *str_cpy(char *dest, const char *src);

char *str_cat(char *dest, const char *src);

#endif // textmanip_H
