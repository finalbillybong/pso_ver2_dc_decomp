#include "src/include/classes/TObjFogCollision.h"
typedef struct S_g8c418248 S_g8c418248;
typedef struct Arg0_88 Arg0_88;
extern int lookup_low_id(int);
extern float squared_distance_xz(void *, void *);
extern void call_8c1373a0(void *, int);
void TObjFogCollision_update_8c136854(TObjFogCollision *o)
{
    float v1;
    int v8;
    int v13;
    int v21;
    int t1;
    float t2;
    if (o->f98 > 0) {
        o->f98 -= 1;
        v8 = (int)0;
    } else {
        t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
        if (t1 != 0) {
            v1 = (float)o->f6c;
            v1 = (float)(v1 * v1);
            t2 = squared_distance_xz((void *)(((char *)o + 0x3c)), (void *)(t1 + 0x3c));
            if (v1 > t2) {
                v13 = (int)1;
                goto L_8c1368a8;
            }
            if (t2 > (v1 + 2500.0f)) {
                o->f98 = 0x3c;
            }
        }
        v8 = (int)0;
    }
    v13 = (int)v8;
L_8c1368a8:;
    if (v13 != 0) {
        v21 = (int)(o->f8c == 0);
        call_8c1373a0((void *)(o->f88), v21);
    }
}
