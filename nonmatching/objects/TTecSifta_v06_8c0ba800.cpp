/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ba800
 * function: TTecSifta_v06_8c0ba800
 * language: c++
 * reference size: 296 bytes
 * compiled size: 296 bytes (+0.0%)
 * differing lines: 4 of 121 reference instruction lines
 * differing bytes: 8
 * provenance: generator draft (mode switch2)
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_c0 Arg0_c0;
class Arg1;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
class Arg1 {
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
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25(Arg0_20 *, int, Block8);
};
typedef struct Arg1Data {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x2e6];
    short f308;
} Arg1Data;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x54];
    float f78;
    char unknown7c[0x44];
    Arg0_c0 *fc0;
    char unknownc4[0x4];
    int fc8;
};
struct Arg0_20 {
    char unknown0[0x20];
    unsigned short f20;
};
extern "C" void operation_8c0ddb44(short, short, int);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void initialize_effect_pair_8c0ba9bc(void *, void *, void *, void *, unsigned short, void *);
extern "C" int create_effect(void *, int, int);
extern "C" void bind_id(void *, unsigned short);
extern "C" void TTecSifta_v06_8c0ba800(Object *o, Arg1 *a1)
{
    Frame frame;
    int v1;
    int t1;
    int t2;
    int t3;
    v1 = (int)(((Arg1Data *)a1)->f308 == 6);
    if (v1 == 0) {
        (&frame)->f00.f00 = 9;
        (&frame)->f00.f04 = o->f78;
        operation_8c0ddb44(o->f20->f20, ((Arg1Data *)a1)->f20, 9);
        a1->v25(o->f20, 0, *(Block8 *)&(&frame)->f00);
        if (o->f20->f20 == ((Arg1Data *)a1)->f20) {
            if (o->fc8 == 0) {
                return;
            }
            t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x44);
            if (t1 == 0) {
                return;
            }
            initialize_effect_pair_8c0ba9bc((void *)t1, (void *)(((char *)a1 + 0x3c)), (void *)(((char *)a1 + 0x324)), (void *)(o->fc0), (unsigned short)(((Arg1Data *)a1)->f20), (void *)(*(S_g8c44bea0 **)0x8c44bea0));
            return;
        }
        if (o->fc8 != 0) {
            t2 = create_effect((void *)(((char *)a1 + 0x324)), 0x1f9, 0x10);
            if (t2 != 0) {
                bind_id((void *)t2, (unsigned short)(((Arg1Data *)a1)->f20));
            }
            t3 = create_effect((void *)(((char *)a1 + 0x324)), 0x1fb, 0x10);
            if (t3 != 0) {
                bind_id((void *)t3, (unsigned short)(((Arg1Data *)a1)->f20));
            }
        }
    }
}
