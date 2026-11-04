#include "src/include/classes/TObjDFDemo5.h"
extern char g_8c338118[];
extern void call_8c22a75c(TObjDFDemo5 *);
extern void game_ADXT_StartFname_wrapper_8c1005bc(int);
extern void operation_8c191504(int);
void TObjDFDemo5_update_8c22a4bc(TObjDFDemo5 *o)
{
    call_8c22a75c(o);
    if (o->fe8 == 0x8c) {
        game_ADXT_StartFname_wrapper_8c1005bc((int)(g_8c338118 + 0xc));
        operation_8c191504(2);
    }
    if ((o->fec += 0.5f) > 149.0f) {
        o->fec = 149.0f;
    }
    if (++o->fe8 >= 0x12c) {
        o->f04 |= 1;
    }
}
