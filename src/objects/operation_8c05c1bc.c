#include "src/include/classes/TBoss4Zako.h"
typedef struct TBoss4Zako_p3d8 TBoss4Zako_p3d8;
extern int call_8c18e8a0(int, void *);
void operation_8c05c1bc(TBoss4Zako *o, int a1)
{
    int t1;
    o->f3d8 = (TBoss4Zako_p3d8 *)a1;
    t1 = call_8c18e8a0(o->f20 + 3, o->f3d8);
    o->f3d4 = t1;
}
