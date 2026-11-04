#include "src/include/classes/TObjDeadListWin.h"
typedef struct S_g8c418248 S_g8c418248;
extern int lookup_low_id(int);
extern void call_8c2600e0(TObjDeadListWin *);
extern void update_target_timer_8c2601a8(void *);
void TObjDeadListWin_update_8c260090(TObjDeadListWin *o)
{
    int t1;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 == 0) {
        o->f04 |= 1;
        return;
    }
    if (o->f20 != 0) {
        if (o->f20 != 1) {
            return;
        }
    } else {
        call_8c2600e0(o);
        return;
    }
    update_target_timer_8c2601a8((void *)o);
}
