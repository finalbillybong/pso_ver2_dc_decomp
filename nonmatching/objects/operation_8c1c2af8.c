/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c2af8
 * function: operation_8c1c2af8
 * language: c
 * reference size: 324 bytes
 * compiled size: 324 bytes (+0.0%)
 * differing lines: 44 of 108 reference instruction lines
 * differing bytes: 56
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
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x20];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x18];
    int f60;
    int f64;
    int f68;
    char unknown6c[0xac];
    int f118;
    char unknown11c[0x68];
    int f184;
    char unknown188[0x58];
    float f1e0;
    float f1e4;
    float f1e8;
    float f1ec;
    float f1f0;
    float f1f4;
    float f1f8;
    float f1fc;
    char unknown200[0x28];
    char f228;
    char unknown229[0x7];
    int f230;
    int f234;
};
extern char g_8c4e2ce0;
extern void operation_8c01c488(void *);
extern int operator_new_8c18de4c(int);
extern int operation_8c19b054(void);
Object *operation_8c1c2af8(Object *o)
{
    Object **home = &o;
    int t1;
    int t2;
    (void)home;
    operation_8c01c488((void *)o);
    o->dispatch = (void *)0x8c275bc0;
    t1 = operator_new_8c18de4c(0x1000);
    o->f118 = (int)(t1);
    o->f184 = 0;
    o->f3c = 17.0f;
    o->f40 = -10.5f;
    o->f44 = -40.0f;
    o->f60 = 0;
    o->f64 = 0xf3d5;
    o->f68 = 0;
    g_8c4e2ce0 = 0;
    t2 = operation_8c19b054();
    o->f228 = t2;
    o->f234 = o->f230 = 0;
    o->f1e0 = 583.0f;
    o->f1e4 = 257.0f;
    o->f1e8 = 615.0f;
    o->f1ec = 289.0f;
    o->f1f4 = o->f1f0 = 0.0f;
    o->f1fc = o->f1f8 = 1.0f;
    return o;
}
