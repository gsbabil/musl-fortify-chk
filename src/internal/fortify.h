#include "libc.h"

_Noreturn void __chk_fail(void);

void __vsyslog(int, const char *, va_list);
