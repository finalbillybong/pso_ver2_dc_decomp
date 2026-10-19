typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46fec0 S_L8c46fec0;
typedef struct S_L8c46fec0_c S_L8c46fec0_c;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
typedef struct S_g8c4e18c0 S_g8c4e18c0;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x4];
    short f04;
};
struct S_vv1 {
    char unknown0[0x20];
    short f20;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
struct S_L8c46fec0 {
    char unknown0[0xc];
    S_L8c46fec0_c *f0c;
};
extern S_g8c418248 *g_8c418248;
extern int g_8c44be04;
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d59d8 *g_8c4d59d8;
extern S_L8c46fec0 g_8c46fec0;
extern void operation_8c0e7720(void *, int, int);
extern void set_global_8c01c1d0(void);
extern void operation_8c110b74(int);
extern int lookup_low_id(int);
extern void call_8c021cc0(int, void *);
void operation_8c0892a8(Object *o)
{
    S_vv1 *v1;
    int t1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    if (o->f04 != g_8c44be04) {
        operation_8c0e7720((void *)((void *)&g_8c46fec0), (int)(o->f04), (int)(*(S_g8c4e18c0 **)((char *)0x8c4e18c0 + (o->f04 << 3))));
        set_global_8c01c1d0();
        v1 = (S_vv1 *)g_8c46fe20;
        if (v1 != 0) {
            v1->f20 |= 1;
            if (g_8c4d59d8 != 0) {
                g_8c4d59d8->f04 |= 0x10;
            }
        }
        operation_8c110b74((int)((&g_8c46fec0)->f0c));
        t1 = lookup_low_id((int)g_8c418248);
        if (t1 != 0) {
            call_8c021cc0(t1, (void *)((&g_8c46fec0)->f0c));
        }
    }
    /* TODO 8c0892a8..8c089318
     * 8c0892a8 sts.l PR,@-r15
     * 8c0892aa mov.l 0x8c08931c,r1
     * 8c0892ac mov.w @(0x4,r4),r0
     * 8c0892ae mov.l @r1,r1
     * 8c0892b0 exts.w r0,r5
     * 8c0892b2 cmp/eq r1,r5
     * 8c0892b4 bt 0x8c089316
     * 8c0892b6 mov r5,r1
     * 8c0892b8 shll2 r1
     * 8c0892ba mov.l 0x8c089320,r0
     * 8c0892bc shll r1
     * 8c0892be mov.l 0x8c089324,r4
     * 8c0892c0 mov.l @(r0,r1),r6
     * 8c0892c2 mov.l 0x8c089328,r0
     * 8c0892c4 jsr @r0
     * 8c0892c6 nop
     * 8c0892c8 mov.l 0x8c08932c,r0
     * 8c0892ca jsr @r0
     * 8c0892cc nop
     * 8c0892ce mov.l 0x8c089330,r0
     * 8c0892d0 mov.l @r0,r5
     * 8c0892d2 tst r5,r5
     * 8c0892d4 bt 0x8c0892f4
     * 8c0892d6 mov r5,r0
     * 8c0892d8 add #0x20,r0
     * 8c0892da mov.w @r0,r0
     * 8c0892dc mov #0x20,r4
     * 8c0892de mov.l 0x8c089334,r1
     * 8c0892e0 or #0x1,r0
     * 8c0892e2 mov r0,r3
     * 8c0892e4 mov r4,r0
     * 8c0892e6 mov.w r3,@(r0,r5)
     * 8c0892e8 mov.l @r1,r1
     * 8c0892ea tst r1,r1
     * 8c0892ec bt 0x8c0892f4
     * 8c0892ee mov.w @(0x4,r1),r0
     * 8c0892f0 or #0x10,r0
     * 8c0892f2 mov.w r0,@(0x4,r1)
     * 8c0892f4 mov.l 0x8c089324,r0
     * 8c0892f6 mov.l @(0xc,r0),r4
     * 8c0892f8 mov.l 0x8c089338,r0
     * 8c0892fa jsr @r0
     * 8c0892fc nop
     * 8c0892fe mov.l 0x8c08933c,r0
     * 8c089300 mov.l @r0,r4
     * 8c089302 mov.l 0x8c089340,r0
     * 8c089304 jsr @r0
     * 8c089306 nop
     * 8c089308 tst r0,r0
     * 8c08930a bt 0x8c089316
     * 8c08930c mov.l 0x8c089324,r1
     * 8c08930e mov r0,r4
     * 8c089310 mov.l 0x8c089344,r0
     * 8c089312 jsr @r0
     * 8c089314 mov.l @(0xc,r1),r5
     * 8c089316 lds.l @r15+,PR
     * 8c089318 rts
     */
}
