#include "src/include/classes/TObjEneSaver.h"
typedef struct S_g8c2e72d8 S_g8c2e72d8;
extern int operation_02c350(void *);
extern void call_8c01c9e8(TObjEneSaver *, short);
extern void operation_8c1e8e60(int, int, int);
void operation_8c1ef968(TObjEneSaver *o)
{
    short v1;
    int v2;
    int t1;
    v1 = (short)o->f30c;
    switch (v1) {
    case 0:
        if (!(0.0f > (o->f180 -= 1.0f))) {
            return;
        }
        o->f30c = 1;
        v2 = (int)0;
        if (((o->f34 & 0x100000)) != 0) {
            v2 = (int)1;
        }
        t1 = operation_02c350((void *)o);
        v1 = *(short *)((char *)((char *)*(S_g8c2e72d8 **)((char *)0x8c2e72d8 + (v2 << 2)) + 0x0) + ((short)t1 << 1));
        o->fe8 &= -5;
        o->fe8 |= 1;
        call_8c01c9e8(o, v1);
        o->fe8 = (unsigned int)o->fe8 >> 1 << 1;
        o->fe8 |= 0x40;
        o->f180 = 24.0f;
        return;
    case 1:
        if (0.0f > (o->f180 -= 1.0f)) {
            o->fe8 &= -0x41;
            operation_8c1e8e60((int)o, 1, 0);
        }
    }
}
