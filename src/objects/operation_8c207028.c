#include "src/include/classes/TWindowSubComCardList.h"
typedef struct TWindowSubComCardList_p9c TWindowSubComCardList_p9c;
extern void TWindowMenu_update_8c156838(void *);
extern int operation_192b4c(void *);
extern void operation_8c1571d4(void *, int);
extern void operation_8c207160(void *);
void TWindowSubComCardList_update_8c207028(TWindowSubComCardList *o)
{
    int t1;
    TWindowMenu_update_8c156838((void *)o);
    t1 = operation_192b4c((void *)(o->f9c));
    if (t1 != 0) {
        operation_8c1571d4((void *)o, 0);
        operation_8c207160((void *)o);
    }
}
