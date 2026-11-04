#include "src/include/classes/TWindowMakeTeam.h"
typedef struct Frame Frame;
typedef struct S_vv1 S_vv1;
struct Frame {
    int f00;
};
struct S_vv1 {
    unsigned char f00;
    char f01;
    char f02;
    char f03;
};
void operation_8c0106f8(TWindowMakeTeam *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    (&frame)->f00 = a1;
    v1 = (S_vv1 *)(&frame);
    o->f20 = v1->f00;
    o->f21 = v1->f01;
    o->f22 = v1->f02;
    o->f23 = v1->f03;
}
