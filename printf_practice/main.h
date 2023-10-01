fndef MAIN_H
#define MAIN_H

/* C standard library header file */
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/* function prototype */
int _putchar(char c);
int _printf(const char *format, ...);
int _print_str(char *s);
int _print_int(int num);
int _print_bin(unsigned int n);
int _print_unsigned(unsigned int num);

#endif /* MAIN_H */
