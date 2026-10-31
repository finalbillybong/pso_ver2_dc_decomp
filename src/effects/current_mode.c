#include "src/include/context_mode_record.h"

/* Name reflects current callers; the wider context-table role is provisional. */
int get_current_area_8c032b10(void) {
    int result;
    if (*(int *)0x8c510ba4)
        result = ((ContextModeRecord *)0x8c4e1950)[*(int *)0x8c44be04].mode;
    else result = *(int *)0x8c44be04;
    return result;
}
