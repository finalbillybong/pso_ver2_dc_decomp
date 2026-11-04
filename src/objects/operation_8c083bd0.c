#include "src/include/classes/TObjContainerIdo.h"
typedef struct Frame Frame;
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
    float f0c;
    float f10;
};
extern char g_8c46ee84[];
int TObjContainerIdo_v11_8c083bd0(TObjContainerIdo *o, float f0, float f1)
{
    Frame frame;
    float t1;
    float t2;
    ((void (*)(int, void *, void *))0x8c3be280)(0, ((char *)o + 0xf8), &(&frame)->f08);
    t1 = ((float (*)(void *, int))0x8c03f074)(&o->f3c.x, *(int *)0x8c46ee80 + 0x90);
    if ((f1 * f1) > t1) {
        return 1;
    }
    if (0.0f > ((&frame)->f10 + f1 / 2.0f)) {
        return 0;
    }
    t2 = ((float (*)(void *))0x8c041d40)(&(&frame)->f08);
    if (t2 > f0) {
        return 0;
    }
    if (0.0f > (&frame)->f08) {
        (&frame)->f08 = *(float *)(g_8c46ee84 + 0x28) * f1 + o->f3c.x;
        (&frame)->f0c = *(float *)(g_8c46ee84 + 0x2c) * f1 + o->f3c.y;
        (&frame)->f10 = *(float *)(g_8c46ee84 + 0x30) * f1 + o->f3c.z;
        ((void (*)(int, void *, Frame *))0x8c38ad50)(0, &(&frame)->f08, (&frame));
        if (0.0f > (&frame)->f00) {
            return 0;
        }
    } else {
        (&frame)->f08 = o->f3c.x - *(float *)(g_8c46ee84 + 0x28) * f1;
        (&frame)->f0c = o->f3c.y - *(float *)(g_8c46ee84 + 0x2c) * f1;
        (&frame)->f10 = o->f3c.z - *(float *)(g_8c46ee84 + 0x30) * f1;
        ((void (*)(int, void *, Frame *))0x8c38ad50)(0, &(&frame)->f08, (&frame));
        if ((&frame)->f00 > 640.0f) {
            return 0;
        }
    }
    return 1;
}
