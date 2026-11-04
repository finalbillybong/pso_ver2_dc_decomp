#include "src/include/classes/TObjEneRe2Flower.h"
extern void operation_8c05d018(void *);
extern void reset_segments_8c05a124(void *);
extern void operation_8c059ea4(void *, int);
void TObjEneRe2Flower_v70_8c05cf5c(TObjEneRe2Flower *o)
{
    if (o->f30a != 9) {
        if (o->f30a == 8) {
            operation_8c05d018((void *)o);
            reset_segments_8c05a124((void *)o);
            return;
        }
        operation_8c059ea4((void *)o, 9);
    }
}
