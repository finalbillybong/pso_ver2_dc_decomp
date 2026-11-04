#include "src/include/classes/TQuestVmDownLoadServer.h"
typedef struct TQuestVmDownLoadServer_p88 TQuestVmDownLoadServer_p88;
typedef struct TQuestVmDownLoadServer_p90 TQuestVmDownLoadServer_p90;
struct TQuestVmDownLoadServer_p88 {
    char unknown0[0x4];
    short f04;
};
struct TQuestVmDownLoadServer_p90 {
    char unknown0[0x4];
    short f04;
};
extern int g_8c41bd10;
extern void operation_8c22e858(void *);
extern void operation_8c22d95c(void *);
extern void operation_8c22da28(void *);
extern void create_object_8c22dc70(void *);
extern void operation_8c22db2c(void *);
extern void operation_8c22dd38(void *);
extern void operation_8c22dd9c(void *);
extern void operation_8c22de98(void *);
extern void operation_8c22dfc8(void *);
extern void build_download_vmu_header_8c22e0c4(TQuestVmDownLoadServer *);
extern void call_8c22e20c(TQuestVmDownLoadServer *);
extern void operation_8c22e27c(void *);
extern void call_8c22e2cc(TQuestVmDownLoadServer *);
extern void call_8c22e414(TQuestVmDownLoadServer *);
extern void operation_8c22e47c(void *);
extern void call_8c22e4fc(TQuestVmDownLoadServer *);
extern void operation_8c22e684(void *);
extern void operation_8c22e6ec(void *);
extern void operation_8c22ea28(void *);
extern void operation_8c22eb20(void *);
extern void operation_8c22e7c8(void *);
extern void operation_8c22e978(void *);
extern void operation_8c22e78c(void *);
void TQuestVmDownLoadServer_update_8c22d748(TQuestVmDownLoadServer *o)
{
    operation_8c22e858((void *)o);
    switch (o->f94) {
    case 0:
        operation_8c22d95c((void *)o);
        return;
    case 1:
        operation_8c22da28((void *)o);
        return;
    case 2:
        create_object_8c22dc70((void *)o);
        return;
    case 3:
        operation_8c22db2c((void *)o);
        return;
    case 4:
        if (g_8c41bd10 != 0) {
            if (o->f88 != 0) {
                o->f88->f04 |= 4;
            }
            if (o->f90 == 0) {
                return;
            }
            o->f90->f04 |= 4;
            return;
        }
        if (o->f88 != 0) {
            o->f88->f04 &= -5;
        }
        if (o->f90 != 0) {
            o->f90->f04 &= -5;
        }
        operation_8c22dd38((void *)o);
        return;
    case 5:
        operation_8c22dd9c((void *)o);
        return;
    case 6:
        operation_8c22de98((void *)o);
        return;
    case 7:
        operation_8c22dfc8((void *)o);
        return;
    case 8:
        build_download_vmu_header_8c22e0c4(o);
        return;
    case 9:
        call_8c22e20c(o);
        return;
    case 10:
        operation_8c22e27c((void *)o);
        return;
    case 11:
        call_8c22e2cc(o);
        return;
    case 12:
        call_8c22e414(o);
        return;
    case 13:
        operation_8c22e47c((void *)o);
        return;
    case 14:
        call_8c22e4fc(o);
        return;
    case 15:
        operation_8c22e684((void *)o);
        return;
    case 16:
        operation_8c22e6ec((void *)o);
        return;
    case 19:
        operation_8c22ea28((void *)o);
        return;
    case 20:
        operation_8c22eb20((void *)o);
        return;
    case 17:
        operation_8c22e7c8((void *)o);
        return;
    case 18:
        operation_8c22e978((void *)o);
        return;
    case 21:
        operation_8c22e78c((void *)o);
        return;
    }
}
