/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ad1f0
 * function: TTecBarta_v07_8c0ad1f0
 * language: c++
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 54 of 83 reference instruction lines
 * differing bytes: 42
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation; review found and fixed behaviour defects of the generator draft; not
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
typedef struct Arg0_114 Arg0_114;
typedef struct Arg0_20 Arg0_20;
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
    virtual void v25(void *, void *, Block8);
};
typedef struct Arg1Data {
    char unknown0[0x20];
    unsigned short f20;
} Arg1Data;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0xb0];
    float fd4;
    char unknownd8[0x3c];
    Arg0_114 *f114;
    char unknown118[0x78];
    int f190;
};
struct Frame {
    Block_frame_0 f00;
};
extern "C" void TTecBarta_v07_8c0ad1f0(Object *o, Arg1 *a1)
{
    Frame frame;
    int v1;
    int v2;
    int n;
    v2 = 0;
    n = 0x20;
    for (v1 = 0; v1 < n; v1++) {
        if ((*(unsigned short *)((char *)((char *)o + 0x150) + (v1 << 1)) & 0xffff) == ((Arg1Data *)a1)->f20) {
            v2 = 1;
        }
    }
    if (v2 == 0) {
        *(short *)((char *)((char *)o + 0x150) + (o->f190 << 1)) = ((Arg1Data *)a1)->f20;
        o->f190 += 1;
        if (o->f190 >= n) {
            o->f190 = 0x1f;
        }
        (&frame)->f00.f04 = o->fd4;
        (&frame)->f00.f00 = 0x13;
        a1->v25(o->f20, o->f114, *(Block8 *)&(&frame)->f00);
    }
}
