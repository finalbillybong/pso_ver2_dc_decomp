/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19d718
 * function: operation_8c19d718
 * language: c++
 * reference size: 116 bytes
 * compiled size: 116 bytes (+0.0%)
 * differing lines: 8 of 40 reference instruction lines
 * differing bytes: 8
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
typedef struct Arg0_dc Arg0_dc;
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
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0xdc];
    Arg0_dc *fdc;
    char unknowne0[0x4];
    float fe4;
} ObjectData;
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
};
extern "C" void operation_8c0c5478(void *, void *, float);
extern "C" void operation_8c0c547c(void *, void *, float);
extern "C" void operation_8c19d718(Object *o)
{
    int t1;
    t1 = o->v11(200.0f, 10.0f);
    if (t1 != 0) {
        operation_8c0c5478((void *)(((char *)o + 0x3c)), (void *)((void *)0x8c306008), ((ObjectData *)o)->fe4 * 2.0f);
        operation_8c0c547c((void *)(((char *)o + 0x3c)), (void *)((void *)0x8c305fe8), 2.0f * ((ObjectData *)o)->fdc->f0c);
    }
}
