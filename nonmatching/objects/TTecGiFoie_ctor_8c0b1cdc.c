/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b1cdc
 * function: TTecGiFoie_ctor_8c0b1cdc
 * language: c
 * reference size: 696 bytes
 * compiled size: 692 bytes (-0.6%)
 * differing lines: 142 of 279 reference instruction lines
 * differing bytes: 628
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3051b4 S_L8c3051b4;
typedef struct Frame Frame;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_104_dc Arg0_104_dc;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_80 Arg0_80;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg0_20 *f20;
    float f24;
    float f28;
    float f2c;
    char unknown30[0x4c];
    short f7c;
    short f7e;
    Arg0_80 *f80;
    char unknown84[0x14];
    float f98;
    char unknown9c[0x34];
    short fd0;
    char unknownd2[0x32];
    Arg0_104 *f104;
    char unknown108[0x48];
    int f150;
};
struct Arg0_104 {
    char unknown0[0xdc];
    Arg0_104_dc *fdc;
};
struct Arg0_104_dc {
    char unknown0[0xc];
    float f0c;
};
struct Frame {
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
};
struct S_L8c3051b4 {
    int f00;
    int f04;
    int f08;
};
struct Arg0_20 {
    char unknown0[0x20];
    short f20;
};
extern int g_8c3051b0;
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c3051b4 g_8c3051b4;
extern void operation_8c0ad45c(void *, int, void *, void *, int);
extern void initialize_effect1_template(void *);
extern int call_8c18e768(int, int);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be280(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void call_8c0b21d4(int, void *, int, void *, int, void *);
extern int play_se_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
Object *TTecGiFoie_ctor_8c0b1cdc(Object *o, int a1, int a2, int a3)
{
    Frame frame;
    Object **home = &o;
    int v6;
    int v8;
    int v12;
    int v10;
    char *v11;
    int t2;
    short v20;
    int t1;
    int v9;
    int t3;
    int t4;
    int t5;
    int t6;
    (void)home;
    operation_8c0ad45c((void *)o, a1, (void *)a2, (void *)a2, a3);
    o->dispatch = (void *)0x8c265edc;
    o->tag = (int)(g_8c3051b0);
    o->size = 0x154;
    initialize_effect1_template((void *)o);
    if (o->f104 != 0) {
        o->f104->fdc->f0c = o->f98 + 5.0f;
    }
    v8 = (int)0;
    goto L_8c0b1d46;
    v6 = (int)0;
L_8c0b1d3a:;
    *(unsigned short *)((char *)((char *)o + 0x110) + (v6 << 1)) = 0xffff;
    v8 = (int)(v6 + 1);
L_8c0b1d46:;
    v6 = (int)v8;
    if (0x20 > v8) {
        goto L_8c0b1d3a;
    }
    o->f150 = 0;
    {
        Object *base = o;
        t1 = call_8c18e768((int)(base->f7c), 5);
        base->f80 = (Arg0_80 *)t1;
        v9 = (int)0x108;
        v10 = (int)0;
    }
    goto L_8c0b1e26;
    v11 = (char *)v10;
L_8c0b1d70:;
    *(int *)&(&frame)->f10 = (int)((&g_8c3051b4)->f00);
    v12 = (int)(((int)(v11) << 0xf) + 0x4000);
    *(int *)&(&frame)->f14 = (int)((&g_8c3051b4)->f04);
    *(int *)&(&frame)->f18 = (int)((&g_8c3051b4)->f08);
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, v12);
    call_8c3be280(0, (void *)(&(&frame)->f10), (void *)(&(&frame)->f10));
    njPopMatrix_8c38accc(1);
    (&frame)->f04 = o->f24 + (&frame)->f10;
    (&frame)->f08 = o->f28 + (&frame)->f14;
    (&frame)->f0c = o->f2c + (&frame)->f18;
    t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x50);
    if (t2 != 0) {
        call_8c0b21d4(t2, (void *)(&(&frame)->f04), v12, (void *)(o->f80), (int)(o->f7e), g_8c44bea0);
    }
    *(int *)((char *)((char *)((int)o + v9) + 0x0) + ((int)(v11) << 2)) = (int)(t2);
    v10 = (int)(v11 + 1);
L_8c0b1e26:;
    v11 = (char *)v10;
    if (2 > v10) {
        goto L_8c0b1d70;
    }
    if (o->f80 != 0) {
        if ((int)(o->f80) == 1) {
            goto L_8c0b1e60;
        }
        if ((int)(o->f80) == 2) {
            goto L_8c0b1e70;
        }
    } else {
        t3 = play_se_8c05fbf8(0x20001, (void *)(&o->f24), 0, 0);
        if (t3 >= 0) {
            emit_control_60320(t3, 0x100, 0);
            goto L_8c0b1ee8;
L_8c0b1e60:;
            play_se_8c05fbf8(0x20001, (void *)(&o->f24), 0, 0);
            goto L_8c0b1ee8;
L_8c0b1e70:;
            v20 = (short)o->f7e;
            if ((short)v20 >= 0xf && 0x19 > (short)v20) {
                t4 = play_se_8c05fbf8(0x20001, (void *)(&o->f24), 0, 0);
                if (!(t4 >= 0)) {
                    goto L_8c0b1ee8;
                }
                emit_control_60320(t4, -0x180, 0);
                goto L_8c0b1ee8;
            }
            if ((short)v20 >= 0x19 && 0x1e > (short)v20) {
                t5 = play_se_8c05fbf8(0x20001, (void *)(&o->f24), 0, 0);
                if (!(t5 >= 0)) {
                    goto L_8c0b1ee8;
                }
                emit_control_60320(t5, -0x250, 0);
                goto L_8c0b1ee8;
            }
            t6 = play_se_8c05fbf8(0x20001, (void *)(&o->f24), 0, 0);
            if (t6 >= 0) {
                emit_control_60320(t6, -0x100, 0);
            }
        }
    }
L_8c0b1ee8:;
    if (o->f20 != 0) {
        o->fd0 = o->f20->f20;
    }
    return o;
}
