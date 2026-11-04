#include "src/include/classes/TObjWarpBoss.h"
typedef struct TObjWarpBoss_p104 TObjWarpBoss_p104;
struct TObjWarpBoss_p104 {
    char unknown0[0x4];
    int f04;
};
extern int operation_8c03d338(void);
extern void operation_8c1e7e18(void *);
extern void call_8c1e8250(TObjWarpBoss *);
void TObjWarpBoss_update_8c1e7bb0(TObjWarpBoss *o)
{
    short v1;
    float v11;
    int t1;
    t1 = operation_8c03d338();
    if (t1 != 1) {
        if (((o->f112 & 1)) == 0 && o->f10e != o->f10c) {
            v1 = (short)-1;
            if (o->f110 != v1) {
                o->f110 = -1;
                operation_8c1e7e18((void *)o);
            }
            o->f10e = o->f10c;
            o->f110 = 0;
        }
        call_8c1e8250(o);
        operation_8c1e7e18((void *)o);
        if (o->f104 != 0) {
            o->ff4 += 4.0f;
            if (!(o->ff4 + 1.0f < (float)(unsigned int)o->f104->f04)) {
                o->ff4 = 0.0f;
            }
        }
    }
}
