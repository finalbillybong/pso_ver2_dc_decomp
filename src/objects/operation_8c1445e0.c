#include "src/include/classes/TBoss2DeRolLe.h"
extern void operation_8c145184(void *, float, float);
extern void play_se_wrapper_2_8c1452f8(int, int);
extern void operation_8c144bf8(void *);
extern void reset_segments_8c05a124(void *);
void TBoss2DeRolLe_v70_8c1445e0(TBoss2DeRolLe *o)
{
    int v10;
    v10 = (int)(o->f198 - o->f330);
    if (((o->f3dc & 8)) != 0) {
        o->f6cc -= v10;
        operation_8c145184((void *)((int)o->fdc + 0x1c), 2.0f, 8.0f);
        play_se_wrapper_2_8c1452f8(0x3000f, (int)(((char *)o + 0x538)));
    } else {
        *(int *)((char *)o + 0x6d0) -= v10;
        if (!(o->f6d0 >= 0)) {
            o->f6d0 = 0;
            operation_8c144bf8((void *)o);
        }
    }
    o->f330 = o->f198;
    reset_segments_8c05a124((void *)o);
}
