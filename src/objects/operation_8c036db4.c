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
void operation_8c036db4(Object *o)
{
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    *(short *)((char *)&g_8c417680 + (o->f02 << 4)) = o->f04;
    *(short *)((char *)&g_8c417680.f02 + (o->f02 << 4)) = o->f06;
    *(int *)((char *)&g_8c417680.f04 + (o->f02 << 4)) = (int)(o->f08);
    *(float *)((char *)&g_8c417680.f08 + (o->f02 << 4)) = o->f0c;
    *(float *)((char *)&g_8c417680.f0c + (o->f02 << 4)) = o->f10;
    /* TODO 8c036db4..8c036e18
     * 8c036db4 mov.l r14,@-r15
     * 8c036db6 mov.l r13,@-r15
     * 8c036db8 mov.w @(0x2,r4),r0
     * 8c036dba mov.l 0x8c036e1c,r13
     * 8c036dbc extu.w r0,r3
     * 8c036dbe mov.w @(0x4,r4),r0
     * 8c036dc0 shll2 r3
     * 8c036dc2 mov r13,r14
     * 8c036dc4 mov r0,r1
     * 8c036dc6 mov r13,r0
     * 8c036dc8 shll2 r3
     * 8c036dca mov.w r1,@(r0,r3)
     * 8c036dcc mov r13,r6
     * 8c036dce mov.w @(0x2,r4),r0
     * 8c036dd0 mov r13,r3
     * 8c036dd2 mov r4,r1
     * 8c036dd4 extu.w r0,r7
     * 8c036dd6 mov.w @(0x6,r4),r0
     * 8c036dd8 shll2 r7
     * 8c036dda shll2 r7
     * 8c036ddc mov r0,r5
     * 8c036dde add #0x2,r14
     * 8c036de0 mov r7,r0
     * 8c036de2 mov.w r5,@(r0,r14)
     * 8c036de4 add #0x4,r6
     * 8c036de6 mov.w @(0x2,r4),r0
     * 8c036de8 add #0xc,r1
     * 8c036dea mov.l @(0x8,r4),r5
     * 8c036dec extu.w r0,r0
     * 8c036dee shll2 r0
     * 8c036df0 shll2 r0
     * 8c036df2 mov.l r5,@(r0,r6)
     * 8c036df4 add #0x8,r3
     * 8c036df6 mov.w @(0x2,r4),r0
     * 8c036df8 add #0xc,r13
     * 8c036dfa fmov.s @r1,fr0
     * 8c036dfc extu.w r0,r0
     * 8c036dfe shll2 r0
     * 8c036e00 shll2 r0
     * 8c036e02 add r0,r3
     * 8c036e04 fmov.s fr0,@r3
     * 8c036e06 mov.w @(0x2,r4),r0
     * 8c036e08 extu.w r0,r0
     * 8c036e0a add #0x10,r4
     * 8c036e0c shll2 r0
     * 8c036e0e shll2 r0
     * 8c036e10 fmov.s @r4,fr0
     * 8c036e12 add r0,r13
     * 8c036e14 fmov.s fr0,@r13
     * 8c036e16 mov.l @r15+,r13
     * 8c036e18 rts
     */
}
