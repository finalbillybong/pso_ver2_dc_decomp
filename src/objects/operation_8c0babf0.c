#include "src/include/classes/TTecZarua.h"
typedef struct TTecZarua_p104 TTecZarua_p104;
typedef struct Arg0_104_dc Arg0_104_dc;
typedef struct TTecZarua_p20 TTecZarua_p20;
struct TTecZarua_p104 {
    char unknown0[0xdc];
    Arg0_104_dc *fdc;
};
struct Arg0_104_dc {
    char unknown0[0xc];
    float f0c;
};
struct TTecZarua_p20 {
    char unknown0[0x20];
    short f20;
};
extern void operation_8c0ad45c(void *, int, void *, void *, int);
extern void initialize_effect12_template(void *);
extern int call_8c18e768(int, int);
extern int play_se_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
TTecZarua *TTecZarua_ctor_8c0babf0(TTecZarua *o, int a1, int a2, int a3, int a4)
{
    TTecZarua **home = &o;
    int t1;
    int t2;
    int t3;
    (void)home;
    operation_8c0ad45c((void *)o, a1, (void *)a2, (void *)a3, a4);
    o->dispatch = (void *)0x8c266284;
    o->tag = (int)(*(int *)0x8c305910);
    o->size = 0x108;
    initialize_effect12_template((void *)o);
    *(Vector3 *)&o->f24 = *(Vector3 *)&o->f84;
    if (o->f104 != 0) {
        o->f104->fdc->f0c = o->f98;
    }
    {
        TTecZarua *base = o;
        t1 = call_8c18e768((int)(base->f7c), 5);
        base->f80 = (int)(t1);
        if (o->f80 != 0) {
            if (o->f80 == 1) {
                goto L_8c0bac94;
            }
            if (o->f80 == 2) {
                goto L_8c0baca4;
            }
        } else {
            t2 = play_se_8c05fbf8(0x20017, (void *)(&o->f24), 0, 0);
            if (t2 >= 0) {
                emit_control_60320(t2, 0x100, 0);
                goto L_8c0bacbe;
L_8c0bac94:;
                play_se_8c05fbf8(0x20017, (void *)(&o->f24), 0, 0);
                goto L_8c0bacbe;
L_8c0baca4:;
                t3 = play_se_8c05fbf8(0x20017, (void *)(&o->f24), 0, 0);
                if (t3 >= 0) {
                    emit_control_60320(t3, -0x100, 0);
                }
            }
        }
    }
L_8c0bacbe:;
    if (o->f20 != 0) {
        o->fd0 = o->f20->f20;
    }
    return o;
}
