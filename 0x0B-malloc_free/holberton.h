#ifndef _PUTCHAR_H
#define _PUTCHAR_H
int _putchar(char c);
#endif

#ifndef _CARRAY_H
#define _CARRAY_H
char *create_array(unsigned int size, char c);
#endif

#ifndef _STDRUP_H
#define _STDRUP_H
char *_strdup(char *str);
#endif


#ifndef _STR_CONCAT_H
#define _STR_CONCAT_H
char *str_concat(char *s1, char *s2);
#endif

#ifndef _AGRID_H
#define _AGRID_H
int **alloc_grid(int width, int height);
#endif

#ifndef _FGRID_H
#define _FGRID_H
void free_grid(int **grid, int height);
#endif

#ifndef _ARGSTOSTR_H
#define _ARGSTOSTR_H
char *argstostr(int ac, char **av);
#endif
