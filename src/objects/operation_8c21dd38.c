#include "src/include/types/ViewParameters.h"
typedef struct S_L8c510b20 S_L8c510b20;
struct S_L8c510b20 {
    int f00;
    int f04;
};
extern S_L8c510b20 g_8c510b20;
extern void call_8c21df94(ViewParameters *, int, int);
extern void call_8c0db30c(ViewParameters *);
extern void call_8c21e000(ViewParameters *);
extern void operation_8c21e060(void *);
extern void update_view_nodes(void *, void *);
void operation_8c21dd38(ViewParameters *o)
{
    if (((o->parameter0 & 1)) != 0) {
        call_8c21df94(o, (int)((short)(&g_8c510b20)->f00), (int)((short)(&g_8c510b20)->f04));
    }
    call_8c0db30c(o);
    call_8c21e000(o);
    operation_8c21e060((void *)o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
