/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c066bd4
 * function: operation_8c066bd4
 * language: c
 * reference size: 480 bytes
 * compiled size: 480 bytes (+0.0%)
 * differing lines: 62 of 197 reference instruction lines
 * differing bytes: 72
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
typedef struct Frame {
    Vector3 v[7];
} Frame;
typedef struct Elem {
    int f00;
    float f04;
    char unknown08[0x20];
    float f28;
} Elem;
typedef struct Object {
    char unknown0[0xdc];
    Elem *fdc;
    char unknowne0[0x22a];
    short f30a;
    char unknown30c[0x144];
    Vector3 f450;
    Vector3 f45c;
    char unknown468[0xc];
    Vector3 f474;
    char unknown480[0xc];
    Vector3 f48c;
    char unknown498[0x48];
    Vector3 f4e0;
    char unknown4ec[0x30];
    Vector3 f51c;
    char unknown528[0xa8];
    Vector3 f5d0;
} Object;
typedef struct S_g8c46891c {
    char unknown0[0x18];
    int f18;
    int f1c;
    int f20;
} S_g8c46891c;
extern S_g8c46891c *g_8c46891c;
extern void call_8c05afe0(Object *, Frame *);
extern void set_mode4_8c05b1dc(void *);
extern void set_mode2_8c05b1ec(void *);
void operation_8c066bd4(Object *o)
{
    Frame frame;
    int i;
    Vector3 *p;
    p = frame.v;
    *p++ = o->f450;
    *p++ = o->f48c;
    *p++ = o->f474;
    *p++ = o->f45c;
    *p++ = o->f5d0;
    *p++ = o->f4e0;
    *p++ = o->f51c;
    call_8c05afe0(o, &frame);
    for (i = 0; i < 7; i++) {
        int off = i * 0x2c;
        Elem *e = o->fdc;
        if (!(30.0f > *(float *)((char *)(int *)((char *)e + 4) + off))) {
            set_mode4_8c05b1dc((char *)e + off);
        } else {
            set_mode2_8c05b1ec((char *)e + off);
        }
    }
    if (o->f30a != 9) {
        set_mode4_8c05b1dc(&o->fdc[3]);
        set_mode4_8c05b1dc(&o->fdc[4]);
    }
    o->fdc[0].f28 = g_8c46891c->f20;
    o->fdc[1].f28 = g_8c46891c->f1c;
    o->fdc[2].f28 = g_8c46891c->f1c;
    o->fdc[3].f28 = g_8c46891c->f20;
    o->fdc[4].f28 = g_8c46891c->f20;
    o->fdc[5].f28 = g_8c46891c->f18;
    o->fdc[6].f28 = g_8c46891c->f20;
}
