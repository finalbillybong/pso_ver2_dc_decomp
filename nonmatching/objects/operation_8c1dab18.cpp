/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1dab18
 * function: operation_8c1dab18
 * language: c++
 * reference size: 936 bytes
 * compiled size: 956 bytes (+2.1%)
 * differing lines: 310 of 408 reference instruction lines
 * differing bytes: 794
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +20 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4e2f40 S_g8c4e2f40;
typedef struct S_g8c4e2f40_0 S_g8c4e2f40_0;
typedef struct S_g8c4e2f40_42c S_g8c4e2f40_42c;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct Arg0_a4 Arg0_a4;
typedef struct Arg0_a8 Arg0_a8;
typedef struct Arg0_b4 Arg0_b4;
typedef struct Arg0_b8 Arg0_b8;
typedef struct S_x62544 S_x62544;
typedef struct S_x63104 S_x63104;
typedef struct S_x63328 S_x63328;
typedef struct S_x63888 S_x63888;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int);
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x30];
    float f6c;
    float f70;
    char unknown74[0x14];
    int f88;
    char unknown8c[0x8];
    float f94;
    float f98;
    float f9c;
    int fa0;
    Arg0_a4 *fa4;
    Arg0_a8 *fa8;
    int fac;
    int fb0;
    Arg0_b4 *fb4;
    Arg0_b8 *fb8;
} ObjectData;
struct S_g8c4e2f40 {
    char unknown0[0x42c];
    S_g8c4e2f40_42c *f42c;
};
struct S_g8c4e2f40_42c {
    char unknown0[0x38];
    int f38;
    int f3c;
};
struct Arg0_38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
struct Arg0_38_4 {
    char unknown0[0x14];
    float f14;
};
struct S_x62544 {
    float f00;
};
struct S_x63104 {
    float f00;
};
struct S_x63328 {
    float f00;
};
struct S_x63888 {
    float f00;
};
extern int g_8c32ab0c;
extern int g_8c32ab18;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4e2f40 *g_8c4e2f40;
extern "C" void TObjectShared_ctor_8c01d1ec(Object *, void *);
extern "C" int operator_new_8c18de4c(int);
extern "C" int rand(void);
extern "C" int operation_8c1dab18(Object *o, int a1)
{
    Object **home = &o;
    float v1;
    int v16;
    int v14;
    int v11;
    char *v13;
    int v15;
    int v10;
    float v17;
    int v12;
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
    int t13;
    int t14;
    int t15;
    int t16;
    (void)home;
    {
        Object *base = o;
        TObjectShared_ctor_8c01d1ec(base, g_8c44be98);
        *(void **)((char *)base + 0x18) = (void *)(void *)0x8c277284;
        ((ObjectData *)base)->tag = (int)(g_8c32ab0c);
        ((ObjectData *)base)->size = 0x9c;
        ((ObjectData *)base)->f94 = 2000.0f;
        ((ObjectData *)base)->f98 = 0.0f;
    }
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2771c4;
    ((ObjectData *)o)->tag = (int)(g_8c32ab18);
    ((ObjectData *)o)->size = 0xbc;
    o->v6(a1);
    ((ObjectData *)o)->f38 = (Arg0_38 *)g_8c4e2f40->f42c->f38;
    ((ObjectData *)o)->f98 = ((ObjectData *)o)->f38->f04->f14;
    ((ObjectData *)o)->f28 = (int)(g_8c4e2f40->f42c->f3c);
    ((ObjectData *)o)->f9c = ((ObjectData *)o)->f6c + 50.0f;
    v1 = (float)((ObjectData *)o)->f70;
    if (0.0f > v1) {
        ((ObjectData *)o)->f70 = v1 * -1.0f;
    }
    ((ObjectData *)o)->fa0 = (int)(((ObjectData *)o)->f88);
    if (1 > ((ObjectData *)o)->fa0) {
        ((ObjectData *)o)->fa0 = 1;
    } else {
        if (((ObjectData *)o)->fa0 > 8) {
            ((ObjectData *)o)->fa0 = 8;
        }
    }
    t1 = operator_new_8c18de4c((int)(((ObjectData *)o)->fa0 << 2));
    ((ObjectData *)o)->fa4 = (Arg0_a4 *)(int)t1;
    t2 = operator_new_8c18de4c((int)(((ObjectData *)o)->fa0 << 2));
    ((ObjectData *)o)->fa8 = (Arg0_a8 *)(int)t2;
    t3 = operator_new_8c18de4c((int)(((ObjectData *)o)->fa0 * 0xc));
    ((ObjectData *)o)->fac = (int)t3;
    t4 = operator_new_8c18de4c((int)(((ObjectData *)o)->fa0 << 2));
    ((ObjectData *)o)->fb0 = (int)t4;
    t5 = operator_new_8c18de4c((int)(((ObjectData *)o)->fa0 * 0xc));
    ((ObjectData *)o)->fb4 = (Arg0_b4 *)(int)t5;
    t6 = operator_new_8c18de4c((int)(((ObjectData *)o)->fa0 * 0xc));
    ((ObjectData *)o)->fb8 = (Arg0_b8 *)(int)t6;
    v10 = (int)0x42c;
    v11 = (int)0;
    goto L_8c1dae26;
    v12 = (int)o;
    v13 = (char *)v11;
    for (;;) {
        t16 = rand();
        v14 = (int)((int)(v13) << 2);
        v15 = (int)((int)((float)t16 / 32768.0f * 4.0f) << 4);
        *(int *)((char *)((char *)((ObjectData *)o)->fa4 + 0x0) + (v14)) = (int)(*(int *)((char *)((char *)*(S_g8c4e2f40_0 **)((char *)((char *)g_8c4e2f40 + 0x0) + (v10)) + 0x8) + (v15)));
        *(int *)((char *)((char *)((ObjectData *)o)->fa8 + 0x0) + (v14)) = (int)(*(int *)((char *)((char *)*(S_g8c4e2f40_0 **)((char *)((char *)g_8c4e2f40 + 0x0) + (v10)) + 0xc) + (v15)));
        t7 = rand();
        v16 = (int)((int)(v13) * 0xc);
        ((S_x62544 *)((int)((ObjectData *)o)->fac + v16))->f00 = ((ObjectData *)o)->f9c * ((float)t7 / 32768.0f);
        ((S_x63104 *)((int)((ObjectData *)o)->fac + 4 + v16))->f00 = 0.0f;
        t8 = rand();
        ((S_x63328 *)((int)((ObjectData *)o)->fac + 8 + v16))->f00 = ((ObjectData *)o)->f9c * ((float)t8 / 32768.0f);
        {
            Object *base = o;
            v17 = (float)((ObjectData *)base)->f70;
            v17 = (float)(v17 * 0.5f);
            t9 = rand();
            ((S_x63888 *)((int)((ObjectData *)base)->fb0 + v14))->f00 = v17 * ((float)t9 / 32768.0f) + v17;
            t10 = rand();
            *(int *)((char *)((char *)((ObjectData *)o)->fb4 + 0x0) + (v16)) = (int)((float)t10 / 32768.0f * 65535.0f);
            t11 = rand();
            *(int *)((char *)((char *)((ObjectData *)o)->fb4 + 0x4) + (v16)) = (int)((float)t11 / 32768.0f * 65535.0f);
            t12 = rand();
            *(int *)((char *)((char *)((ObjectData *)o)->fb4 + 0x8) + (v16)) = (int)((float)t12 / 32768.0f * 65535.0f);
            t13 = rand();
            *(int *)((char *)((char *)((ObjectData *)o)->fb8 + 0x0) + (v16)) = (int)((float)t13 / 32768.0f * 4096.0f);
            t14 = rand();
            *(int *)((char *)((char *)((ObjectData *)o)->fb8 + 0x4) + (v16)) = (int)((float)t14 / 32768.0f * 4096.0f);
            t15 = rand();
            *(int *)((char *)((char *)((ObjectData *)o)->fb8 + 0x8) + (v16)) = (int)((float)t15 / 32768.0f * 4096.0f);
            v11 = (int)(v13 + 1);
        }
L_8c1dae26:;
        if (!(((ObjectData *)o)->fa0 > v11)) {
            v12 = (int)o;
            v13 = (char *)v11;
            break;
        }
        v12 = (int)o;
        v13 = (char *)v11;
    }
    return (int)(v12);
}
