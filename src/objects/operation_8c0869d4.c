typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    Vector3 f00;
};
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x58];
    float fa0;
    float fa4;
    float fa8;
    float fac;
    char unknownb0[0x4];
    float fb4;
    short fb8;
    short fba;
    char fbc;
    char fbd;
};
extern int call_8c12b944(void *);
void operation_8c0869d4(Object *o)
{
    S_vv1 *v1;
    int t1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    v1 = (S_vv1 *)((char *)o + 0x94);
    *(Vector3 *)&v1->f00 = *(Vector3 *)&o->f3c;
    o->fa0 = 0.0f;
    o->fa4 = 0.0f;
    o->fa8 = 0.0f;
    t1 = call_8c12b944((void *)(&o->f3c));
    o->fac = (float)t1 / 32768.0f * 0.5f;
    o->fb4 = 0.0f;
    o->fbc = 0;
    o->fbd = 0;
    o->fb8 = 0x1e;
    o->fba = 0;
    /* TODO 8c0869d4..8c086a44
     * 8c0869d4 mov.l r14,@-r15
     * 8c0869d6 sts.l PR,@-r15
     * 8c0869d8 mov r4,r14
     * 8c0869da add #0x3c,r4
     * 8c0869dc mov.l 0x8c086a48,r1
     * 8c0869de mov r14,r5
     * 8c0869e0 mov.l @r4,r0
     * 8c0869e2 add r1,r5
     * 8c0869e4 mov.l @(0x4,r4),r3
     * 8c0869e6 mov r14,r1
     * 8c0869e8 fldi0 fr0
     * 8c0869ea mov.l r0,@r5
     * 8c0869ec mov.l 0x8c086a4c,r0
     * 8c0869ee mov.l r3,@(0x4,r5)
     * 8c0869f0 add r0,r1
     * 8c0869f2 mov.l @(0x8,r4),r0
     * 8c0869f4 mov r14,r3
     * 8c0869f6 mov.l r0,@(0x8,r5)
     * 8c0869f8 mov.l 0x8c086a50,r0
     * 8c0869fa fmov.s fr0,@r1
     * 8c0869fc add r0,r3
     * 8c0869fe mov.l 0x8c086a54,r0
     * 8c086a00 mov r14,r1
     * 8c086a02 fmov.s fr0,@r3
     * 8c086a04 add r0,r1
     * 8c086a06 mov.l 0x8c086a58,r0
     * 8c086a08 jsr @r0
     * 8c086a0a fmov.s fr0,@r1
     * 8c086a0c lds r0,FPUL
     * 8c086a0e mov.l 0x8c086a5c,r1
     * 8c086a10 mov r14,r3
     * 8c086a12 mova 0x8c086a60,r0
     * 8c086a14 fmov.s @r0,fr1
     * 8c086a16 float FPUL,fr2
     * 8c086a18 add r1,r3
     * 8c086a1a mova 0x8c086a64,r0
     * 8c086a1c fmov.s @r0,fr0
     * 8c086a1e fdiv fr1,fr2
     * 8c086a20 mov.l 0x8c086a68,r1
     * 8c086a22 fmul fr0,fr2
     * 8c086a24 mov r14,r0
     * 8c086a26 fmov.s fr2,@r3
     * 8c086a28 add r1,r0
     * 8c086a2a fldi0 fr0
     * 8c086a2c fmov.s fr0,@r0
     * 8c086a2e mov #0x0,r3
     * 8c086a30 mov.l 0x8c086a6c,r0
     * 8c086a32 mov #0x1e,r1
     * 8c086a34 mov.b r3,@(r0,r14)
     * 8c086a36 mov.l 0x8c086a70,r0
     * 8c086a38 mov.b r3,@(r0,r14)
     * 8c086a3a mov.l 0x8c086a74,r0
     * 8c086a3c mov.w r1,@(r0,r14)
     * 8c086a3e mov.l 0x8c086a78,r0
     * 8c086a40 mov.w r3,@(r0,r14)
     * 8c086a42 lds.l @r15+,PR
     * 8c086a44 rts
     */
}
