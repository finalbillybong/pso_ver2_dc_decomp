#include "src/include/classes/TObjEneMe1Canadin.h"
typedef struct S_g8c469e10 S_g8c469e10;
typedef struct S_g8c469e10_42c S_g8c469e10_42c;
struct S_g8c469e10 {
    char unknown0[0x42c];
    S_g8c469e10_42c *f42c;
};
struct S_g8c469e10_42c {
    char unknown0[0x8];
    int f08;
    char unknownc[0x10];
    int f1c;
};
extern S_g8c469e10 *g_8c469e10;
void TObjEneMe1Canadin_v111_8c090cac(TObjEneMe1Canadin *o)
{
    o->f38 = (int)(g_8c469e10->f42c->f08);
    o->f28 = (int)(g_8c469e10->f42c->f1c);
}
