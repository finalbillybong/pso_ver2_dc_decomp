/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b6e0c
 * function: TTecRaBarta_ctor_1_8c0b6e0c
 * language: c
 * reference size: 628 bytes
 * compiled size: 628 bytes (+0.0%)
 * differing lines: 22 of 257 reference instruction lines
 * differing bytes: 15
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c285688 S_L8c285688;
typedef struct Object Object;
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_104_dc Arg0_104_dc;
typedef struct Arg0_110 Arg0_110;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv10_0 S_vv10_0;
typedef struct S_vv10_0_0 S_vv10_0_0;
typedef struct S_vv9 S_vv9;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg0_20 *f20;
    char unknown24[0x58];
    short f7c;
    short f7e;
    int f80;
    char unknown84[0x14];
    float f98;
    char unknown9c[0x34];
    short fd0;
    char unknownd2[0x32];
    Arg0_104 *f104;
    int f108;
    int f10c;
    Arg0_110 *f110;
    char unknown114[0x40];
    int f154;
};
struct Arg0_104 {
    char unknown0[0xdc];
    Arg0_104_dc *fdc;
};
struct Arg0_104_dc {
    char unknown0[0xc];
    float f0c;
};
struct S_L8c285688 {
    char unknown0[0x4];
    int f04;
};
struct S_vv9 {
    char unknown0[0x20];
    int f20;
};
struct Arg0_20 {
    char unknown0[0x20];
    short f20;
};
extern int g_8c305300;
extern S_L8c285688 g_8c285688;
extern void operation_8c0ad45c(void *, int, void *, void *, int);
extern void initialize_effect5_template(void *);
extern int call_8c18e768(int, int);
extern int operator_new_8c18de4c(int);
extern int create_effect_769c(void *, int);
extern int play_se_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
Object *TTecRaBarta_ctor_1_8c0b6e0c(Object *o, int a1, int a2, int a3)
{
    Object **home = &o;
    int v4;
    int v7;
    int v8;
    S_vv9 *v9;
    int v10;
    char *v11;
    int v17;
    unsigned int v15;
    short v18;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    (void)home;
    operation_8c0ad45c((void *)o, a1, (void *)a2, (void *)a2, a3);
    o->dispatch = (void *)0x8c266138;
    o->tag = (int)(g_8c305300);
    o->size = 0x158;
    o->f10c = 0;
    initialize_effect5_template((void *)o);
    if (o->f104 != 0) {
        o->f104->fdc->f0c = o->f98;
    }
    v8 = 0xffff;
    for (v4 = 0; v4 < 0x20; v4++) {
        *(unsigned short *)((char *)((char *)o + 0x114) + (v4 << 1)) = v8;
    }
    o->f154 = 0;
    {
        Object *base = o;
        t1 = call_8c18e768((int)(base->f7c), 5);
        base->f80 = (int)(t1);
    }
    t2 = operator_new_8c18de4c((int)(*(int *)((char *)&g_8c285688.f04 + (o->f80 << 3)) << 2));
    o->f110 = (Arg0_110 *)t2;
    v15 = 0;
    {
        Object *base;
        int k324 = 0x324;
        int k110 = 0x110;
        while ((base = o, v17 = (int)base->f80, v10 = v17 << 3, (unsigned int)*(int *)((char *)&g_8c285688.f04 + v10) > v15)) {
            t3 = create_effect_769c((void *)((char *)base->f20 + k324), *(int *)(*(char **)((char *)&g_8c285688 + v10) + (v15 << 3)));
            *(int *)((char *)*(int **)((char *)o + k110) + (v15 << 2)) = (int)(t3);
            v15++;
        }
        if (v17 != 0) {
            if (v17 == 1) {
                goto L_8c0b6f34;
            }
            if (v17 == 2) {
                goto L_8c0b6f4e;
            }
        } else {
            t4 = play_se_8c05fbf8(0x20006, (void *)(((char *)base->f20 + 0x324)), 0, 0);
            o->f108 = (int)(t4);
            if (o->f108 >= 0) {
                emit_control_60320((int)(o->f108), 0x100, 0);
                goto L_8c0b6ff0;
L_8c0b6f34:;
                t5 = play_se_8c05fbf8(0x20006, (void *)(((char *)base->f20 + 0x324)), 0, 0);
                o->f108 = (int)(t5);
                goto L_8c0b6ff0;
L_8c0b6f4e:;
                v18 = (short)base->f7e;
                if ((short)v18 >= 0xf && 0x19 > (short)v18) {
                    t6 = play_se_8c05fbf8(0x20006, (void *)(((char *)base->f20 + 0x324)), 0, 0);
                    o->f108 = (int)(t6);
                    if (!(o->f108 >= 0)) {
                        goto L_8c0b6ff0;
                    }
                    emit_control_60320((int)(o->f108), -0x180, 0);
                    goto L_8c0b6ff0;
                }
                if ((short)v18 >= 0x19 && 0x1e > (short)v18) {
                    t7 = play_se_8c05fbf8(0x20006, (void *)(((char *)base->f20 + 0x324)), 0, 0);
                    o->f108 = (int)(t7);
                    if (!(o->f108 >= 0)) {
                        goto L_8c0b6ff0;
                    }
                    emit_control_60320((int)(o->f108), -0x250, 0);
                    goto L_8c0b6ff0;
                }
                t8 = play_se_8c05fbf8(0x20006, (void *)(((char *)base->f20 + 0x324)), 0, 0);
                o->f108 = (int)(t8);
                if (o->f108 >= 0) {
                    emit_control_60320((int)(o->f108), -0x100, 0);
                }
            }
        }
    }
L_8c0b6ff0:;
    if (o->f20 != 0) {
        o->fd0 = o->f20->f20;
    }
    return o;
}
