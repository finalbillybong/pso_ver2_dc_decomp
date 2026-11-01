/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ce5e8
 * function: operation_8c0ce5e8
 * language: c++
 * reference size: 580 bytes
 * compiled size: 580 bytes (+0.0%)
 * differing lines: 2 of 243 reference instruction lines
 * differing bytes: 2
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
typedef struct Arg0_33c Arg0_33c;
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
    virtual void v19();
    virtual int v20(int);
};
typedef struct ObjectData {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x28];
    int f334;
    char unknown338[0x4];
    Arg0_33c *f33c;
    char unknown340[0x14];
    unsigned short f354;
    char unknown356[0x1a];
    float f370;
    char unknown374[0x1c];
    int f390;
    char unknown394[0x8];
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x4];
    short f3ac;
    char unknown3ae[0x12];
    float f3c0;
    char unknown3c4[0x28];
    float f3ec;
} ObjectData;
struct Arg0_33c {
    char unknown0[0x8];
    float f08;
};
extern "C" int call_8c0c3128(Object *, float);
extern "C" float object_random_fraction(void *);
extern "C" int operation_8c0c33b8(Object *, float);
extern "C" int lookup_object_by_id(unsigned short);
extern "C" float distance_xz(void *, void *);
extern "C" void call_8c0c3308(Object *, float);
extern "C" void operation_8c0ce5e8(Object *o)
{
    int v3;
    unsigned short v1;
    float v2;
    int t1;
    int t2;
    int t3;
    float t4;
    int t5;
    int t6;
    float t7;
    int t8;
    switch (((ObjectData *)o)->f30a) {
    case 0:
    case 8:
        t1 = o->v20(0x1e);
        if (t1 == 0) {
            return;
        }
        t2 = call_8c0c3128(o, ((ObjectData *)o)->f3ec);
        if (t2 == 0) {
            return;
        }
        if (((((ObjectData *)o)->f3a4 & 1)) != 0) {
            return;
        }
        if (((ObjectData *)o)->f30a == 1) {
            return;
        }
        ((ObjectData *)o)->f39c = ((ObjectData *)o)->f30a;
        ((ObjectData *)o)->f390 = 1;
        return;
    case 1:
        t3 = o->v20(0x1e);
        if (t3 != 0) {
            call_8c0c3128(o, ((ObjectData *)o)->f3ec + 50.0f);
        }
        v3 = (int)((ObjectData *)o)->f334;
        if (v3 == 0) {
            if (((((ObjectData *)o)->f3a4 & 1)) != 0) {
                return;
            }
            if (((ObjectData *)o)->f30a == 8) {
                return;
            }
            ((ObjectData *)o)->f39c = ((ObjectData *)o)->f30a;
            ((ObjectData *)o)->f390 = 8;
            return;
        }
        if (!(80.0f > ((ObjectData *)o)->f3c0)) {
            ((ObjectData *)o)->f3c0 = 0.0f;
            if (0.0f > ((ObjectData *)o)->f370) {
                return;
            }
            t4 = object_random_fraction((void *)o);
            if (!(0.35f > t4)) {
                return;
            }
            t5 = operation_8c0c33b8(o, 150.0f);
            ((ObjectData *)o)->f354 = t5;
            v1 = ((ObjectData *)o)->f354;
            if ((v1 & 0xffff) != 0xffff) {
                t6 = lookup_object_by_id(v1);
                ((ObjectData *)o)->f334 = (int)t6;
                if (((((ObjectData *)o)->f3a4 & 1)) != 0) {
                    return;
                }
                if (((ObjectData *)o)->f30a == 9) {
                    return;
                }
                ((ObjectData *)o)->f39c = ((ObjectData *)o)->f30a;
                ((ObjectData *)o)->f390 = 9;
                return;
            }
            call_8c0c3128(o, ((ObjectData *)o)->f3ec + 50.0f);
            return;
        }
        if (v3 != 0) {
            t7 = distance_xz((void *)(((char *)o + 0x3c)), (void *)(v3 + 0x3c));
            v2 = ((ObjectData *)o)->f33c->f08;
            if (!((v2 * v2) > t7)) {
                return;
            }
            *(short *)((char *)o + 0x3ac) += 1;
            if (((ObjectData *)o)->f3ac > 3) {
                ((ObjectData *)o)->f3ac = 0;
                call_8c0c3308(o, 40.0f);
            }
            if (((((ObjectData *)o)->f3a4 & 1)) != 0) {
                return;
            }
            if (((ObjectData *)o)->f30a == 2) {
                return;
            }
            ((ObjectData *)o)->f39c = ((ObjectData *)o)->f30a;
            ((ObjectData *)o)->f390 = 2;
            return;
        }
        t8 = o->v20(0x1e);
        if (t8 != 0) {
            call_8c0c3128(o, ((ObjectData *)o)->f3ec + 50.0f);
        }
    }
}
