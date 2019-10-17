#ifndef _PUTCHAR_H
#define _PUTCHAR_H
int _putchar(char c);
#endif

#ifndef _MLCCHK_H
#define _MLCCHK_H
void *malloc_checked(unsigned int b);
#endif

#ifndef _STRCAT_H
#define _STRCAT_H
char *string_nconcat(char *s1, char *s2, unsigned int n);
#endif

#ifndef _CALLOC_H
#define _CALLOC_H
void *_calloc(unsigned int nmemb, unsigned int size);
#endif

#ifndef _ARRRAN_H
#define _ARRRAN_H
int *array_range(int min, int max);
#endif
