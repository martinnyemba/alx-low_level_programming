#ifndef MAIN_H
#define MAIN_H

/* prototype for the puchar function */
int _putchar(char c);

/* takes a pointer to an int */
void reset_to_98(int *n);

/* swaps the values of two integers */
void swap_int(int *a, int *b);

/* returns the length of a string */
int _strlen(char *s);

/* prints a string, followed by a new line, to stdout */
void _puts(char *str);

/* prints a string, in reverse, followed by a new line */
void print_rev(char *s);

/* prints every other character of a string */
void puts2(char *str);

void puts_half(char *str);

void print_array(int *a, int n);

char *_strcpy(char *dest, char *src);

int _atoi(char *s);

#endif
