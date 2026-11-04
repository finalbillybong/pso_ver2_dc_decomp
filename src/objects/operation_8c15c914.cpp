#include "src/include/classes/TOSensor.h"
typedef struct Frame Frame;
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    short f08;
    char f0a;
    char f0b;
};
extern "C" void operation_8c1130e8(void *);
extern "C" void call_8c15cab8(TOSensor *);
extern "C" void operation_8c0368a8(void *);
extern "C" void operation_8c15ca00(int);
extern "C" void TOSensor_v23_8c15c914(TOSensor *o)
{
    Frame frame;
    int t1;
    operation_8c1130e8((void *)o);
    if (o->f10c != 1) {
        o->v18();
        call_8c15cab8(o);
        t1 = o->v16();
        if (t1 != 1) {
            goto L_8c15c9ae;
        }
        o->v19();
        (&frame)->f06 = 0;
        (&frame)->f00 = 4;
        (&frame)->f01 = 2;
        (&frame)->f00 = 5;
        (&frame)->f01 = 3;
        (&frame)->f02 = o->f20;
        (&frame)->f04 = *(int *)0x8c418248;
        (&frame)->f08 = o->f100;
        (&frame)->f0a = *(int *)0x8c44be04;
        (&frame)->f0b = 1;
        operation_8c0368a8((void *)(&frame));
    } else {
        o->v17();
        operation_8c15ca00((int)o);
    }
L_8c15c9ae:;
    if ((o->f54.y + 100.0f) < o->f3c.y) {
        o->f04 |= 1;
    }
}
