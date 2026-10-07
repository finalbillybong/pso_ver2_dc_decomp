/* Provisional effect fields and call names; preserve raw bounds, widths and order. */
#include "src/include/effect.h"
void set_effect_bits(Effect *e,unsigned short bits) { e->field_30|=bits; }
void set_effect_words(Effect *e,int *v) { e->field_5c=v[0]; e->field_60=v[1]; e->field_64=v[2]; }
