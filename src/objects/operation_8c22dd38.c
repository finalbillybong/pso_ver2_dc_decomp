#include "src/include/classes/TQuestVmDownLoadServer.h"
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_4c4 S_g8c467180_2c_4c4;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x4c4];
    S_g8c467180_2c_4c4 *f4c4;
};
extern S_g8c467180 *g_8c467180;
extern S_L8c41cba0 g_8c41cba0;
extern void set_global_8c22ffe4(void);
extern void call_8c22e8e4(TQuestVmDownLoadServer *, void *, int);
void TQuestVmDownLoadServer_update_step_8c22dd38(TQuestVmDownLoadServer *o)
{
    if ((((&g_8c41cba0)->f28 & 4)) != 0) {
        set_global_8c22ffe4();
        o->f94 = 5;
        return;
    }
    if ((((&g_8c41cba0)->f28 & 2)) != 0) {
        set_global_8c22ffe4();
        call_8c22e8e4(o, g_8c467180->f2c->f4c4, 1);
        o->f94 = 0x14;
    }
}
