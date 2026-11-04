/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c075398
 * function: operation_8c075398
 * language: c++
 * reference size: 552 bytes
 * compiled size: 556 bytes (+0.7%)
 * differing lines: 30 of 208 reference instruction lines
 * differing bytes: 214
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, constant loading; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1c7658 S_c8c1c7658;
typedef struct Arg2 Arg2;
typedef struct S_x77728 S_x77728;
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
    virtual void v18(int);
};
typedef struct ObjectData {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x11a];
    unsigned char f136;
    char unknown137[0xa1];
    int f1d8;
    int f1dc;
    char f1e0;
    char f1e1;
    char f1e2;
    char f1e3;
    char f1e4;
    char f1e5;
    unsigned char f1e6;
    unsigned char f1e7;
    char unknown1e8[0x14];
    int f1fc;
    char unknown200[0xc];
    short f20c;
    char unknown20e[0x2];
    int f210;
    int f214;
    int f218;
    int f21c;
    float f220;
    short f224;
    char unknown226[0x2];
    int f228;
    void *f22c;
    int f230;
} ObjectData;
struct S_c8c1c7658 {
    char unknown0[0x10];
    unsigned char f10;
    char f11;
    unsigned char f12;
};
struct Arg2 {
    char unknown0[0x3];
    char f03;
    char f04;
};
struct S_x77728 {
    char f00;
    char f01;
};
extern "C" void TItemEquipBase_ctor_8c20989c(void *);
extern "C" S_c8c1c7658 *operation_8c1c7658(void *);
extern "C" int operation_8c1c7524(void *);
extern "C" int operation_8c15842c(int);
extern "C" int operation_8c1c9398(void *);
extern "C" void operation_8c075604(void *);
extern "C" void operation_1ac120();
typedef struct Pair2 {
    char a;
    char b;
} Pair2;
extern "C" Object *operation_8c075398(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    unsigned char v4;
    int k;
    int v16;
    int v15;
    S_c8c1c7658 *t1;
    int t2;
    int t3;
    int t4;
    int t5;
    (void)home;
    TItemEquipBase_ctor_8c20989c((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2630a8;
    o->v18(6);
    t1 = operation_8c1c7658((void *)a2);
    if (t1 != 0) {
        ((ObjectData *)o)->f1e5 = t1->f10;
        ((ObjectData *)o)->f20c = t1->f11;
    } else {
        ((ObjectData *)o)->f1e5 = 0;
        ((ObjectData *)o)->f20c = 0;
    }
    ((ObjectData *)o)->f1e4 = a2->f03;
    t2 = operation_8c1c7524((void *)a2);
    if (t1 != 0) {
        v4 = (unsigned char)t1->f12;
        if (v4 == 0) {
            ((ObjectData *)o)->f1e6 = a2->f04;
            goto L_8c075436;
        }
        ((ObjectData *)o)->f1e6 = v4;
    } else {
        ((ObjectData *)o)->f1e6 = 0;
    }
L_8c075436:;
    if (t2 == 0) {
        ((ObjectData *)o)->f1e6 |= 0x80;
    }
    v15 = (int)((char *)a2 + 0x6);
    v16 = (int)0;
    while (v16 != 3) {
        *(Pair2 *)((char *)(int *)((char *)o + 0x1e8) + (v16 << 1)) = *(Pair2 *)((char *)v15 + (v16 << 1));
        v16 = (int)(v16 + 1);
    }
    ((ObjectData *)o)->f228 = 0;
    ((ObjectData *)o)->f230 = 0;
    ((ObjectData *)o)->f22c = (void *)operation_1ac120;
    ((ObjectData *)o)->f224 = 1;
    ((ObjectData *)o)->f21c = -1;
    ((ObjectData *)o)->f1d8 = 0;
    ((ObjectData *)o)->f1dc = 0;
    ((ObjectData *)o)->f1e0 = -1;
    ((ObjectData *)o)->f1e1 = -1;
    ((ObjectData *)o)->f1e2 = -1;
    ((ObjectData *)o)->f1e3 = -1;
    ((ObjectData *)o)->f1fc = 0;
    ((ObjectData *)o)->f220 = 19.0f;
    ((ObjectData *)o)->f210 = 0;
    ((ObjectData *)o)->f214 = 0;
    ((ObjectData *)o)->f218 = 0;
    k = ((ObjectData *)o)->f136;
    if ((unsigned int)0x89 > (unsigned int)(unsigned char)k) {
        t3 = operation_8c15842c(k);
        ((ObjectData *)o)->f1e7 = t3;
    } else {
        t4 = operation_8c1c9398((void *)a2);
        t5 = operation_8c15842c(t4);
        ((ObjectData *)o)->f1e7 = t5;
        if ((unsigned int)((ObjectData *)o)->f1e7 >= (unsigned int)0xf) {
            ((ObjectData *)o)->f1e7 = 0;
        }
    }
    operation_8c075604((void *)o);
    return o;
}
