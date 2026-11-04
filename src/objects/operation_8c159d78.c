#include "src/include/classes/TObjVoloptCage.h"
extern void update_rise_8c159ef8(void *);
extern void update_link_8c159fac(void *);
extern void update_phase_8c15a058(void *);
extern void call_8c15a0fc(TObjVoloptCage *);
void operation_8c159d78(TObjVoloptCage *o)
{
    switch (o->f30a) {
    case 7:
        update_rise_8c159ef8((void *)o);
        return;
    case 1:
        update_link_8c159fac((void *)o);
        return;
    case 4:
        update_phase_8c15a058((void *)o);
        return;
    case 5:
        call_8c15a0fc(o);
    }
}
