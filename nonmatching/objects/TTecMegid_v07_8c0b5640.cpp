/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b5640
 * function: TTecMegid_v07_8c0b5640
 * language: c++
 * reference size: 236 bytes
 * compiled size: 236 bytes (+0.0%)
 * differing lines: 64 of 103 reference instruction lines
 * differing bytes: 47
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, constant loading; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original
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
    char unknown24[0xb0];
    float fd4;
    char unknownd8[0x3c];
    Arg0_114 *f114;
    char unknown118[0x78];
    int f190;
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
    virtual void v25(void *, void *, int, Block8);
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
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void TTecMegid_v07_8c0b5640(Object *o, Arg1 *a1)
{
    Frame frame;
    S_vv1 *v1;
    int v3;
    int v2;
    int v5;
    int n;
    v1 = (S_vv1 *)((char *)a1 + 0x20);
    v3 = (int)0;
    v2 = (int)0;
    n = 0x20;
    while (n > v2) {
        if ((*(unsigned short *)((char *)((char *)o + 0x150) + (v2 << 1)) & 0xffff) == v1->f00) {
            v3 = (int)1;
        }
        v2 = (int)(v2 + 1);
    }
    if (v3 == 0) {
        *(short *)((char *)((char *)o + 0x150) + (o->f190 << 1)) = ((Arg1Data *)a1)->f20;
        o->f190 += 1;
        if (o->f190 >= n) {
            o->f190 = 0x1f;
        }
        (&frame)->f00.f00 = 5;
        (&frame)->f00.f04 = o->fd4;
        if ((unsigned int)4 > (unsigned int)((Arg1Data *)a1)->f20) {
            v5 = (int)(((Arg1Data *)a1)->f308 == 3);
            if (v5 != 0) {
                return;
            }
        }
        a1->v25(o->f20, o->f114, n, *(Block8 *)&(&frame)->f00);
        play_se_8c05fbf8(0x20029, (void *)(((char *)a1 + 0x3c)), 0, 0);
    }
}
