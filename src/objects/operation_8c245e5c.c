#include "src/include/classes/TEffStarLight2D.h"
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct Frame {
    float f00;
    float f04;
    char unknown8[0x8];
    float f10;
};
extern void call_8c3be280(int, void *, void *);
extern void project_point_to_screen_8c38ad50(int, void *, Frame *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TEffStarLightChild_ctor_8c245a9c(int, void *, void *, TEffStarLight2D *, float, float);
void TEffStarLight2D_update_8c245e5c(TEffStarLight2D *o)
{
    Frame frame;
    int t1;
    call_8c3be280(0, (void *)(((char *)o + 0x30)), (void *)(((char *)(&frame) + 0x8)));
    if (!(0.0f > (&frame)->f10)) {
        project_point_to_screen_8c38ad50(0, (void *)(((char *)o + 0x30)), (Frame *)((&frame)));
        if (!(-100.0f > (&frame)->f00) && !((&frame)->f00 > 740.0f) && !(-100.0f > (&frame)->f04) && !((&frame)->f04 > 580.0f)) {
            o->f28 = o->f20;
            o->f2c = o->f24;
            o->f20 = (&frame)->f00;
            o->f24 = (&frame)->f04;
            if (!(1.0f > ((o->f20 - o->f28) * (o->f20 - o->f28) + (o->f24 - o->f2c) * (o->f24 - o->f2c)))) {
                t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x34);
                if (t1 != 0) {
                    TEffStarLightChild_ctor_8c245a9c(t1, (void *)(&o->f28), (void *)(&o->f20), o, o->f3c, o->f40);
                }
            }
        }
    }
}
