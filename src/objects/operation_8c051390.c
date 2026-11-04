#include "src/include/classes/TObjEneLappy.h"
extern void play_se_8c05fbf8(int, void *, int, int);
extern void call_8c0129e8(TObjEneLappy *);
extern void call_8c012884(TObjEneLappy *);
extern void operation_8c0519c8(void *);
void TObjEneLappy_v71_8c051390(TObjEneLappy *o)
{
    short v1;
    o->f34 &= -0x40;
    v1 = (short)o->f390;
    if ((((short)v1 & 2)) != 0) {
        if ((((short)v1 & 4)) == 0) {
            o->f390 = v1 | 4;
            play_se_8c05fbf8(0x30013, (void *)(((char *)o + 0x3c)), 0, 0);
            call_8c0129e8(o);
            o->ff0 = 8;
        }
        return;
    }
    if (o->f30a != 5) {
        o->f30a = 5;
        o->ff0 = 7;
        if (((o->f390 & 0x10)) == 0) {
            play_se_8c05fbf8(0x30010, (void *)(((char *)o + 0x3c)), 0, 0);
            call_8c012884(o);
            operation_8c0519c8((void *)o);
        }
        o->f39c = 0;
    }
}
