#include "src/include/classes/TObjEneRe2Flower.h"
typedef struct TObjEneRe2Flower_pdc TObjEneRe2Flower_pdc;
struct TObjEneRe2Flower_pdc {
    char unknown0[0x30];
    float f30;
};
extern void operation_8c05af80(void *, void *, int);
void TObjEneRe2Flower_v94_8c05cfe4(TObjEneRe2Flower *o)
{
    o->fdc->f30 = o->f328 - o->f40;
    operation_8c05af80((void *)o, (void *)(((char *)o + 0x3f8)), 0);
}
