/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c258204
 * function: TODummyKeyCave01_update_8c258204
 * language: c++
 * reference size: 412 bytes
 * compiled size: 412 bytes (+0.0%)
 * differing lines: 2 of 159 reference instruction lines
 * differing bytes: 2
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
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
    char unknown0[0x28];
    int f28;
    char unknown2c[0x8];
    int f34;
    char unknown38[0x5c];
    int f94;
    int f98;
    unsigned short f9c;
    volatile unsigned short f9e;
    char unknowna0[0x4];
    float fa4;
    char unknowna8[0xc];
    float fb4;
    char unknownb8[0x4];
    int fbc;
    char unknownc0[0x4];
    int fc4;
    int fc8;
    int fcc;
} ObjectData;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" int operation_8c03d338(void);
extern "C" int operation_03d080(unsigned short);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TODummyKeyCave01Sound_ctor_8c2586c4(void *, int, int, int);
extern "C" void TODummyKeyCave01_update_8c258204(Object *o)
{
    unsigned short v18;
    int v5;
    float v12;
    float v13;
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        ((ObjectData *)o)->f34 &= -0x8000001;
    } else {
        ((ObjectData *)o)->f34 |= 0x8000000;
    }
    t2 = operation_8c03d338();
    if (t2 == 1) {
        ((ObjectData *)o)->f34 &= -0x8000001;
    }
    v18 = (unsigned short)((ObjectData *)o)->f9c;
    if ((unsigned int)0x100 > (unsigned int)(v18 & 0xffff)) {
        t3 = operation_03d080((unsigned short)v18);
        if ((unsigned short)(unsigned char)t3 != (((ObjectData *)o)->f9e & 0xffff)) {
            ((ObjectData *)o)->f9e = (unsigned char)t3;
            v5 = (int)0;
            if (((ObjectData *)o)->fc8 == 1 && (unsigned short)(unsigned char)t3 == 0) {
                v5 = (int)1;
            }
            if (v5 == 0) {
                t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x28);
                if (t4 != 0) {
                    TODummyKeyCave01Sound_ctor_8c2586c4((void *)t4, (int)o, (int)(((ObjectData *)o)->fc4), (int)(((ObjectData *)o)->fcc));
                }
            }
        }
    }
    if ((((ObjectData *)o)->f9e & 0xffff) == 1) {
        ((ObjectData *)o)->f28 = (int)(((ObjectData *)o)->f98);
        v12 = (float)((ObjectData *)o)->fb4;
        if (!(v12 > -0.7f)) {
            return;
        }
        ((ObjectData *)o)->fb4 = v12 + -0.0233333334f;
        if (!(-0.7f > ((ObjectData *)o)->fb4)) {
            return;
        }
        ((ObjectData *)o)->fb4 = -0.7f;
        return;
    }
    ((ObjectData *)o)->f28 = (int)(((ObjectData *)o)->f94);
    v13 = (float)((ObjectData *)o)->fb4;
    if (0.0f > v13) {
        ((ObjectData *)o)->fb4 = v13 - -0.0233333334f;
        if (((ObjectData *)o)->fb4 > 0.0f) {
            ((ObjectData *)o)->fb4 = 0.0f;
        }
    }
    if (((ObjectData *)o)->fbc == 1) {
        ((ObjectData *)o)->fa4 += 0.1f;
        if (1.0f > ((ObjectData *)o)->fa4) {
            return;
        }
        ((ObjectData *)o)->fa4 = 1.0f;
        ((ObjectData *)o)->fbc = 0;
        return;
    }
    ((ObjectData *)o)->fa4 -= 0.1f;
    if (!(((ObjectData *)o)->fa4 > 0.0f)) {
        ((ObjectData *)o)->fa4 = 0.0f;
        ((ObjectData *)o)->fbc = 1;
    }
}
