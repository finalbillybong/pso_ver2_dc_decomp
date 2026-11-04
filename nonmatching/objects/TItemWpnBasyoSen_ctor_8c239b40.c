/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c239b40
 * function: TItemWpnBasyoSen_ctor_8c239b40
 * language: c
 * reference size: 152 bytes
 * compiled size: 152 bytes (+0.0%)
 * differing lines: 10 of 48 reference instruction lines
 * differing bytes: 11
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
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
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c0];
    char f1e0;
    char f1e1;
    char f1e2;
    char f1e3;
    char unknown1e4[0x18];
    int f1fc;
    char unknown200[0x20];
    float f220;
    short f224;
    char unknown226[0x6];
    void *f22c;
};
extern int g_8c33a360;
extern void TItemShootBasyoSen2_create_8c248e3c();
extern void hs_8c075398(Object *, int, int);
Object *TItemWpnBasyoSen_ctor_8c239b40(Object *o, int a1, int a2)
{
    hs_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c279330;
    o->tag = (int)(g_8c33a360);
    o->size = 0x234;
    o->f1e0 = 2;
    o->f1e1 = 1;
    o->f1e2 = 3;
    o->f1e3 = 4;
    o->f1fc |= 0x22;
    o->f224 = 0;
    o->f22c = TItemShootBasyoSen2_create_8c248e3c;
    o->f220 = 10.0f;
    return o;
}
