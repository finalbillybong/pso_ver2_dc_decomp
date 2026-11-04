#include "src/include/classes/TObjTombstone.h"
extern int call_8c2474a4(void);
extern float call_8c246de8(TObjTombstone *);
extern void call_8c246834(TObjTombstone *);
extern int call_8c2468a0(TObjTombstone *);
extern void call_8c246954(TObjTombstone *);
void TObjTombstone_update_8c2467c4(TObjTombstone *o)
{
    int t1;
    float t2;
    int t3;
    t1 = call_8c2474a4();
    if (t1 != 0) {
        o->f04 |= 1;
        return;
    }
    t2 = call_8c246de8(o);
    o->fe8 = t2;
    call_8c246834(o);
    t3 = call_8c2468a0(o);
    if (t3 != 0) {
        call_8c246954(o);
    }
    o->f260 += 1;
    *(int *)0x8c510e84 = 0;
}
