#include "src/include/classes/TQuestListOnline.h"
extern int call_8c03ed64(void);
extern int call_8c03ed10(void *);
void quest_online_list_init_8c21d780(TQuestListOnline *o)
{
    int t1;
    int t2;
    t1 = call_8c03ed64();
    if (t1 != 0) {
        t2 = call_8c03ed10((void *)0x8c2e1840);
        *(int *)0x8c505964 = t2;
        o->f28 = 6;
    }
}
