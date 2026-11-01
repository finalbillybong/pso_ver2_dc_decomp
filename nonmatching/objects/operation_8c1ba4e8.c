/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ba4e8
 * function: operation_8c1ba4e8
 * language: c
 * reference size: 384 bytes
 * compiled size: 384 bytes (+0.0%)
 * differing lines: 4 of 160 reference instruction lines
 * differing bytes: 6
 * provenance: generator draft (mode bgotoext)
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
typedef struct Arg0_394 Arg0_394;
struct Object {
    char unknown0[0x394];
    Arg0_394 *f394;
    char unknown398[0x8];
    int f3a0;
    char unknown3a4[0x4];
    int f3a8;
    char unknown3ac[0x4];
    int f3b0;
    char unknown3b4[0xc];
    volatile unsigned short f3c0;
    volatile unsigned short f3c2;
    int f3c4;
};
extern int ring_actor_eligible(unsigned short);
extern int operation_8c1b8888(int);
extern float object_random_fraction(void *);
extern void operation_8c1ae0d8(void *, int);
extern void play_se_8c05fbf8(int, int, int, int);
void operation_8c1ba4e8(Object *o)
{
    int v1;
    int v2;
    int t1;
    float t2;
    int t3;
    float t4;
    t1 = ring_actor_eligible((unsigned short)(o->f3c0));
    if (t1 == 0) {
        o->f3c2 = o->f3c0 = 0xffff;
        t3 = operation_8c1b8888((int)o);
        t2 = object_random_fraction((void *)o);
        v1 = (int)((int)(t2 * 2.97f) + 4);
        if (o->f394 == 0) {
            return;
        }
        operation_8c1ae0d8((void *)(o->f394), (int)(v1 & 0x1f | (o->f3a8 & 0x1f) << 5 | (t3 & 0x1f) << 0xa | (o->f3b0 & 0xf) << 0xf | (t3 & 0xf) << 0x13 | (o->f3c0 & 0xffff & 0xf) << 0x17 | (o->f3c2 & 0xffff & 0xf) << 0x1b));
        return;
    }
    if (o->f3a0 == 0) {
        o->f3c2 = o->f3c0 & 0xffff;
        o->f3c0 = 0xffff;
        play_se_8c05fbf8(0x3002c, 0, 0, 0);
        o->f3c4 = 0;
        t4 = object_random_fraction((void *)o);
        v2 = (int)(int)(t4 * 15.99f);
        if (o->f394 != 0) {
            operation_8c1ae0d8((void *)(o->f394), (int)((v2 & 0x1f) << 0xa | ((o->f3a8 & 0x1f) << 5 | 0xf) | (o->f3b0 & 0xf) << 0xf | (v2 & 0xf) << 0x13 | (o->f3c0 & 0xffff & 0xf) << 0x17 | (o->f3c2 & 0xffff & 0xf) << 0x1b));
        }
    }
}
