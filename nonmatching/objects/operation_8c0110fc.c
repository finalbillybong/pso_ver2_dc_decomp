/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0110fc
 * function: operation_8c0110fc
 * language: c
 * reference size: 76 bytes
 * compiled size: 76 bytes (+0.0%)
 * differing lines: 2 of 31 reference instruction lines
 * differing bytes: 4
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
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    short f00;
    char unknown2[0x2];
    int f04;
    short f08;
    char f0a;
    char unknownb[0x1];
    short f0c;
    char unknowne[0x2];
    int f10;
};
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x2];
    short f26;
    short f28;
};
extern int g_8c4621a8;
extern int call_8c3ca534(int, Frame *, int);
int operation_8c0110fc(Object *o, int a1, int a2)
{
    Frame frame;
    short v1;
    int t1;
    (&frame)->f00 = o->f28;
    (&frame)->f0a = 1;
    (&frame)->f0c = a2;
    (&frame)->f10 = a1;
    (&frame)->f04 = (int)(o->f20);
    v1 = (short)o->f26;
    g_8c4621a8 = 1;
    (&frame)->f08 = v1;
    t1 = call_8c3ca534(0x4121, (Frame *)((&frame)), 0);
    g_8c4621a8 = 0;
    return t1;
}
