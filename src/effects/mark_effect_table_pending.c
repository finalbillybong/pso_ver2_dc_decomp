#include "src/include/effect_view.h"
/* Preserve the zero-index guard and nullable entry; other modes do nothing. */
void mark_effect_table_pending(void)
{
    unsigned char i = *(unsigned char *)0x8c46efc8;
    if (!i) {
        EffectTableEntry *entry = *(EffectTableEntry **)
            ((char *)0x8c3032d8 + ((unsigned int)i << 2));
        if (entry)
            entry->pending = 1;
    }
}
