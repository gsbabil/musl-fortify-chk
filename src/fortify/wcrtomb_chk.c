#include <wchar.h>
#include "locale_impl.h"
#include "fortify.h"

size_t __wcrtomb_chk(char *restrict s, wchar_t wc, mbstate_t *restrict st, size_t bn)
{
	if(bn < MB_CUR_MAX) __chk_fail();
	return wcrtomb(s, wc, st);
}
