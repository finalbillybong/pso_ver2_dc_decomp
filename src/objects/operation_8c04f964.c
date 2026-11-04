#include "src/include/classes/TObjGrassWeb.h"
extern void call_8c04f9a8(void);
extern void call_8c04fa44(void);
extern void call_8c04fae8(void);
void TObjGrassWeb_update_8c04f964(TObjGrassWeb *o)
{
    if (o->f94 != 0) {
        if (o->f94 == 1) {
            goto L_8c04f980;
        }
    } else {
        call_8c04f9a8();
        return;
L_8c04f980:;
        call_8c04fa44();
        return;
    }
    call_8c04fae8();
}
