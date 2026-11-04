#include "src/include/classes/TContainerAncient01.h"
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct Frame Frame;
typedef struct S_g8c46ed0c S_g8c46ed0c;
typedef struct TContainerAncient01_p84 TContainerAncient01_p84;
typedef struct S_vv2 S_vv2;
struct TContainerAncient01_p84 {
    char unknown0[0x4];
    short f04;
};
struct Frame {
    char f00;
    char unknown1[0x3];
};
struct S_vv2 {
    char f00;
};
extern S_g8c46ed0c *g_8c46ed0c;
extern void set_fields_8c12992c(void *);
extern void call_8c05406c(TContainerAncient01 *, Frame *);
float TContainerAncient01_v24_8c12942c(TContainerAncient01 *o)
{
    Frame frame;
    int v4;
    S_vv2 *v2;
    if ((unsigned int)o->f20 >= (unsigned int)0x1000) {
        set_fields_8c12992c((void *)o);
        if (o->f84 != 0) {
            if (o->f84 == 0) {
                v4 = (int)0;
            } else {
                if (o->f84->f04 < 0 || o->f84->f04 > 0xb9f) {
                    v4 = (int)0;
                    goto L_8c12947e;
                }
                *(SBlock4 *)&(&frame)->f00 = *(SBlock4 *)((char *)g_8c46ed0c + (o->f84->f04 << 2));
                v4 = (int)1;
            }
L_8c12947e:;
            if (v4 != 0) {
                *(short *)&(&frame)->f00 = 1;
                if (o->f84 != 0 && o->f84->f04 >= 0 && !(o->f84->f04 > 0xb9f)) {
                    *(SBlock4 *)&*(char *)((char *)((char *)g_8c46ed0c + 0x0) + (o->f84->f04 << 2)) = *(SBlock4 *)&(&frame)->f00;
                }
                call_8c05406c(o, (Frame *)((&frame)));
            }
        }
    }
    return 0.0f;
}
