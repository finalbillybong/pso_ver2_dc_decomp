#include "src/include/classes/TObjEneRe4Sorcerer.h"
extern void operation_8c059ea4(void *, int);
extern void reset_segments_8c05a124(void *);
void TObjEneRe4Sorcerer_v70_8c0c9134(TObjEneRe4Sorcerer *o)
{
    if (o->f30a != 8) {
        if (((o->f3e4 & 8)) == 0) {
            operation_8c059ea4((void *)o, 8);
            return;
        }
        reset_segments_8c05a124((void *)o);
    }
}
