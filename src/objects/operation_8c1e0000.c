#include "src/include/classes/TWindowKeyBoardHard.h"
typedef struct Arg0_7c Arg0_7c;
extern void call_8c1e220c(void *);
void TWindowKeyBoardHard_init_8c1e0000(TWindowKeyBoardHard *o)
{
    if (o->f7c != 0) {
        call_8c1e220c((void *)(o->f7c));
        switch (*(int *)0x8c467188) {
        case 3:
            o->f78 = 0;
            return;
        case 4:
            o->f78 = 1;
            return;
        case 2:
            o->f78 = 2;
            return;
        case 0:
        case 1:
            o->f78 = 3;
        }
    }
}
