/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d66e8
 * function: operation_8c1d66e8
 * language: c++
 * reference size: 148 bytes
 * compiled size: 144 bytes (-2.7%)
 * differing lines: 14 of 62 reference instruction lines
 * differing bytes: 136
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
typedef struct S_c8c1c7658 S_c8c1c7658;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_28 Arg0_30_28;
typedef struct Arg0_70 Arg0_70;
typedef struct S_vv1 S_vv1;
class S_c8c021ef8;
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
    virtual void v15();
    virtual void v16();
    virtual int v17();
};
typedef struct S_c8c021ef8Data {
    char unknown0[0x184];
    int f184;
} S_c8c021ef8Data;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x3c];
    Arg0_70 *f70;
};
struct Arg0_30 {
    char unknown0[0x28];
    Arg0_30_28 *f28;
};
struct Frame {
    int f00;
};
struct S_c8c1c7658 {
    char unknown0[0xc];
    unsigned char f0c;
};
struct S_vv1 {
    char unknown0[0x20];
    int f20;
};
extern S_g8c418248 *g_8c418248;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void call_8c1d677c(Object *);
extern "C" S_c8c1c7658 *operation_8c1c7658(void *);
extern "C" int call_8c163428(S_c8c021ef8 *, void *, Frame *);
extern "C" void operation_8c1d66e8(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    S_c8c021ef8 *t1;
    S_c8c1c7658 *t3;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0 && ((S_c8c021ef8Data *)t1)->f184 != 0) {
        call_8c1d677c(o);
        v1 = (S_vv1 *)o->f30->f28;
        t3 = operation_8c1c7658((void *)(o->f70));
        if (call_8c163428(t1, (void *)(o->f70), &frame) == 0) {
            if ((1 & frame.f00) != 0) {
                return;
            }
        }
        if (t3->f0c != 0) {
            v1->f20 = t1->v17() + 1;
        }
    }
}
