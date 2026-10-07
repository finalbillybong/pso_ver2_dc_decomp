/* Provisional effect fields and call names; preserve raw bounds, widths and order. */
#include "src/include/effect.h"
void reset_effect_by_index(Effect *e,int index) {
 e->field_20=0.0f; e->field_24=0; e->field_28=1.0f;
 if(index<*(int *)0x8c303c10) e->resource=*(unsigned char **)0x8c46f100+index*0x98;
 else e->resource=0;
}
