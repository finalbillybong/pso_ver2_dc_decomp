typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Block_frame_8 {
    float f00;
    float f04;
    float f08;
} Block_frame_8;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    int f04;
};
struct S_c8c021ef8 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x2a0];
    short f308;
    char unknown30a[0x72];
    int f37c;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
    Block_frame_8 f08;
    int f14;
};
extern S_g8c418248 *g_8c418248;
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c0368ec(void *);
void operation_8c021dcc(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    int v5;
    S_c8c021ef8 *t1;
    S_c8c021ef8 *t2;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    t1 = lookup_low_id((int)(o->f02));
    if (t1 != 0) {
        v1 = (int)o->f04;
        v2 = (int)(v1 >= 0);
        if (v2 != 0) {
            t1->f37c = (int)(v1);
        }
    }
    t2 = lookup_low_id((int)g_8c418248);
    if (t2 != 0) {
        if (t2 != 0) {
            v5 = (int)(t2->f308 == 2);
            if (v5 != 0) {
                return;
            }
        }
        (&frame)->f00 = 0x1a;
        (&frame)->f01 = 1;
        (&frame)->f04 = 0;
        (&frame)->f08.f08 = 0.0f;
        (&frame)->f08.f04 = 0.0f;
        (&frame)->f08.f00 = 0.0f;
        (&frame)->f14 = 0;
        (&frame)->f00 = 0x20;
        (&frame)->f01 = 6;
        (&frame)->f02 = t2->f20;
        (&frame)->f04 = (int)(t2->f37c);
        *(Vector3 *)&(&frame)->f08 = *(Vector3 *)&t2->f3c;
        (&frame)->f14 = (int)(t2->f64);
        operation_8c0368ec((void *)(&frame));
    }
    /* TODO 8c021dcc..8c021e6a
     * 8c021dcc mov.l r14,@-r15
     * 8c021dce sts.l PR,@-r15
     * 8c021dd0 add #-0x18,r15
     * 8c021dd2 mov r4,r14
     * 8c021dd4 mov.w @(0x2,r14),r0
     * 8c021dd6 mov.l 0x8c021e70,r1
     * 8c021dd8 jsr @r1
     * 8c021dda extu.w r0,r4
     * 8c021ddc mov r0,r3
     * 8c021dde tst r3,r3
     * 8c021de0 bt 0x8c021df0
     * 8c021de2 mov.l @(0x4,r14),r1
     * 8c021de4 cmp/pz r1
     * 8c021de6 movt r0
     * 8c021de8 tst r0,r0
     * 8c021dea bt 0x8c021df0
     * 8c021dec mov.l 0x8c021e74,r0
     * 8c021dee mov.l r1,@(r0,r3)
     * 8c021df0 mov.l 0x8c021e78,r0
     * 8c021df2 mov.l @r0,r4
     * 8c021df4 mov.l 0x8c021e70,r0
     * 8c021df6 jsr @r0
     * 8c021df8 nop
     * 8c021dfa mov r0,r1
     * 8c021dfc tst r1,r1
     * 8c021dfe bt 0x8c021e66
     * 8c021e00 tst r1,r1
     * 8c021e02 bt 0x8c021e12
     * 8c021e04 mov.l 0x8c021e7c,r0
     * 8c021e06 mov.w @(r0,r1),r0
     * 8c021e08 exts.w r0,r0
     * 8c021e0a cmp/eq #0x2,r0
     * 8c021e0c movt r0
     * 8c021e0e tst r0,r0
     * 8c021e10 bf 0x8c021e66
     * 8c021e12 mov #0x1a,r0
     * 8c021e14 mov.b r0,@r15
     * 8c021e16 mov #0x8,r2
     * 8c021e18 mov #0x1,r0
     * 8c021e1a mov.b r0,@(0x1,r15)
     * 8c021e1c mov #0x0,r4
     * 8c021e1e mov.l r4,@(0x4,r15)
     * 8c021e20 fldi0 fr0
     * 8c021e22 mov #0x10,r0
     * 8c021e24 fmov fr0,@(r0,r15)
     * 8c021e26 mov r1,r3
     * 8c021e28 mov #0xc,r0
     * 8c021e2a fmov fr0,@(r0,r15)
     * 8c021e2c add r15,r2
     * 8c021e2e fmov.s fr0,@r2
     * 8c021e30 mov r1,r6
     * 8c021e32 mov.l r4,@(0x14,r15)
     * 8c021e34 mov #0x20,r0
     * 8c021e36 mov.b r0,@r15
     * 8c021e38 mov r15,r7
     * 8c021e3a mov #0x6,r0
     * 8c021e3c mov.b r0,@(0x1,r15)
     * 8c021e3e add #0x20,r3
     * 8c021e40 mov.w @r3,r0
     * 8c021e42 add #0x3c,r6
     * 8c021e44 add #0x8,r7
     * 8c021e46 mov.l 0x8c021e80,r3
     * 8c021e48 mov r15,r4
     * 8c021e4a mov.w r0,@(0x2,r15)
     * 8c021e4c mov.l 0x8c021e74,r0
     * 8c021e4e mov.l @(r0,r1),r0
     * 8c021e50 mov.l r0,@(0x4,r15)
     * 8c021e52 add #0x64,r1
     * 8c021e54 mov.l @r6,r5
     * 8c021e56 mov.l @(0x4,r6),r0
     * 8c021e58 mov.l r5,@r7
     * 8c021e5a mov.l r0,@(0x4,r7)
     * 8c021e5c mov.l @(0x8,r6),r0
     * 8c021e5e mov.l r0,@(0x8,r7)
     * 8c021e60 mov.l @r1,r0
     * 8c021e62 jsr @r3
     * 8c021e64 mov.l r0,@(0x14,r15)
     * 8c021e66 add #0x18,r15
     * 8c021e68 lds.l @r15+,PR
     * 8c021e6a rts
     */
}
