#include "src/include/classes/TWindowDD_WS_String.h"
typedef struct S_c0 S_c0;
typedef struct Arg0_68 Arg0_68;
struct S_c0 {
    char unknown0[0x14];
    float f14;
    char unknown18[0x18];
    int f30;
};
extern "C" void call_8c20b098(TWindowDD_WS_String *, S_c0 *);
extern "C" void call_8c20b284(TWindowDD_WS_String *, S_c0 *, void *, float);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void TWindowDD_WS_String_render_8c215b90(TWindowDD_WS_String *o)
{
    S_c0 *t1;
    t1 = (S_c0 *)o->v5();
    call_8c20b098(o, t1);
    if (t1->f30 >= 0) {
        call_8c20b284(o, t1, (void *)(o->f68), 0.0f);
    }
    t1->f14 += 1.0f;
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
}
