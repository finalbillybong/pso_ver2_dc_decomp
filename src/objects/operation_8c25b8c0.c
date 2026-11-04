#include "src/include/types/TimerRecord.h"
typedef struct TimerRecord_p2c TimerRecord_p2c;
typedef struct TimerRecord_p30 TimerRecord_p30;
struct TimerRecord_p30 {
    char unknown0[0x80];
    unsigned short f80;
};
extern int operation_8c1571f4(void *);
extern void request_resource_release(void *);
void operation_8c25b8c0(TimerRecord *o)
{
    int t1;
    if (o->f30 != 0) {
        if (((o->f30->f80 & 0xffff & 2)) != 0) {
            t1 = operation_8c1571f4((void *)(o->f30));
            if (t1 != 0) {
                if (t1 == 1) {
                    goto L_8c25b91e;
                }
                return;
            }
            if (o->f2c != 0) {
                request_resource_release((void *)(o->f2c));
                o->f2c = (TimerRecord_p2c *)0;
            }
            if (o->f30 != 0) {
                request_resource_release((void *)(o->f30));
                o->f30 = (TimerRecord_p30 *)0;
            }
            o->ticks = 0;
            o->f50 = 1;
            o->f20 = 9;
            return;
L_8c25b91e:;
            if (o->f2c != 0) {
                request_resource_release((void *)(o->f2c));
                o->f2c = (TimerRecord_p2c *)0;
            }
            if (o->f30 != 0) {
                request_resource_release((void *)(o->f30));
                o->f30 = (TimerRecord_p30 *)0;
            }
            o->ticks = 0;
            o->f50 = 1;
            o->f20 = 0xa;
            return;
        }
        if (((o->f30->f80 & 0xffff & 4)) == 0) {
            return;
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (TimerRecord_p2c *)0;
        }
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (TimerRecord_p30 *)0;
        }
        o->ticks = 0;
        o->f50 = 1;
        o->f20 = 0xa;
        return;
    }
    if (o->f2c != 0) {
        request_resource_release((void *)(o->f2c));
        o->f2c = (TimerRecord_p2c *)0;
    }
    if (o->f30 != 0) {
        request_resource_release((void *)(o->f30));
        o->f30 = (TimerRecord_p30 *)0;
    }
    o->ticks = 0;
    o->f50 = 1;
    o->f20 = 0xa;
}
