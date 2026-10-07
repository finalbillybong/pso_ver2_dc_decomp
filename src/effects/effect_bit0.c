/* Provisional effect fields and call names; preserve raw bounds, widths and order. */
#include "src/include/effect.h"
void set_effect_bit0(Effect *e) { e->field_30|=1; }
void clear_effect_bit0(Effect *e) { e->field_30&=~1; }
