#include "src/include/classes/TBoss4Type1.h"
typedef struct Frame Frame;
typedef struct S_x22000_0 S_x22000_0;
typedef struct S_x78448_0 S_x78448_0;
struct Frame {
    Vector3 f00;
};
extern void call_8c3bdf60(Frame *, int);
extern void call_8c0a7608(void *, Frame *);
extern void call_8c1b3f88(TBoss4Type1 *);
extern void call_8c05fd7c(int, TBoss4Type1 *, void *, int, int);
void TBoss4Type1_update_step_8c1b4d80(TBoss4Type1 *o)
{
    Frame frame;
    int v3;
    int v1;
    int v2;
    char *v4;
    int v5;
    if (o->f390 != 4) {
        v1 = (int)0x3f8;
        v2 = (int)0x408;
        v3 = (int)0;
        while (4 > v3) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
            call_8c3bdf60((Frame *)((&frame)), (int)(v3 * 0xc + 0x8c326e38));
            v4 = (char *)v3;
            v5 = (int)((int)(v4) << 2);
            if (*(int *)((char *)((char *)((int)o + v1) + 0x0) + (v5)) != 0) {
                call_8c0a7608((void *)(*(S_x78448_0 **)((char *)((char *)((int)o + v1) + 0x0) + (v5))), (Frame *)((&frame)));
            }
            if (*(int *)((char *)((char *)((int)o + v2) + 0x0) + (v5)) != 0) {
                call_8c0a7608((void *)(*(S_x22000_0 **)((char *)((char *)((int)o + v2) + 0x0) + (v5))), (Frame *)((&frame)));
            }
            v3 = (int)(v3 + 1);
        }
        call_8c1b3f88(o);
        call_8c05fd7c(0x3000e, o, (void *)(&o->f3c), 0x40, 0);
    }
}
