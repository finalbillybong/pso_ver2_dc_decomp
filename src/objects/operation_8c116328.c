#include "src/include/classes/TFogEditor.h"
typedef struct Arg0_548 Arg0_548;
extern void release_render_mode_four_8c03ce90(void);
extern void call_8c122494(void *, void *);
void TFogEditor_v07_8c116328(TFogEditor *o)
{
    release_render_mode_four_8c03ce90();
    *(char *)0x8c4d82a0 = 0;
    call_8c122494((void *)(o->field548), (void *)(((char *)o + 0x3c)));
}
