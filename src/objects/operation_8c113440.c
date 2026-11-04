#include "src/include/classes/TOKey.h"
typedef struct S_L8c41cba0 S_L8c41cba0;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern S_L8c41cba0 g_8c41cba0;
extern int target_in_radius_8c113490(void *);
int TOKey_v16_8c113440(TOKey *o)
{
    int t1;
    if (o->f108 == 2) {
        return 0;
    }
    if (o->f108 == 0 && o->f10c == 1) {
        return 0;
    }
    t1 = target_in_radius_8c113490((void *)o);
    if (t1 != 0 && (((&g_8c41cba0)->f28 & 4)) != 0) {
        return 1;
    }
    return 0;
}
