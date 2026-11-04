#include "src/include/classes/TItemWpnFireWand.h"
typedef struct S_g8c44be9c S_g8c44be9c;
extern void TItemEffFireWand_create_8c23cf18(int, int, int, int);
void TItemWpnFireWand_v53_8c23cda8(TItemWpnFireWand *o)
{
    int v1;
    v1 = (int)*(int *)0x8c44be04;
    if (o->f234 != v1 && o->f38 != 0) {
        o->f234 = (int)(v1);
        if (v1 != 0 && v1 != 0xf) {
            TItemEffFireWand_create_8c23cf18((int)(*(S_g8c44be9c **)0x8c44be9c), (int)o, 1, 0x1ae);
            TItemEffFireWand_create_8c23cf18((int)(*(S_g8c44be9c **)0x8c44be9c), (int)o, 2, 0x1ae);
        }
    }
}
