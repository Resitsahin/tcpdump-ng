#include "include/log.h"
#include <stdarg.h>
#include <stdio.h>

void log_info( const char *format, ...)
{
	va_list arglist;
	va_start(arglist, format);
	printf("%s", "INFO: ");
	vprintf(format, arglist);
	printf("\n");
	va_end(arglist);
}

