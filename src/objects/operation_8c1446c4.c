#include "src/include/classes/TBoss2DeRolLe.h"
typedef struct Block24 {
    int words[6];
} Block24;
typedef struct Frame Frame;
typedef struct S_vv1 S_vv1;
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    Vector3 f18;
};
struct S_vv1 {
    Vector3 f00;
};
extern void call_8c05afe0(TBoss2DeRolLe *, Frame *);
void TBoss2DeRolLe_v94_8c1446c4(TBoss2DeRolLe *o)
{
    Frame frame;
    S_vv1 *v1;
    v1 = (S_vv1 *)((char *)o + 0x460);
    frame.f00 = o->f460;
    frame.f0c = o->f520;
    frame.f18 = o->f52c;
    call_8c05afe0(o, (Frame *)((&frame)));
}
