#include "src/include/effect_access_views.h"
/* Preserve the zero-index guard and nullable entry; other modes do nothing. */
void reset_effect_table_state(void)
{
    unsigned char i = *(unsigned char *)0x8c46efc8;
    if (!i) {
        EffectEntryState *entry = *(EffectEntryState **)
            ((char *)0x8c3032d8 + ((unsigned int)i << 2));
        if (entry)
            entry->state = 0;
    }
}
