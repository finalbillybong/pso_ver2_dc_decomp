typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_104_dc Arg0_104_dc;
typedef struct Arg0_20 Arg0_20;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg0_20 *f20;
    Vector3 f24;
    char unknown30[0x4c];
    short f7c;
    char unknown7e[0x2];
    int f80;
    Vector3 f84;
    char unknown90[0x8];
    float f98;
    char unknown9c[0x34];
    short fd0;
    char unknownd2[0x32];
    Arg0_104 *f104;
};
struct Arg0_104 {
    char unknown0[0xdc];
    Arg0_104_dc *fdc;
};
struct Arg0_104_dc {
    char unknown0[0xc];
    float f0c;
};
struct Arg0_20 {
    char unknown0[0x20];
    short f20;
};
extern void operation_8c0ad45c(void *, int, void *, void *, int);
extern void initialize_effect12_template(void *);
extern int call_8c18e768(int, int);
extern int call_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
Object *operation_8c0babf0(Object *o, int a1, int a2, int a3, int a4)
{
    Object **home = &o;
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
        Object *base = o;
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
            t2 = call_8c05fbf8(0x20017, (void *)(&o->f24), 0, 0);
            if (t2 >= 0) {
                emit_control_60320(t2, 0x100, 0);
                goto L_8c0bacbe;
L_8c0bac94:;
                call_8c05fbf8(0x20017, (void *)(&o->f24), 0, 0);
                goto L_8c0bacbe;
L_8c0baca4:;
                t3 = call_8c05fbf8(0x20017, (void *)(&o->f24), 0, 0);
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
