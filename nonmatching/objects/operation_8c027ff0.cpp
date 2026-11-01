/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c027ff0
 * function: operation_8c027ff0
 * language: c++
 * reference size: 628 bytes
 * compiled size: 628 bytes (+0.0%)
 * differing lines: 114 of 251 reference instruction lines
 * differing bytes: 394
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
typedef struct Block72 {
    int words[18];
} Block72;
typedef struct Block80 {
    int words[20];
} Block80;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct Object Object;
typedef struct Arg0_bc8 Arg0_bc8;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct S_vv15 S_vv15;
typedef struct S_vv22 S_vv22;
typedef struct S_vv38 S_vv38;
typedef struct S_vv38_0 S_vv38_0;
class S_c8c03b55c;
struct S_vv1 {
    int f00;
};
struct Object {
    char unknown0[0x330];
    short f330;
    short f332;
    char unknown334[0x1c];
    int f350;
    char unknown354[0x5c];
    int f3b0;
    char unknown3b4[0x10c];
    Block72 f4c0;
    char unknown508[0x2dc];
    Block80 f7e4;
    char unknown834[0x394];
    Arg0_bc8 *fbc8;
};
struct Arg1 {
    char f00;
    char f01;
    char f02;
    char f03;
    char unknown4[0x3];
    char f07;
    char unknown8[0x368];
    Block80 f370;
    Block72 f3c0;
};
struct FrameX {
    S_frame_0 *f00;
    char unknown4[0x78];
};
struct S_vv15 {
    int f00;
};
struct S_vv22 {
    int f00;
};
struct S_vv38 {
    S_vv38_0 *f00;
};
class S_c8c03b55c {
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
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21(int);
    virtual void v22(int);
};
typedef struct S_c8c03b55cData {

} S_c8c03b55cData;
extern int g_8c470344;
extern int g_8c470348;
extern "C" int operation_8c16ac98(void *, int);
extern "C" S_c8c03b55c *operation_8c03b55c(void *, int);
extern "C" void export_state_8c16b234(void *, void *);
extern "C" void operation_8c16b274(int);
extern "C" int call_8c04a838(Object *);
extern "C" int call_8c04a900(Object *);
extern "C" int operation_8c1a7128(int);
extern "C" void operation_8c02c390(void *, void *, int);
extern "C" void split14_8c247870(signed char, void *, void *);
extern "C" void set_330(void *, short);
extern "C" int operation_8c02c338(void *);
extern "C" void call_8c02ca48(Object *, Arg1 *);
typedef struct Frame2 {
    int f00;
    S_c8c03b55c *list[30];
} Frame2;
extern "C" void operation_8c027ff0(Object *o, Arg1 *a1)
{
    Frame2 frame;
    int k4;
    int *q;
    short j;
    int flag;
    int n;
    int k;
    short saved;
    S_c8c03b55c *t;
    char *d;
    S_c8c03b55c **p;
    int k8;
    int i;
    flag = 0x1000;
    q = (int *)0x8c004000;
    for (j = 0; j < (unsigned int)flag; j++) {
        if (*q++ != 0) {
            o->f3b0 |= 1;
            break;
        }
    }
    *(int *)((char *)o + 0x350) |= 0x800000;
    a1->f00 = o->fbc8 == 0 ? 0 : operation_8c16ac98(o->fbc8, (int)((char *)a1 + 4));
    frame.f00 = o->f330;
    saved = o->f332;
    q = (int *)frame.list;
    for (flag = 0; flag < 30; flag++) {
        *q++ = 0;
    }
    n = 0;
    d = (char *)frame.list;
    for (i = 0; i != 13; i++) {
        t = operation_8c03b55c((char *)o + 0xbcc, i);
        if (t != 0) {
            t->v22(1);
            *(S_c8c03b55c **)d = t;
            d += 4;
            n++;
        }
    }
    a1->f00 = n;
    d = (char *)a1 + 4;
    p = frame.list;
    for (n = 0; n < 30; n++) {
        if (*p != 0) {
            export_state_8c16b234(*p, d);
            p++;
        } else {
            operation_8c16b274((int)d);
        }
        d += 0x1c;
    }
    a1->f01 = call_8c04a838(o);
    a1->f02 = call_8c04a900(o);
    operation_8c02c390(o, (char *)a1 + 0x34c, operation_8c1a7128((int)o));
    a1->f370 = o->f7e4;
    a1->f3c0 = o->f4c0;
    k8 = 0x408;
    k4 = 0x404;
    for (i = 0; i < 0x13; i++) {
        split14_8c247870(((char *)o + k4)[(short)i], (char *)a1 + i + k8, (char *)a1 + i * 0x1c + 6);
    }
    k = 0xbcc;
    for (i = 0; i != 13; i++) {
        t = operation_8c03b55c((char *)o + k, i);
        if (t != 0) {
            t->v21(1);
        }
    }
    set_330(o, frame.f00);
    o->f332 = saved;
    a1->f03 = operation_8c02c338(o);
    flag = 1;
    if (g_8c470344 == 0 && g_8c470348 == 0) {
        flag = 0;
    }
    if (flag) {
        a1->f07 |= 0x40;
    }
    call_8c02ca48(o, a1);
    o->f350 &= 0xff7fffff;
}
