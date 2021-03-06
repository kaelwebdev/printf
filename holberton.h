#ifndef _FL_HOLBERTON
#define _FL_HOLBERTON
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
* struct manager - function manager
* Description: obj of type manager
* @cs: conversion specifier
* @f: function related
*/
typedef struct manager
{
	char cs;
	int (*f)(va_list);
} managerF;
int _printf(const char *format, ...);
int (*f_controller(char cs))(va_list);
int _putchar(char c);
int f_char(va_list vl);
int f_string(va_list vl);
int f_int(va_list vl);
int f_bin(va_list vl);
int fe_1(va_list vl);
int fe_2(va_list vl);
#endif
