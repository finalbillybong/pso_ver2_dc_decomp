/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02e700
 * function: operation_8c02e700
 * language: c++
 * reference size: 168 bytes
 * compiled size: 172 bytes (+2.4%)
 * differing lines: 20 of 66 reference instruction lines
 * differing bytes: 98
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
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
class Object;
struct Frame {
    char f00;
    char unknown1[0x1];
    unsigned short f02;
    Block8 f04;
    int f0c;
    char unknown10[0x1];
    char f11;
    char unknown12[0x2];
    int f14;
    char unknown18[0xc];
    int f24;
    char unknown28[0xc];
};
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *);
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9(Frame *, int);
};
typedef struct ObjectData {
    char unknown0[0xa64];
    Block8 fa64;
    char unknowna6c[0x8];
    unsigned short fa74;
    char unknowna76[0x2a];
    int faa0;
} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02e700(Object *o)
{
    Frame frame;
    unsigned int pm2;
    unsigned short pm7;
    int pm4;
    char *pm1;
    int pm10;
    unsigned short pm5;
    char *pm8;
    Block8 *pm3;
    Frame *pm9;
    Block8 *pm11;
    unsigned short pm6;
    int pm12;
    pm12 = 0x31e;
    o->v4((pm12 + g_8c2e7ce0));
    ((void ( *) ( Frame *, int , int ))0x8c12b880)((&frame), 0, 0x34);
    pm2 = 0x8c12b154;
    (&frame)->f00 = (char)3;
    pm11 = &((ObjectData *)o)->fa64;
    pm3 = (pm11);
    pm5 = (unsigned short)0x34;
    (&frame)->f02 = pm5;
    pm9 = &frame;
    *(&(pm9)->f04) = *(pm3);
    pm6 = ((ObjectData *)o)->fa74;
    pm5 = (int)pm6;
    (&frame)->f0c = 0xffff & (int)pm5;
    pm7 = 0x3046;
    pm4 = (short)pm7;
    pm8 = (char *)o;
    pm10 = (int)pm4;
    pm1 = pm8 + pm10;
    (&frame)->f11 = (char)((ObjectData *)o)->faa0;
    ((void ( *) ( void *, void *, int ))pm2)(&(&frame)->f14, (pm1), 0x10);
    pm1 = (char *)o;
    ((void ( *) ( void *, void *, int ))0x8c12b154)(&(&frame)->f24, (0x3076 + pm1), 0x10);
    o->v9((&frame), (unsigned short)(int)(&frame)->f02);
}
