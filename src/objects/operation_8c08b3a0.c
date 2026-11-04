#include "src/include/classes/TObjEZBoneRotPlayer.h"
typedef struct TObjEZBoneRotPlayer_p20 TObjEZBoneRotPlayer_p20;
typedef struct TObjEZBoneRotPlayer_p24 TObjEZBoneRotPlayer_p24;
struct TObjEZBoneRotPlayer_p24 {
    char unknown0[0x10];
    int f10;
};
extern void call_8c08b3cc(TObjEZBoneRotPlayer *, void *);
void operation_8c08b3a0(TObjEZBoneRotPlayer *o)
{
    o->f8c = 0;
    o->f90 = o->f24->f10;
    o->f94 = (int)(((char *)o + 0x28));
    call_8c08b3cc(o, (void *)(o->f20));
}
