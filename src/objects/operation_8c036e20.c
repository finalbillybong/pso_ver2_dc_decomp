typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c417680 S_L8c417680;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    short f04;
    short f06;
    int f08;
    float f0c;
    float f10;
};
struct S_L8c417680 {
    char unknown0[0x2];
    short f02;
    int f04;
    float f08;
    float f0c;
};
extern S_L8c417680 g_8c417680;
void operation_8c036e20(Object *o)
{
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    *(short *)((char *)&g_8c417680 + (o->f02 << 4)) = o->f04;
    *(short *)((char *)&g_8c417680.f02 + (o->f02 << 4)) = o->f06;
    *(int *)((char *)&g_8c417680.f04 + (o->f02 << 4)) = (int)(o->f08);
    *(float *)((char *)&g_8c417680.f08 + (o->f02 << 4)) = o->f0c;
    *(float *)((char *)&g_8c417680.f0c + (o->f02 << 4)) = o->f10;
    /* TODO 8c036e20..8c036e84
     * 8c036e20 mov.l r14,@-r15
     * 8c036e22 mov.l r13,@-r15
     * 8c036e24 mov.w @(0x2,r4),r0
     * 8c036e26 mov.l 0x8c036e88,r13
     * 8c036e28 extu.w r0,r3
     * 8c036e2a mov.w @(0x4,r4),r0
     * 8c036e2c shll2 r3
     * 8c036e2e mov r13,r14
     * 8c036e30 mov r0,r1
     * 8c036e32 mov r13,r0
     * 8c036e34 shll2 r3
     * 8c036e36 mov.w r1,@(r0,r3)
     * 8c036e38 mov r13,r6
     * 8c036e3a mov.w @(0x2,r4),r0
     * 8c036e3c mov r13,r3
     * 8c036e3e mov r4,r1
     * 8c036e40 extu.w r0,r7
     * 8c036e42 mov.w @(0x6,r4),r0
     * 8c036e44 shll2 r7
     * 8c036e46 shll2 r7
     * 8c036e48 mov r0,r5
     * 8c036e4a add #0x2,r14
     * 8c036e4c mov r7,r0
     * 8c036e4e mov.w r5,@(r0,r14)
     * 8c036e50 add #0x4,r6
     * 8c036e52 mov.w @(0x2,r4),r0
     * 8c036e54 add #0xc,r1
     * 8c036e56 mov.l @(0x8,r4),r5
     * 8c036e58 extu.w r0,r0
     * 8c036e5a shll2 r0
     * 8c036e5c shll2 r0
     * 8c036e5e mov.l r5,@(r0,r6)
     * 8c036e60 add #0x8,r3
     * 8c036e62 mov.w @(0x2,r4),r0
     * 8c036e64 add #0xc,r13
     * 8c036e66 fmov.s @r1,fr0
     * 8c036e68 extu.w r0,r0
     * 8c036e6a shll2 r0
     * 8c036e6c shll2 r0
     * 8c036e6e add r0,r3
     * 8c036e70 fmov.s fr0,@r3
     * 8c036e72 mov.w @(0x2,r4),r0
     * 8c036e74 extu.w r0,r0
     * 8c036e76 add #0x10,r4
     * 8c036e78 shll2 r0
     * 8c036e7a shll2 r0
     * 8c036e7c fmov.s @r4,fr0
     * 8c036e7e add r0,r13
     * 8c036e80 fmov.s fr0,@r13
     * 8c036e82 mov.l @r15+,r13
     * 8c036e84 rts
     */
}
