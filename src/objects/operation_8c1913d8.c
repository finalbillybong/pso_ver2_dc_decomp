#include "src/include/classes/TWindowSubMag.h"
typedef struct Frame Frame;
typedef struct Arg0_2c Arg0_2c;
struct Frame {
    char unknown0[0x10];
};
extern void initialize_fields_8c207358(void *);
extern void call_8c1c8ce4(void *, Frame *);
extern int call_8c207378(Frame *, int);
int operation_8c1913d8(TWindowSubMag *o)
{
    Frame frame;
    int v1;
    int v2;
    int t1;
    initialize_fields_8c207358((void *)(&frame));
    call_8c1c8ce4((void *)(o->f2c), (Frame *)((&frame)));
    v1 = (int)0;
    v2 = (int)-1;
    while (3 > v1) {
        t1 = call_8c207378((Frame *)((&frame)), v1);
        if (t1 == v2) {
            return v1;
        }
        v1 = (int)(v1 + 1);
    }
    return (int)(v1);
}
