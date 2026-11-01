/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07c534
 * function: operation_8c07c534
 * language: c
 * reference size: 308 bytes
 * compiled size: 308 bytes (+0.0%)
 * differing lines: 24 of 116 reference instruction lines
 * differing bytes: 32
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
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg3 Arg3;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0x8];
    int fe8;
    int fec;
    char unknownf0[0x10];
    int f100;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
};
struct Arg3 {
    Vector3 f00;
};
extern int g_8c2feb00;
extern int g_8c469ae0;
extern char g_8c284f48[];
extern void operation_8c0f33fc(void *, int, int);
extern int rand(void);
extern int create_effect_769c(void *, int);
extern int game_malloc_8c011ecc(int);
extern void operation_8c0f336c(int, int);
extern int operation_8c05bbf8(void);
Object *operation_8c07c534(Object *o, int a1, int a2, Arg3 *a3)
{
    Object **home = &o;
    int v3;
    int v6;
    int v7;
    int t1;
    int t2;
    int t3;
    int t4;
    (void)home;
    operation_8c0f33fc((void *)o, a1, a2);
    o->dispatch = (void *)0x8c264198;
    o->tag = (int)(g_8c2feb00);
    o->size = 0x104;
    o->fdc->f0c = *(float *)(g_8c284f48 + 0x8);
    *(Vector3 *)&o->f3c = *(Vector3 *)&a3->f00;
    o->f64 = (int)((float)rand() / 32768.0f * 65536.0f);
    t2 = create_effect_769c((void *)(&o->f3c), 0x40);
    o->fe8 = (int)(t2);
    t3 = game_malloc_8c011ecc(0x10);
    if (t3 != 0) {
        operation_8c0f336c(t3, 4);
    }
    o->fec = (int)(t3);
    v6 = (int)0;
    goto L_8c07c5da;
    v3 = (int)0;
L_8c07c5ce:;
    *(int *)((char *)((char *)o + 0xf0) + (v3 << 2)) = 0;
    v6 = (int)(v3 + 1);
L_8c07c5da:;
    v3 = (int)v6;
    if (4 > v6) {
        goto L_8c07c5ce;
    }
    v7 = (int)g_8c469ae0;
    if (0x14 > v7) {
        g_8c469ae0 = v7 + 1;
        *(Object **)((char *)0x8c469ae4 + (v7 << 2)) = o;
    }
    t4 = operation_8c05bbf8();
    if (t4 != 0) {
        o->f100 = 0x13;
    } else {
        o->f100 = 1;
    }
    return o;
}
