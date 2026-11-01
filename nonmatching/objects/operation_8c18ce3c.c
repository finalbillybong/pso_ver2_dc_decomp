/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18ce3c
 * function: operation_8c18ce3c
 * language: c
 * reference size: 272 bytes
 * compiled size: 288 bytes (+5.9%)
 * differing lines: 122 of 118 reference instruction lines
 * differing bytes: 267
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +16 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c18cf4c S_c8c18cf4c;
typedef struct S_c8c18cf4c_s1 S_c8c18cf4c_s1;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_10 Arg0_10;
typedef struct Arg0_4 Arg0_4;
typedef struct S_vv8 S_vv8;
typedef struct S_x59248 S_x59248;
struct Object {
    Arg0_0 *tag;
    Arg0_4 *f04;
    int f08;
    int f0c;
    Arg0_10 *f10;
    char unknown14[0x4];
    int dispatch;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    char unknown18[0x10];
};
struct S_c8c18cf4c {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_c8c18cf4c_s1 {
    char unknown0[0x1];
    unsigned char f01;
    unsigned char f02;
    unsigned char f03;
};
struct S_x59248 {
    Arg0_4 *f00;
    Arg0_0 *f04;
    int f08;
    int f0c;
    int f10;
};
struct Arg0_0 {
    char f00;
};
struct S_vv8 {
    char unknown0[0xc];
    int f0c;
};
struct Arg0_4 {
    int f00;
};
extern void call_8c18dce4(void *, void *);
extern void call_8c18e34c(void);
extern void call_8c18e588(Object *, void *);
extern int call_8c18d32c(Object *, void *);
extern S_c8c18cf4c *call_8c18cf4c(Object *, void *, Frame *);
extern int call_8c18e394(void *, void *);
extern void call_8c18e40c(int, void *);
extern void call_8c18d424(Object *, void *, S_c8c18cf4c *);
extern void call_8c18e488(Object *, void *, int);
void operation_8c18ce3c(Object *o)
{
    Frame frame;
    char *v7;
    S_vv8 *v8;
    int v5;
    int t1;
    S_c8c18cf4c *t2;
    int t3;
    call_8c18dce4((void *)(o->f10), (void *)(&(&frame)->f10));
    if ((&frame)->f14 == 0) {
        call_8c18e34c();
    }
    call_8c18e588(o, (void *)(&(&frame)->f10));
    if (o->tag == 0) {
        t1 = call_8c18d32c(o, (void *)(&(&frame)->f10));
        o->f0c = (int)(t1);
    } else {
        o->f0c = 0;
    }
    t2 = call_8c18cf4c(o, (void *)(&(&frame)->f10), (Frame *)((&frame)));
    (&frame)->f04 = t2->f01 | ((S_c8c18cf4c_s1 *)((char *)t2 + 0x1))->f01 << 8 | ((S_c8c18cf4c_s1 *)((char *)t2 + 0x1))->f02 << 0x10 | ((S_c8c18cf4c_s1 *)((char *)t2 + 0x1))->f03 << 0x18;
    t3 = call_8c18e394((void *)(((char *)t2 + 0x5)), (void *)(&(&frame)->f08));
    call_8c18e40c(t3, (void *)(&(&frame)->f0c));
    call_8c18d424(o, (void *)(&(&frame)->f10), t2);
    v7 = (char *)o->dispatch;
    v5 = (int)(&frame)->f00;
    ((S_x59248 *)(v7 + (&frame)->f0c))->f00 = o->f04;
    ((S_x59248 *)(v7 + (&frame)->f0c))->f04 = o->tag;
    ((S_x59248 *)(v7 + (&frame)->f0c))->f08 = (int)(o->f08);
    if (o->tag->f00 == 0x2a) {
        v8 = (S_vv8 *)(v7 + (&frame)->f0c);
        v8->f0c = (int)v8 + 0x10;
        ((S_x59248 *)(v7 + (&frame)->f0c))->f10 = o->f04->f00 + v5;
    } else {
        ((S_x59248 *)(v7 + (&frame)->f0c))->f0c = (int)o->f04 + v5;
    }
    call_8c18e488(o, (void *)(&(&frame)->f10), (int)((&frame)->f10 + (&frame)->f08));
}
