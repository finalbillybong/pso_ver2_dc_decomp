#include "src/include/classes/TWindowCtrl.h"
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TWindowCtrl_p34 TWindowCtrl_p34;
typedef struct Arg0_38 Arg0_38;
typedef struct TWindowCtrl_p44 TWindowCtrl_p44;
typedef struct TWindowCtrl_p54 TWindowCtrl_p54;
struct TWindowCtrl_p34 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_38 {
    char unknown0[0x4];
    short f04;
};
struct TWindowCtrl_p44 {
    char unknown0[0x4];
    short f04;
};
struct TWindowCtrl_p54 {
    char unknown0[0x22];
    short f22;
};
extern int g_8c307498;
extern int g_8c41cd20;
extern S_g8c44be84 *g_8c44be84;
extern S_g8c44bea0 *g_8c44bea0;
extern TWindowCtrl *g_8c46fe20;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4dbde0;
extern char g_8c30749c[];
extern void TObject_ctor_8c0330e4(void *, void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TWindowMainMenu_ctor_8c18bafc(int, void *);
extern int TWindowMessageInfomation_ctor_8c226800(int, int);
extern void TWindowBreakIn_ctor_8c217914(void *);
extern void TWindowStatus_ctor_8c0e2648(int);
extern int get_current_area_8c032b10(void);
extern void TWindowSimpleStatus_ctor_8c0e3294(int, int);
extern void call_8c103424(int);
extern void TWindowChat_ctor_8c1dca80(void *, int, int);
extern int TWindowArea_ctor_2_8c24bce8(void *);
TWindowCtrl *TWindowCtrl_ctor_8c0dc9ac(TWindowCtrl *o, int a1)
{
    TWindowCtrl **home = &o;
    int v62;
    int v144;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c26772c;
    o->tag = (int)(g_8c307498);
    o->size = 0xb8;
    o->f20 = 0;
    o->f22 = 0;
    if (g_8c46fe20 != 0) {
        g_8c46fe20->f04 |= 1;
    }
    g_8c46fe20 = (TWindowCtrl *)o;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x9c);
    if (t1 != 0) {
        TWindowMainMenu_ctor_8c18bafc(t1, g_8c44bea0);
    }
    g_8c4dbde0 = (int)(t1);
    t2 = TWindowMessageInfomation_ctor_8c226800((int)((void *)0x8c285878), (int)((void *)0x8c285880));
    o->f70 = (int)(t2);
    t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x68);
    if (t3 != 0) {
        TWindowBreakIn_ctor_8c217914((void *)t3);
    }
    o->f30 = (int)(t3);
    t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x7c);
    if (t4 != 0) {
        TWindowStatus_ctor_8c0e2648(t4);
    }
    o->f34 = (TWindowCtrl_p34 *)t4;
    o->f34->f04 |= 4;
    v62 = (int)0;
    while (3 > v62) {
        t5 = get_current_area_8c032b10();
        if (t5 != 0xf) {
            t6 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x84);
            if (t6 != 0) {
                TWindowSimpleStatus_ctor_8c0e3294(t6, v62);
            }
            *(int *)((char *)((char *)o + 0x38) + (v62 << 2)) = (int)(t6);
            (*(Arg0_38 **)((char *)((char *)o + 0x38) + (v62 << 2)))->f04 |= 4;
        } else {
            *(int *)((char *)((char *)o + 0x38) + (v62 << 2)) = 0;
        }
        v62 = (int)(v62 + 1);
    }
    t7 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x7c);
    if (t7 != 0) {
        call_8c103424(t7);
    }
    o->f44 = (TWindowCtrl_p44 *)t7;
    o->f44->f04 |= 4;
    t8 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x3c);
    if (t8 != 0) {
        TWindowChat_ctor_8c1dca80((void *)t8, (int)g_8c44be84, (int)(((char *)o + 0x78)));
    }
    o->f54 = (TWindowCtrl_p54 *)t8;
    o->f54->f22 |= 0x40;
    v144 = (int)0;
    while (4 > v144) {
        *(int *)((char *)((char *)o + 0x5c) + (v144 << 2)) = 0;
        v144 = (int)(v144 + 1);
    }
    o->f2c = 0xffff;
    o->f58 = 0;
    o->f4c = 0;
    o->f50 = 0;
    o->f48 = 0;
    o->f6c = 0;
    o->f74 = 0;
    o->f24 = 0;
    o->f26 = 0;
    o->f28 = 0;
    if (g_8c41cd20 == 1 && g_8c46fe20 != 0 && g_8c46fe20->f50 == 0) {
        t9 = TWindowArea_ctor_2_8c24bce8((void *)((g_8c30749c + 0xc)));
        g_8c46fe20->f50 = (int)(t9);
    }
    return o;
}
