#include "src/include/classes/TObjEneLappy.h"
extern int lookup_low_id(int);
extern float squared_distance_xyz(void *, void *);
extern void operation_8c0519c8(void *);
extern void play_se_8c05fbf8(int, void *, int, int);
void TObjEneLappy_v70_8c0511bc(TObjEneLappy *o)
{
    int t1;
    float t2;
    o->f34 &= -0x200001;
    if (((o->f390 & 2)) != 0) {
        o->f34 &= -0x240;
        return;
    }
    if (o->f30a != 4) {
        o->f30a = 4;
        o->ff0 = 6;
        t1 = lookup_low_id((int)(o->f1b6 & 0xffff));
        if (t1 != 0) {
            t2 = squared_distance_xyz((void *)(((char *)o + 0x3c)), (void *)(t1 + 0x3c));
            if (!(10000.0f > t2)) {
                o->f390 |= 2;
                operation_8c0519c8((void *)o);
            }
        }
        play_se_8c05fbf8(0x3000f, (void *)(((char *)o + 0x3c)), 0, 0);
    }
}
