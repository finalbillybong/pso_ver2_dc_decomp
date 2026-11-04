#include "src/include/classes/TItemWpnChineseFlypan2.h"
typedef struct TItemWpnChineseFlypan2_p13c TItemWpnChineseFlypan2_p13c;
extern void call_8c075730(TItemWpnChineseFlypan2 *, void *, int);
void TItemWpnChineseFlypan2_v52_8c23b3f0(TItemWpnChineseFlypan2 *o)
{
    char *v1;
    v1 = (char *)o->f38;
    call_8c075730(o, (void *)(o->f13c), 0x30);
    o->f38 = (int)(o->f1d4);
    call_8c075730(o, (void *)(o->f13c), 0x23);
    o->f38 = (int)(v1);
}
