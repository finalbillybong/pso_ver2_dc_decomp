#include "src/include/classes/TWindowSubShortCutList.h"
typedef struct TWindowSubShortCutList_p98 TWindowSubShortCutList_p98;
extern void call_8c1ccdc8(void);
extern int operation_192b4c(void *);
extern void call_8c21cac8(TWindowSubShortCutList *);
void TWindowSubShortCutList_update_8c21c904(TWindowSubShortCutList *o)
{
    int t1;
    call_8c1ccdc8();
    if (((o->f80 & 0xffff & 2)) == 0) {
        t1 = operation_192b4c((void *)(o->f98));
        if (t1 != 0) {
            call_8c21cac8(o);
        }
    }
}
