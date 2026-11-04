#include "src/include/classes/TObjDoaEx01.h"
extern void call_8c24b070(void);
extern void call_8c24b130(void);
void TObjDoaEx01_render_8c24b040(TObjDoaEx01 *o)
{
    if (((o->f108 & 1)) != 0) {
        call_8c24b070();
        return;
    }
    call_8c24b130();
}
