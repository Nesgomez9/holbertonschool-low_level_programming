#ifndef _PUTCHAR_H
#define _PUTCHAR_H
int _putchar(char c);
#endif

#ifndef _STRCAT_H
#define _STRCAT_H
char *_strcat(char *dest, char *src);
#endif

#ifndef _STRNCAT_H
#define _STRNCAT_H
char *_strncat(char *dest, char *src, int n);
#endif


#ifndef _STRNCPY_H
#define _STRNCPY_H
char *_strncpy(char *dest, char *src, int n);
#endif

#ifndef _STRNCMP_H
#define _STRNCMP_H
int _strcmp(char *s1, char *s2);
#endif

#ifndef _RARRAY_H
#define _RARRAY_H
void reverse_array(int *a, int n);
#endif

#ifndef _STOUPPER_H
#define _STOUPPER_H
char *string_toupper(char *s);
#endif

#ifndef _CSTRING_H
#define _CSTRING_H
char *cap_string(char *s);
#endif

#ifndef _LEET_H
#define _LEET_H
char *leet(char *s);
#endif

#ifndef _ROOT13_H
#define _ROOT13_H
char *rot13(char *s);
#endif

#ifndef _PNUMBER_H
#define _PNUMBER_H
void print_number(int n);
#endif
