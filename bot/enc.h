#pragma "once"
#include "includes.h"
struct t_value {
	char *val;
	uint16_t val_len;
#ifdef DEBUG
	BOOL locked;
#endif
}