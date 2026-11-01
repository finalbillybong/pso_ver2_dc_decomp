/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b32c0
 * function: operation_8c0b32c0
 * language: c
 * reference size: 468 bytes
 * compiled size: 468 bytes (+0.0%)
 * differing lines: 4 of 206 reference instruction lines
 * differing bytes: 4
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
typedef struct S_L8c2854f8 S_L8c2854f8;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_20_0 Arg0_20_0;
typedef struct Arg1 Arg1;
typedef struct S_vv3_0 S_vv3_0;
typedef struct S_vv3_0_0 S_vv3_0_0;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Arg0_20 *f20;
    int f24;
    int f28;
    int f2c;
    short f30;
    short f32;
    Vector3 f34;
};
struct Arg1 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    Vector3 f3c;
};
struct S_L8c2854f8 {
    char unknown0[0x4];
    int f04;
};
extern S_L8c2854f8 g_8c2854f8;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int call_8c18e768(int, int);
extern int operator_new_8c18de4c(int);
extern int create_effect_7708(void *, int, int);
extern void bind_id(void *, unsigned short);
extern int play_se_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
Object *operation_8c0b32c0(Object *o, Arg1 *a1, int a2, int a3)
{
    Object **home = &o;
    unsigned int v1;
    int v2;
    int v3;
    char *v4;
    int v10;
    Object *p;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a3);
    o->dispatch = (void *)0x8c265f44;
    *(Vector3 *)&o->f34 = *(Vector3 *)&a1->f3c;
    o->f30 = 0;
    o->f32 = a1->f20;
    o->f2c = 0;
    t1 = call_8c18e768(a2, 5);
    o->f28 = (int)(t1);
    t2 = operator_new_8c18de4c((int)(*(int *)((char *)&g_8c2854f8.f04 + (o->f28 << 3)) << 2));
    v1 = (unsigned int)0;
    o->f20 = (Arg0_20 *)t2;
    goto L_8c0b3364;
    v2 = (int)/* ? clobbered */ 0;
    v3 = (int)/* ? clobbered */ 0;
    v4 = (char *)v1;
L_8c0b3330:;
    t3 = create_effect_7708((void *)(v2 + 0x34), (int)(*(S_vv3_0_0 **)((char *)((char *)*(S_vv3_0 **)((char *)((char *)v3 + 0x0) + ((int)((void *)&g_8c2854f8))) + 0x0) + ((int)(v4) << 3))), 0x10);
    *(int *)((char *)((char *)o->f20 + 0x0) + ((int)(v4) << 2)) = (int)(t3);
    if (*(int *)((char *)((char *)o->f20 + 0x0) + ((int)(v4) << 2)) != 0) {
        bind_id((void *)(*(Arg0_20_0 **)((char *)((char *)o->f20 + 0x0) + ((int)(v4) << 2))), (unsigned short)(o->f32));
    }
    v1 = (unsigned int)(v4 + 1);
L_8c0b3364:;
    v2 = (int)o;
    v3 = (int)(o->f28 << 3);
    v4 = (char *)v1;
    if ((unsigned int)*(int *)((char *)&g_8c2854f8.f04 + (o->f28 << 3)) > v1) {
        goto L_8c0b3330;
    }
    p = o;
    switch (p->f28) {
    case 0:
        o->f24 = play_se_8c05fbf8(0x2000c, (void *)(&p->f34), 0, 0);
        if (o->f24 >= 0) {
            emit_control_60320((int)(o->f24), 0x100, 0);
        }
        break;
    case 1:
        o->f24 = play_se_8c05fbf8(0x2000c, (void *)(&p->f34), 0, 0);
        break;
    case 2:
        v10 = (int)p->f2c;
        if (v10 >= 0xf && 0x19 > v10) {
            o->f24 = play_se_8c05fbf8(0x2000c, (void *)(&p->f34), 0, 0);
            if (o->f24 >= 0) {
                emit_control_60320((int)(o->f24), -0x180, 0);
            }
        } else if (v10 >= 0x19 && 0x1e > v10) {
            o->f24 = play_se_8c05fbf8(0x2000c, (void *)(&p->f34), 0, 0);
            if (o->f24 >= 0) {
                emit_control_60320((int)(o->f24), -0x250, 0);
            }
        } else {
            o->f24 = play_se_8c05fbf8(0x2000c, (void *)(&p->f34), 0, 0);
            if (o->f24 >= 0) {
                emit_control_60320((int)(o->f24), -0x100, 0);
            }
        }
        break;
    }
    return o;
}
