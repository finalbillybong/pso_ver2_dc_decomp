#include "src/include/classes/TObjEneGyaranzo.h"
extern void update_actor_mode_zero(void *);
extern void call_8c10922c(void);
extern void call_8c109948(void);
extern void call_8c10962c(void);
extern void call_8c1097a0(void);
extern void call_8c10a57c(void);
extern void call_8c10a6a0(void);
void TObjEneGyaranzo_update_step_8c108d78(TObjEneGyaranzo *o)
{
    switch (o->f30a) {
    case 0:
        update_actor_mode_zero((void *)o);
        return;
    case 1:
        call_8c10922c();
        return;
    case 2:
        call_8c109948();
        return;
    case 4:
        call_8c10962c();
        return;
    case 5:
        call_8c1097a0();
        return;
    case 7:
        call_8c10a57c();
        return;
    case 9:
        call_8c10922c();
        return;
    case 8:
        call_8c10a6a0();
        return;
    case 3:
    case 6:
        break;
    }
}
