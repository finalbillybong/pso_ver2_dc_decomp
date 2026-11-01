/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ec2d0
 * function: operation_8c1ec2d0
 * language: c
 * reference size: 408 bytes
 * compiled size: 408 bytes (+0.0%)
 * differing lines: 18 of 176 reference instruction lines
 * differing bytes: 25
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
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3b8 Arg0_3b8;
typedef struct Arg0_s3dc Arg0_s3dc;
typedef struct S_vv6 S_vv6;
typedef struct S_vv8 S_vv8;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
    char unknown30a[0xae];
    Arg0_3b8 *f3b8;
    char unknown3bc[0x20];
    short f3dc;
};
struct Arg0_s3dc {
    char unknown0[0x2];
    short f02;
};
struct Frame {
    char f00;
    char f01;
    unsigned char f02;
    char f03;
    short f04;
    char f06;
    char f07;
    short f08;
    char f0a;
    char f0b;
    short f0c;
    char f0e;
    char f0f;
    char f10;
    char f11;
    char unknown12[0x2a];
};
struct S_vv6 {
    char f00;
};
struct S_vv8 {
    char f00;
};
extern int operation_8c247888(void *);
extern void operation_8c0af2a0(int, Object *);
extern void set_link_state_8c0d9cdc(void *, short, short);
extern int call_8c247730(void *, int);
extern void split14_8c247870(signed char, void *, void *);
extern void operation_8c0368a8(void *);
extern void call_8c18e044(void *, void *, int, int, int);
extern int operation_8c2478a8(void *);
extern int call_8c18e768(int, int);
extern void operation_8c01ef40();
static inline int pad_width(int n)
{
    return 0x30 - (0xa - n << 2);
}
void operation_8c1ec2d0(Object *o)
{
    Frame frame;
    int v3;
    char *v5;
    int v7;
    int t2;
    S_vv6 *v6;
    int t1;
    S_vv8 *v8;
    int t3;
    int t4;
    int t5;
    int cnt;
    SBlock4 *d;
    SBlock4 *sp;
    t1 = operation_8c247888((void *)(((char *)o + 0x3bc)));
    operation_8c0af2a0((int)((short)t1), o);
    if (o->f3b8 != 0) {
        SBlock4 *lk = (SBlock4 *)((char *)(int *)((char *)o + 0x3bc) + 0x20);
        set_link_state_8c0d9cdc((void *)(o->f3b8), lk->halves[0], lk->halves[1]);
    }
    t2 = operation_8c247888((void *)(((char *)o + 0x3bc)));
    t3 = call_8c247730((void *)(((char *)o + 0x3bc)), t2);
    split14_8c247870((signed char)t3, (void *)(&(&frame)->f01), (void *)(&frame));
    if (o != 0) {
        v3 = (int)(o->f308 == 2);
        if (v3 != 0) {
            return;
        }
    }
    (&frame)->f02 = 0x1a;
    (&frame)->f03 = 1;
    (&frame)->f02 = 0x3d;
    (&frame)->f03 = 1;
    (&frame)->f08 = 0;
    (&frame)->f07 = 0;
    (&frame)->f06 = 0;
    (&frame)->f02 = 0x8d;
    (&frame)->f03 = 2;
    (&frame)->f04 = o->f20;
    (&frame)->f06 = (&frame)->f00;
    operation_8c0368a8((void *)(&(&frame)->f02));
    (&frame)->f0a = 0x1a;
    (&frame)->f0b = 1;
    (&frame)->f0a = 0x3d;
    (&frame)->f0b = 1;
    (&frame)->f11 = 0;
    (&frame)->f10 = 0;
    (&frame)->f0f = 0;
    (&frame)->f0e = 0;
    v5 = (char *)((char *)(&frame) + 0x12);
    call_8c18e044(v5, operation_8c01ef40, 0, 4, 0xa);
    (&frame)->f0a = 0x47;
    (&frame)->f0b = 0xc;
    (&frame)->f0c = o->f20;
    (&frame)->f0e = t2;
    (&frame)->f10 = (&frame)->f01;
    t4 = operation_8c2478a8((void *)(((char *)o + 0x3bc)));
    cnt = (short)t4;
    (&frame)->f11 = cnt;
    d = (SBlock4 *)v5;
    sp = (SBlock4 *)((char *)(int *)((char *)o + 0x3bc) + 0x20);
    for (v7 = 0; cnt > v7; v7++) {
        *d++ = *sp++;
    }
    t5 = call_8c18e768((int)((unsigned char)pad_width((&frame)->f11)), 4);
    (&frame)->f0b = t5;
    operation_8c0368a8((void *)(&(&frame)->f0a));
}
