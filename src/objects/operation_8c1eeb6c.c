#include "src/include/classes/TObjEneSaver.h"
extern int check_range_8c01cf68(void *, float);
extern void operation_8c02a764(int, int);
extern int operation_02c350(void *);
extern void operation_8c0259f8(void *);
extern void call_8c025c50(TObjEneSaver *, void *);
void operation_8c1eeb6c(TObjEneSaver *o)
{
    int t1;
    int t2;
    switch (o->f30c) {
    case 2:
        break;
    case 0:
        t1 = check_range_8c01cf68((void *)o, 10.0f);
        if (t1 != 0) {
            operation_8c02a764((int)o, 0x14);
        }
        if (((o->fe8 & 0x10)) == 0) {
            goto L_8c1eebea;
        }
        o->f30c = 1;
        o->f180 = 30.0f;
        break;
    case 1:
        if (0.0f > (o->f180 -= 1.0f)) {
            o->f30c = 2;
            t2 = operation_02c350((void *)o);
            o->ff0 = *(short *)((char *)0x8c2e7450 + ((short)t2 << 1));
        }
    }
L_8c1eebea:;
    operation_8c0259f8((void *)o);
    call_8c025c50(o, (void *)(((char *)o + 0x318)));
}
