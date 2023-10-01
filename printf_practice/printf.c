#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...) {
    va_list print_format;
    va_start(print_format, format);
    
    int char_counter = 0; // Count of printed characters
    
    while (*format) {
        if (*format == '%') {
            format++; // Move past the '%'
            switch (*format) {
                case 'c': {
                    char c = va_arg(print_format, int); // char gets promoted to int when passed to va_arg
                    putchar(c);
                    char_counter++;
                    break;
                }
                case 's': {
                    char *s = va_arg(print_format, char *);
                    while (*s) {
                        putchar(*s);
                        s++;
                        char_counter++;
                    }
                    break;
                }
                case '%': {
                    putchar('%');
                    char_counter++;
                    break;
                }
                default:
                    // Unsupported specifier, ignore
                    break;
            }
        } else {
            putchar(*format);
            char_counter++;
        }
        
        format++;
    }
    
    va_end(print_format);
    return char_counter;
}

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%%r]\n");
    printf("Unknown:[%%r]\n");
    return (0);
}

