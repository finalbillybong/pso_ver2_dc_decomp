#include "src/include/classes/TPlayerBattleCtrl.h"
extern void call_8c242678(void);
extern void call_8c2426a0(void);
extern void call_8c242988(void);
extern void call_8c242abc(void);
extern void call_8c24323c(void);
extern void call_8c243784(void);
extern void call_8c243a9c(void);
void operation_8c2425e0(TPlayerBattleCtrl *o)
{
    switch (o->f20) {
    case 0:
        call_8c242678();
        return;
    case 1:
        call_8c2426a0();
        return;
    case 2:
        call_8c242988();
        return;
    case 3:
        call_8c242abc();
        return;
    case 4:
        call_8c24323c();
        return;
    case 5:
        call_8c243784();
        return;
    case 6:
        call_8c243a9c();
    }
}
