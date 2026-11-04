#include "src/include/classes/TQuestVmDownLoadServer.h"
typedef struct S_L8c41cba0 S_L8c41cba0;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern S_L8c41cba0 g_8c41cba0;
extern void call_8c017334(void);
void operation_8c22eb20(TQuestVmDownLoadServer *o)
{
    if ((((&g_8c41cba0)->f28 & 4)) == 0 && (((&g_8c41cba0)->f28 & 2)) == 0) {
        return;
    }
    call_8c017334();
    o->f94 = 0x15;
}
