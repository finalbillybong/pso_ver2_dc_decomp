/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c019d64
 * function: operation_8c019d64
 * language: c++
 * reference size: 496 bytes
 * compiled size: 496 bytes (+0.0%)
 * differing lines: 26 of 200 reference instruction lines
 * differing bytes: 25
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_g8c41bcfc S_g8c41bcfc;
typedef struct S_g8c41c610 S_g8c41c610;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_c Arg0_c;
typedef struct S_vv17 S_vv17;
typedef struct S_vv25 S_vv25;
typedef struct S_vv5 S_vv5;
typedef struct S_x78672 S_x78672;
class S_c8c01e790;
class S_c8c01e790 {
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
};
typedef struct S_c8c01e790Data {
    char unknown0[0xc74];
    Block8 fc74;
} S_c8c01e790Data;
struct S_vv5 {
    Block8 f00;
};
struct Frame {
    char unknown0[0x80];
};
struct S_x78672 {
    Block8 f00;
};
struct S_vv17 {
    Block8 f00;
};
struct S_g8c418a00 {
    char unknown0[0xb13c];
    void *fb13c;
};
struct S_vv25 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c418a00 *g_8c418a00;
extern S_g8c41bcfc *g_8c41bcfc;
extern int g_8c41bd00;
extern S_g8c41c610 *g_8c41c610;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" char g_8c2e3014[];
extern "C" int lookup_low_id(int);
extern "C" S_c8c01e790 *operation_8c01e790(int, int, void *);
extern "C" void sprintf_8c12b048(Frame *, void *, ...);
extern "C" void operation_8c011efc(Frame *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TWindowRoom_ctor_8c1cb998(void *, int);
extern "C" void operation_8c016950(void);
extern "C" void operation_8c019d64(Object *o, int a1, int a2)
{
    Frame frame;
    int v1;
    S_vv17 *v17;
    int v4;
    int v2;
    int v15;
    int v3;
    int v14;
    int v16;
    S_vv5 *v5;
    int v13;
    S_vv25 *v25;
    int t1;
    S_c8c01e790 *t2;
    int t3;
    S_c8c01e790 *t4;
    int t5;
    v2 = (int)0;
    v1 = (int)0x41c;
    while (a1 > v2) {
        v3 = (int)(v2 * 0x43c);
        v4 = (int)*(int *)((char *)((char *)o + 0xc) + (v3));
        if (v4 == a2) {
            t1 = lookup_low_id(a2);
            if (t1 == 0) {
                v5 = (S_vv5 *)((int)o + v3);
                t2 = operation_8c01e790(a2, 0, (void *)((int)v5 + 0x20));
                *(Block8 *)&((S_c8c01e790Data *)t2)->fc74 = *(Block8 *)&v5->f00;
                t2->v7();
                sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0x144)), a2);
                operation_8c011efc((Frame *)((&frame)));
                sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0x151)), v1);
                operation_8c011efc((Frame *)((&frame)));
            }
        }
        v2 = (int)(v2 + 1);
    }
    v14 = (int)0;
    v13 = (int)0xc74;
    while (a1 > v14) {
        v15 = (int)(v14 * 0x43c);
        v16 = (int)*(int *)((char *)((char *)o + 0xc) + (v15));
        if (v16 != a2) {
            t3 = lookup_low_id(v16);
            if (t3 == 0) {
                v17 = (S_vv17 *)((int)o + v15);
                t4 = operation_8c01e790((int)(*(Arg0_c **)((char *)((char *)o + 0xc) + (v15))), 4, (void *)((int)v17 + 0x20));
                *(Block8 *)&((S_x78672 *)((int)t4 + v13))->f00 = *(Block8 *)&v17->f00;
                t4->v7();
                sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0x15d)), (int)(*(Arg0_c **)((char *)((char *)o + 0xc) + (v15))));
                operation_8c011efc((Frame *)((&frame)));
            }
        }
        v14 = (int)(v14 + 1);
    }
    g_8c418a00->fb13c = (void *)(void *)0x8c0ddf38;
    if (g_8c41c610 != 0) {
        v25 = (S_vv25 *)g_8c41c610;
        v25->f04 |= 1;
        g_8c41c610 = (S_g8c41c610 *)0;
    }
    sprintf_8c12b048((Frame *)((void *)0x8c41bd14), (void *)((g_8c2e3014 + 0x16e)), (int)((void *)0x8c41c634), g_8c41bcfc, g_8c41bd00 + 1);
    t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x6c);
    if (t5 != 0) {
        TWindowRoom_ctor_8c1cb998((void *)t5, (int)((void *)0x8c41bd14));
    }
    g_8c41c610 = (S_g8c41c610 *)(int)t5;
    operation_8c016950();
}
