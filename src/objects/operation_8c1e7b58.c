#include "src/include/classes/TObjWarpBoss.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void call_8c053f54(void);
extern void clear_overlay_elements(void *);
extern void operation_8c088ff4(void *, int);
extern void call_8c122774(void *, TObjWarpBoss *);
TObjWarpBoss *TObjWarpBoss_dtor_8c1e7b58(TObjWarpBoss *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c277f60;
        call_8c053f54();
        clear_overlay_elements((void *)o);
        operation_8c088ff4((void *)o, 0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
