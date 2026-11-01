/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b76d4
 * function: TTecRaBarta_v05_8c0b76d4
 * language: c++
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 72 of 83 reference instruction lines
 * differing bytes: 58
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
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_d4 Arg0_d4;
typedef struct S_vv1 S_vv1;
class Arg1;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
struct S_vv1 {
    unsigned short f00;
};
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x6c];
    float f90;
    char unknown94[0x40];
    Arg0_d4 *fd4;
    char unknownd8[0x7c];
    int f154;
};
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
    virtual void v25(void *, void *, Block8);
};
typedef struct Arg1Data {
    char unknown0[0x20];
    short f20;
} Arg1Data;
struct Frame {
    Block_frame_0 f00;
};
extern "C" void TTecRaBarta_v05_8c0b76d4(Object *o, Arg1 *a1)
{
    Frame frame;
    int v3;
    int v2;
    S_vv1 *v1;
    int v4;
    v1 = (S_vv1 *)((char *)a1 + 0x20);
    v2 = (int)0;
    v3 = (int)0;
    while (0x20 > v3) {
        v4 = (int)v2;
        if ((*(unsigned short *)((char *)((char *)o + 0x114) + (v3 << 1)) & 0xffff) == v1->f00) {
            v4 = (int)1;
        }
        v2 = (int)v4;
        v3 = (int)(v3 + 1);
    }
    if (v2 == 0) {
        *(short *)((char *)((char *)o + 0x114) + (o->f154 << 1)) = ((Arg1Data *)a1)->f20;
        o->f154 += 1;
        if (o->f154 >= 0x20) {
            o->f154 = 0x1f;
        }
        (&frame)->f00.f04 = o->f90;
        (&frame)->f00.f00 = 2;
        a1->v25(o->f20, o->fd4, *(Block8 *)&(&frame)->f00);
    }
}
