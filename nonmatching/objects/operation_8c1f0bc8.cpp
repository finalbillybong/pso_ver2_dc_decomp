/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1f0bc8
 * function: operation_8c1f0bc8
 * language: c++
 * reference size: 316 bytes
 * compiled size: 316 bytes (+0.0%)
 * differing lines: 52 of 112 reference instruction lines
 * differing bytes: 52
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
typedef struct S_g8c2e72d8 S_g8c2e72d8;
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
    virtual void v18();
    char unknown1c[0x4];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0xb0];
    int fe8;
    char unknownec[0x21e];
    short f30a;
    short f30c;
    char unknown30e[0xa];
    float f318;
    float f31c;
    float f320;
    char unknown324[0x2c];
    int f350;
    char unknown354[0x214];
    int f568;
    char unknown56c[0x14];
    float f580;
    float f584;
    float f588;
    char unknown58c[0x1c];
    float f5a8;
};
typedef struct ObjectData {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0xb0];
    int fe8;
    char unknownec[0x21e];
    short f30a;
    short f30c;
    char unknown30e[0xa];
    float f318;
    float f31c;
    float f320;
    char unknown324[0x2c];
    int f350;
    char unknown354[0x214];
    int f568;
    char unknown56c[0x14];
    float f580;
    float f584;
    float f588;
    char unknown58c[0x1c];
    float f5a8;
} ObjectData;
extern int g_8c418248;
extern "C" void operation_8c1e8e60(int, short, int);
extern "C" void operation_8c05428c(void *, int, int);
extern "C" void operation_8c02b1e0(int);
extern "C" void operation_8c02a764(int, int);
extern "C" int operation_02c350(void *);
extern "C" void operation_021f88(void *, int, short);
extern "C" void operation_8c1f0bc8(Object *o)
{
    unsigned short v1;
    int v2;
    int v5;
    int t1;
    operation_8c1e8e60((int)o, o->f30a, 6);
    o->f34 &= -0xf01;
    o->f350 &= -0x81;
    o->f568 = 0;
    o->fe8 &= -0x41;
    o->f320 = 0.0f;
    o->f31c = 0.0f;
    o->f318 = 0.0f;
    o->f580 = 0.0f;
    o->f584 = 0.0f;
    o->f588 = 0.0f;
    operation_8c05428c((void *)o, 0, 1);
    o->f5a8 = 0.0f;
    operation_8c02b1e0((int)o);
    o->v18();
    v1 = (unsigned short)o->f20;
    v2 = (int)(v1 == g_8c418248);
    if (v2 != 0) {
        operation_8c02a764((int)o, 6);
    }
    o->f30c = 1;
    v5 = (int)0;
    if (((o->f34 & 0x100000)) != 0) {
        v5 = (int)1;
    }
    t1 = operation_02c350((void *)o);
    operation_021f88((void *)o, 0x15, *(short *)((char *)((char *)*(S_g8c2e72d8 **)((char *)0x8c2e72d8 + (v5 << 2)) + 0x0) + ((short)t1 << 1)));
}
