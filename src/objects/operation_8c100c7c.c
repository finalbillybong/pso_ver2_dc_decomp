#include "src/include/classes/TObjEnvSound.h"
typedef struct TObjEnvSound_p98 TObjEnvSound_p98;
typedef struct Arg0_9c Arg0_9c;
extern int operation_8c100e14(int, float);
extern void call_8c05fd7c(void *, TObjEnvSound *, void *, int, int);
void TObjEnvSound_update_8c100c7c(TObjEnvSound *o)
{
    int t1;
    t1 = operation_8c100e14((int)o, (float)(o->f94 * o->f94));
    if (t1 != 0 && o->fa0 != 0) {
        if (o->fa0 != 1) {
            if (o->fa0 != 2) {
                return;
            }
        } else {
            call_8c05fd7c((void *)(o->f9c), o, (void *)(((char *)o + 0x3c)), 0, 0);
            return;
        }
        call_8c05fd7c((void *)(o->f9c), o, (void *)(((char *)o + 0x3c)), (int)(o->f98), 0);
    }
}
