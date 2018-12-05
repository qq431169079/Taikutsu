#ifdef DEBUG
#include <stdio.h>
#endif

#include "enc.h"

static void toggle_obf(uint8_t id) {
	int i;
	struct t_val()
}

void enc_unlock(uint8_t id) {
	struct t_value *val = &table[id];

	uint8_t k1 = enc_key & 0xff, //0xff = 255 in hex
			k2 = (enc_key >> 8) & 0xff, //right shift by 8, & the calue of 255
			k3 = (enc_key >> 16) & 0xff, //right shift by 16, with a value of  255 
			k4 = (enc_key >> 24) & 0xff; //right shift by 24 with a value of 255

			int i;
			//increment one from the value length
			for(i = 0; i < val->val_len; i++) {
				////value of i xor operator to key integers
				val->val[i] ^= k1; 
				val->val[i] ^= k2;
				val->val[i] ^= k3;
				val->val[i] ^= k4;
			}


#ifdef DEBUG
	if(!val->locked) {
		printf("attmped to double check value\n");
		return;
	}
#endif


}