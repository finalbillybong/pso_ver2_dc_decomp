#include "src/include/classes/TObjWarpBoss.h"
extern void call_8c1e83fc(void);
extern void call_8c1e8670(void);
extern void call_8c1e8788(void);
extern void update_overlay_menu(void *);
extern void advance_request_8c1e8ad0(void *);
void operation_8c1e7e18(TObjWarpBoss *o)
{
    switch (o->f10e) {
    case 0:
        call_8c1e83fc();
        return;
    case 1:
        call_8c1e8670();
        return;
    case 2:
        call_8c1e8788();
        return;
    case 3:
        update_overlay_menu((void *)o);
        return;
    case 4:
        advance_request_8c1e8ad0((void *)o);
    }
}
