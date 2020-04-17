#include "atomic.h"
#include "fortify.h"

_Noreturn void __chk_fail(void)
{
	a_crash();
	// make gcc happy
	abort();
}
