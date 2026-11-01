/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ed284
 * function: operation_8c1ed284
 * language: c
 * reference size: 360 bytes
 * compiled size: 352 bytes (-2.2%)
 * differing lines: 42 of 147 reference instruction lines
 * differing bytes: 324
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3b8 Arg0_3b8;
typedef struct Arg0_s418 Arg0_s418;
typedef struct Arg0_s42c Arg0_s42c;
typedef struct S_vv6 S_vv6;
typedef struct S_vv7 S_vv7;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
    char unknown30a[0xae];
    Arg0_3b8 *f3b8;
    char unknown3bc[0x5c];
    char f418;
    char unknown419[0x3f];
    float f458;
    char unknown45c[0x16c];
    int f5c8;
};
struct Arg0_s418 {
    char unknown0[0x14];
    short f14;
};
struct Arg0_s42c {
    short f00;
    short f02;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    char f04;
    char f05;
    short f06;
    short f08;
    short f0a;
    char unknownc[0x28];
};
struct S_vv6 {
    char f00;
};
struct S_vv7 {
    char f00;
};
extern int object_ready(void *);
extern void operation_8c184cf8(void *);
extern int operation_8c185334(void *);
extern void operation_8c0af2a0(int, Object *);
extern void set_link_state_8c0d9cdc(void *, short, short);
extern void call_8c18e044(void *, void *, int, int, int);
extern int operation_8c185360(void *);
extern int call_8c18e768(int, int);
extern void operation_8c0368a8(void *);
extern void operation_8c01ef40();
void operation_8c1ed284(Object *o)
{
    Frame frame;
    int v3;
    char *v5;
    int v8;
    SBlock4 *v6;
    SBlock4 *v7;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    Arg0_s42c *p;
    t1 = object_ready((void *)o);
    if (t1 == 0) {
        return;
    }
    o->f5c8 = 0x384;
    operation_8c184cf8((void *)(&o->f418));
    t2 = operation_8c185334((void *)(&o->f418));
    operation_8c0af2a0((int)((short)t2), o);
    if (o->f3b8 != 0) {
        p = (Arg0_s42c *)((int)((char *)o + 0x418) + 0x14);
        set_link_state_8c0d9cdc((void *)(o->f3b8), p->f00, p->f02);
    }
    if (o != 0) {
        v3 = (int)(o->f308 == 2);
        if (v3 != 0) {
            return;
        }
    }
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f00 = 0x3d;
    (&frame)->f01 = 1;
    (&frame)->f0a = 0;
    (&frame)->f08 = 0;
    (&frame)->f06 = 0;
    (&frame)->f05 = 0;
    (&frame)->f04 = 0;
    v5 = (char *)((char *)(&frame) + 0xc);
    call_8c18e044(v5, operation_8c01ef40, 0, 4, 0xa);
    (&frame)->f00 = 0x49;
    (&frame)->f01 = 0xd;
    (&frame)->f02 = o->f20;
    t3 = operation_8c185334((void *)(&o->f418));
    (&frame)->f04 = t3;
    (&frame)->f0a = o->f418;
    t4 = operation_8c185360((void *)(&o->f418));
    (&frame)->f06 = (short)t4;
    (&frame)->f08 = (int)o->f458;
    v6 = (SBlock4 *)v5;
    v7 = (SBlock4 *)((int)((char *)o + 0x418) + 0x14);
    v8 = (int)0;
    while ((short)t4 > v8) {
        *v6++ = *v7++;
        v8 = (int)(v8 + 1);
    }
    t5 = call_8c18e768((int)((unsigned char)(0x34 - (0xa - (&frame)->f06 << 2))), 4);
    (&frame)->f01 = t5;
    operation_8c0368a8((void *)(&frame));
}
