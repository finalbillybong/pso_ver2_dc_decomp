/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b104c
 * function: operation_8c0b104c
 * language: c++
 * reference size: 108 bytes
 * compiled size: 108 bytes (+0.0%)
 * differing lines: 4 of 46 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode switch2ext)
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
typedef struct Object Object;
typedef struct Arg0_114 Arg0_114;
typedef struct Arg0_20 Arg0_20;
class Arg1;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
    char unknown24[0xb0];
    float fd4;
    char unknownd8[0x3c];
    Arg0_114 *f114;
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

} Arg1Data;
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c0b104c(Object *o, Arg1 *a1)
{
    Frame frame;
    (&frame)->f00.f04 = o->fd4;
    (&frame)->f00.f00 = 1;
    a1->v25(o->f20, o->f114, *(Block8 *)&(&frame)->f00);
    play_se_8c05fbf8(0x20028, (void *)(((char *)a1 + 0x3c)), 0, 0);
    o->f04 |= 1;
}
