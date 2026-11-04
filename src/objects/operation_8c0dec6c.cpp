#include "src/include/classes/TWindowFukidasi.h"
typedef struct TWindowFukidasi_p94 TWindowFukidasi_p94;
extern "C" void restore_render_state(void);
extern "C" void call_8c0decf4(TWindowFukidasi *, int, void *);
extern "C" void call_8c0df1ac(TWindowFukidasi *, int, void *);
extern "C" void call_8c0df3e0(TWindowFukidasi *, int, void *);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void backup_render_state(void);
extern "C" void TWindowFukidasi_render_8c0dec6c(TWindowFukidasi *o)
{
    int t1;
    restore_render_state();
    t1 = o->v5();
    call_8c0decf4(o, t1, (void *)(o->f94));
    call_8c0df1ac(o, t1, (void *)(o->f94));
    if (((o->f81 & 4)) != 0) {
        call_8c0df3e0(o, t1, (void *)(o->f94));
        draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
    }
    backup_render_state();
}
