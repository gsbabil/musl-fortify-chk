#include <stdlib.h>
#include "locale_impl.h"
#include "fortify.h"

int __wctomb_chk(char *s, wchar_t wc, size_t sn)
{
	if(sn < MB_CUR_MAX) __chk_fail();
	return wctomb(s, wc);
}
