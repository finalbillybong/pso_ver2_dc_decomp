#include "src/include/classes/TObjContainerNoItem.h"
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct Frame Frame;
typedef struct S_g8c46ed0c S_g8c46ed0c;
typedef struct TObjContainerBase_p84 TObjContainerBase_p84;
typedef struct S_vv2 S_vv2;
struct TObjContainerBase_p84 {
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
extern void call_8c05406c(TObjContainerNoItem *, Frame *);
static inline int get_entry(TObjContainerNoItem *o, SBlock4 *out)
{
    if (o->f84 == 0) {
        return 0;
    }
    if (o->f84->f04 < 0 || o->f84->f04 > 0xb9f) {
        return 0;
    }
    *out = *(SBlock4 *)((char *)g_8c46ed0c + (o->f84->f04 << 2));
    return 1;
}
static inline void set_entry(TObjContainerNoItem *o, SBlock4 *in)
{
    if (o->f84 != 0 && o->f84->f04 >= 0 && !(o->f84->f04 > 0xb9f)) {
        *(SBlock4 *)((char *)g_8c46ed0c + (o->f84->f04 << 2)) = *in;
    }
}
float TObjContainerNoItem_v24_8c084f64(TObjContainerNoItem *o)
{
    Frame frame;
    if ((unsigned int)o->f20 >= (unsigned int)0x1000 && o->f84 != 0) {
        if (get_entry(o, (SBlock4 *)&frame)) {
            *(short *)&(&frame)->f00 = 1;
            set_entry(o, (SBlock4 *)&frame);
            call_8c05406c(o, (Frame *)((&frame)));
        }
    }
    return 0.0f;
}
