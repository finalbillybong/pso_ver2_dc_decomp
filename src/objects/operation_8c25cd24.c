#include "src/include/classes/TItemReverseTech.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void clear_global_render_resources(void);
extern void select_state2_8c01c1b4(void);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TItemReverseTech *);
TItemReverseTech *TItemReverseTech_dtor_8c25cd24(TItemReverseTech *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c281c6c;
        clear_global_render_resources();
        select_state2_8c01c1b4();
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
