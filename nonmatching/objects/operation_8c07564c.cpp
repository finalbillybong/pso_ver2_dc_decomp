/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07564c
 * function: operation_8c07564c
 * language: c++
 * reference size: 176 bytes
 * compiled size: 176 bytes (+0.0%)
 * differing lines: 8 of 69 reference instruction lines
 * differing bytes: 14
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
typedef struct CBlock15 {
    char bytes[15];
} CBlock15;
typedef struct Frame Frame;
typedef struct Arg0_13c Arg0_13c;
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
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual int v41();
};
typedef struct ObjectData {
    char unknown0[0x136];
    unsigned char f136;
    char unknown137[0x5];
    Arg0_13c *f13c;
    char unknown140[0x84];
    int f1c4;
    char unknown1c8[0x54];
    int f21c;
} ObjectData;
struct Arg0_13c {
    char unknown0[0x20];
    short f20;
};
struct Frame {
    char f00;
    char unknown1[0xf];
};
extern "C" void operation_8c076e38(Object *);
extern "C" int operation_8c1931d4(short, int, unsigned char, int);
extern "C" void operation_8c07564c(Object *o)
{
    Frame frame;
    short v1;
    unsigned char c;
    int t1;
    int t2;
    int t3;
    operation_8c076e38(o);
    c = ((ObjectData *)o)->f136;
    if ((unsigned int)0x89 > (unsigned int)c) {
        t1 = operation_8c1931d4(((ObjectData *)o)->f13c->f20, 0, c, (int)(((ObjectData *)o)->f21c));
        ((ObjectData *)o)->f1c4 = (int)t1;
        return;
    }
    *(CBlock15 *)&(&frame)->f00 = *(CBlock15 *)&*(char *)0x8c2fd6e8;
    v1 = (short)((ObjectData *)o)->f13c->f20;
    t2 = o->v41();
    t3 = operation_8c1931d4((short)v1, 0, *(unsigned char *)((char *)&(&frame)->f00 + ((unsigned char)t2)), (int)(((ObjectData *)o)->f21c));
    ((ObjectData *)o)->f1c4 = (int)t3;
}
