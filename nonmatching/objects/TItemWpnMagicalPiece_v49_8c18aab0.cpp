/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18aab0
 * function: TItemWpnMagicalPiece_v49_8c18aab0
 * language: c++
 * reference size: 256 bytes
 * compiled size: 264 bytes (+3.1%)
 * differing lines: 32 of 105 reference instruction lines
 * differing bytes: 165
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * class header: src/include/classes/TItemWpnMagicalPiece.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_13c_s754 Arg0_13c_s754;
typedef struct S_vv5 S_vv5;
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
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual int v33();
};
typedef struct ObjectData {
    char unknown0[0x13c];
    Arg0_13c *f13c;
} ObjectData;
struct Frame {
    int f00;
    int f04;
    char unknown8[0x54];
    int f5c;
    char unknown60[0x8];
};
struct Arg0_13c_s754 {
    char unknown0[0x30];
    int f30;
};
struct S_vv5 {
    short f00;
    short f02;
};
extern "C" void operation_8c075894(Object *, void *, int, int);
extern "C" void create_effect_777c(void *, int);
extern "C" int operation_8c1aaabc(int);
extern "C" void call_8c18e044(void *, void *, int, int, int);
extern "C" void TTecZonde_ctor_8c0bb6fc(void *, void *, Frame *, int);
extern "C" void operation_8c076580(void *);
extern "C" void operation_8c07de9c();
extern "C" void TItemWpnMagicalPiece_v49_8c18aab0(Object *o)
{
    Frame frame;
    int v1;
    int v4;
    S_vv5 *v5;
    int t1;
    int t2;
    operation_8c075894(o, (void *)(((ObjectData *)o)->f13c), 2, (int)(&(&frame)->f5c));
    create_effect_777c((void *)(&(&frame)->f5c), 0x1be);
    operation_8c075894(o, (void *)(((ObjectData *)o)->f13c), 3, (int)(&(&frame)->f5c));
    create_effect_777c((void *)(&(&frame)->f5c), 0x1be);
    operation_8c075894(o, (void *)(((ObjectData *)o)->f13c), 0, (int)(&(&frame)->f5c));
    t1 = operation_8c1aaabc((int)((int)((ObjectData *)o)->f13c + 0x754));
    if ((short)t1 == 2) {
        t2 = o->v33();
        if (t2 != 1) {
            return;
        }
        v1 = (int)((Arg0_13c_s754 *)((char *)((ObjectData *)o)->f13c + 0x754))->f30;
        if (v1 < 0 || v1 > 0xa) {
            v4 = (int)0;
        } else {
            v4 = (int)v1;
        }
        if (v4 == 0) {
            return;
        }
        v5 = (S_vv5 *)((int)((ObjectData *)o)->f13c + 0x788);
        call_8c18e044((void *)(&(&frame)->f04), operation_8c07de9c, 0, 8, 0xb);
        (&frame)->f00 = 1;
        *(short *)&(&frame)->f04 = v5->f00;
        *(short *)((char *)(&frame) + 0x6) = v5->f02;
        TTecZonde_ctor_8c0bb6fc((void *)(((ObjectData *)o)->f13c), (void *)(&(&frame)->f5c), (Frame *)((&frame)), 3);
        return;
    }
    operation_8c076580((void *)o);
}
