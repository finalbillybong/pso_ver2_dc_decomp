/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c012884
 * function: operation_8c012884
 * language: c++
 * reference size: 356 bytes
 * compiled size: 352 bytes (-1.1%)
 * differing lines: 4 of 132 reference instruction lines
 * differing bytes: 278
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
class S_c8c021ef8;
struct Object {
    char unknown0[0x184];
    Arg0_184 *f184;
    char unknown188[0x2e];
    volatile unsigned short f1b6;
    char unknown1b8[0x14e];
    unsigned short f306;
};
class S_c8c021ef8 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15(int);
};
typedef struct S_c8c021ef8Data {
    char unknown0[0x34];
    int f34;
    char unknown38[0x344];
    int f37c;
} S_c8c021ef8Data;
struct Arg0_184 {
    char unknown0[0x1c];
    int f1c;
    int f20;
};
extern int g_8c2e2ad8;
extern int g_8c44be04;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4dc800;
extern int g_8c510ba0;
extern "C" char g_8c2e2c20[];
extern "C" char g_8c339ca0[];
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int operation_2391f4(void *);
extern "C" void call_8c02bc00(S_c8c021ef8 *, Object *, int);
extern "C" void operation_8c04a970(void *, int);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TFontSmallTask_ctor_4_8c0ee300(void *, int, int, int, int, int, short);
extern "C" void operation_8c012884(Object *o)
{
    S_c8c021ef8 *t1;
    int v11;
    int v5;
    int v1;
    int t2;
    int t3;
    int v14;
    int pm8;
    t1 = lookup_low_id(((int)o->f306 & 0xffff));
    if (0 != t1 && !(((((S_c8c021ef8Data *)t1)->f34 & 0x800)) != 0) && g_8c44be04 == ((S_c8c021ef8Data *)t1)->f37c) {
        v1 = (int)o->f184->f1c;
        if (o->f306 == o->f1b6) {
            if (g_8c2e2ad8 != 0) {
                int pm6;
                pm6 = operation_2391f4(((void *)0x8c41ce5c));
                t2 = pm6;
                if (1 == (unsigned char)t2) {
                    call_8c02bc00(t1, o, 1);
                }
                pm8 = v1;
                operation_8c04a970((void *)t1, 1);
                t2 = pm8;
                v5 = t2;
                goto L_8c012918;
            }
            operation_8c04a970((void *)t1, (int)(o->f184->f20));
            v5 = v1;
        } else {
            v5 = (int)(int)(0.8f * (float)v1);
        }
    L_8c012918:
        ;
        v14 = (int)v5;
        if (0 != g_8c2e2ad8) {
            v11 = (g_8c510ba0 != 0);
            v14 = (int)v5;
            if (0 != v11) {
                v14 = (int)v5;
                if (g_8c4dc800 == 1) {
                    v1 = (int)(int)((float)v5 * *(float *)(g_8c339ca0 + 0x4));
                    v14 = (int)v1;
                }
            }
        }
        t1->v15(v14);
        v1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x50);
        t3 = v1;
        if (t3 != 0) {
            void *pm4;
            pm4 = (void *)t3;
            TFontSmallTask_ctor_4_8c0ee300(pm4, (int)(((char *)o + 0x324)), -0xff01, 0x14, 0x14, (int)(g_8c2e2c20 + 0x1f5), (short)v14);
        }
    }
}
