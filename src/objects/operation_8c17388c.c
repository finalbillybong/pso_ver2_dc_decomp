#include "src/include/classes/TQuestThread.h"
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c418248 S_g8c418248;
typedef struct TObject_p10 TObject_p10;
typedef struct TQuestThread_p28 TQuestThread_p28;
typedef struct TQuestThread_p30 TQuestThread_p30;
typedef struct TQuestThread_p98 TQuestThread_p98;
typedef struct TQuestThread_p9c TQuestThread_p9c;
typedef struct TQuestThread_pa0 TQuestThread_pa0;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
struct TObject_p10 {
    char unknown0[0x4];
    short f04;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct TQuestThread_p30 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv2 {
    char unknown0[0x4];
    short f04;
};
struct S_vv3 {
    char unknown0[0x4];
    short f04;
};
struct S_vv4 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c418248 *g_8c418248;
extern int g_8c4db658;
extern S_L8c41cba0 g_8c41cba0;
extern int quest_thread_run_8c16c27c(void *);
extern int lookup_low_id(int);
extern int player_flag9_8c026508(void);
extern int call_8c0dddcc(void);
extern int operation_8c0ddc88(int);
extern void operation_8c0ddcfc(int);
extern void release_scene_8c16c1e4(void);
extern int operation_8c1571f4(void *);
extern void request_resource_release(void *);
extern int query_fade_active(void);
extern int operation_8c174184(void *);
extern int operation_8c174444(void *);
extern int operation_8c17478c(void *);
extern int operation_8c1747b0(void *);
void TQuestThread_update_8c17388c(TQuestThread *o)
{
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    TObject_p10 *v10 = o->f10;
    switch (o->fa4) {
    case 0:
    case 1:
        t1 = quest_thread_run_8c16c27c((void *)(((char *)o + 0x20)));
        o->fa4 = (int)(t1);
        return;
    case 2:
        o->f04 |= 1;
        return;
    case 3:
        v10->f04 |= 1;
        return;
    case 4:
        t2 = lookup_low_id((int)g_8c418248);
        if (t2 == 0) {
            return;
        }
        t3 = player_flag9_8c026508();
        if (t3 != 0) {
            return;
        }
        if ((((&g_8c41cba0)->f28 & 4)) == 0) {
            return;
        }
        t4 = call_8c0dddcc();
        t5 = operation_8c0ddc88(t4);
        if (t5 == 0) {
            operation_8c0ddcfc(t4);
            return;
        }
        o->fa4 = 0;
        return;
    case 5:
        t6 = lookup_low_id((int)g_8c418248);
        if (t6 == 0) {
            return;
        }
        if ((((&g_8c41cba0)->f28 & 4)) != 0) {
            o->fa4 = 0;
        }
        if ((((&g_8c41cba0)->f28 & 8)) == 0) {
            return;
        }
        release_scene_8c16c1e4();
        o->f04 |= 1;
        return;
    case 7:
        if (((o->f30->f80 & 0xffff & 2)) == 0) {
            return;
        }
        t7 = operation_8c1571f4((void *)(o->f30));
        *(int *)((char *)((char *)o->f28 + 0x0) + (o->f34 << 2)) = (int)(t7);
        request_resource_release((void *)(o->f30));
        o->f30 = (TQuestThread_p30 *)0;
        o->fa4 = 0;
        return;
    case 8:
        t8 = query_fade_active();
        if (t8 != 0) {
            return;
        }
        o->fa4 = 0;
        return;
    case 9:
        t9 = operation_8c174184((void *)(o->f98));
        if (t9 == 0) {
            return;
        }
        v2 = (S_vv2 *)o->f98;
        v2->f04 |= 1;
        o->f98 = (TQuestThread_p98 *)0;
        o->fa4 = 0;
        return;
    case 10:
        t10 = operation_8c174444((void *)(o->f9c));
        if (!(t10 >= 0)) {
            return;
        }
        g_8c4db658 = (int)(t10);
        v3 = (S_vv3 *)o->f9c;
        v3->f04 |= 1;
        o->f9c = (TQuestThread_p9c *)0;
        o->fa4 = 0;
        return;
    case 11:
        t11 = operation_8c17478c((void *)(o->fa0));
        if (t11 != 0) {
            t12 = operation_8c1747b0((void *)(o->fa0));
            *(int *)((char *)((char *)o->f28 + 0x0) + (o->f34 << 2)) = (int)(t12);
            v4 = (S_vv4 *)o->fa0;
            v4->f04 |= 1;
            o->fa0 = (TQuestThread_pa0 *)0;
            o->fa4 = 0;
        }
        return;
    case 6:
        break;
    }
}
