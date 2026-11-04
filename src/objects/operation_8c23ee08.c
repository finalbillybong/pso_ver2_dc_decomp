#include "src/include/classes/TItemWpnRabbitCane.h"
typedef struct TItemWpnRabbitCane_p13c TItemWpnRabbitCane_p13c;
typedef struct Arg0_13c_348 Arg0_13c_348;
struct TItemWpnRabbitCane_p13c {
    char unknown0[0x348];
    Arg0_13c_348 *f348;
};
extern void call_8c3843a8(void *);
extern void operation_8c074ce4(void);
void TItemWpnRabbitCane_v57_8c23ee08(TItemWpnRabbitCane *o)
{
    char *v1;
    v1 = (char *)*(int *)0x8c4689f0;
    call_8c3843a8((void *)(&*(int *)((char *)((char *)o->f13c->f348 + 0x0) + ((int)(v1) << 6))));
    if ((int)(v1) == 9) {
        operation_8c074ce4();
    }
}
