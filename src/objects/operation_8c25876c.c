#include "src/include/classes/TODummyKeyCave01Sound.h"
extern void call_8c258794(void);
void TODummyKeyCave01Sound_update_8c25876c(TODummyKeyCave01Sound *o)
{
    o->f24 += -1;
    if (o->f24 == 0) {
        call_8c258794();
        o->f04 |= 1;
    }
}
