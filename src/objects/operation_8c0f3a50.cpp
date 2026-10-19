typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class Arg0_s130;
struct Object {
    char unknown0[0xec];
    int fec;
    int ff0;
    float ff4;
    float ff8;
    float ffc;
    float f100;
    float f104;
    int f108;
    int f10c;
    int f110;
};
class Arg0_s130 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1(int);
};
typedef struct Arg0_s130Data {

} Arg0_s130Data;
extern "C" int call_8c011ecc(int);
extern "C" void operation_8c0f336c(int, int);
extern "C" void call_8c0f3da4(Object *);
extern "C" void operation_8c0f3a50(Object *o)
{
    int t1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    o->fec = 0;
    o->ff0 = 0;
    o->ff4 = 0.0f;
    o->ff8 = 0.0f;
    o->ffc = 0.0f;
    o->f100 = 0.0f;
    o->f104 = 0.0f;
    o->f108 = 0;
    o->f10c = 0;
    t1 = call_8c011ecc(0x10);
    if (t1 != 0) {
        operation_8c0f336c(t1, 9);
    }
    o->f110 = (int)t1;
    ((Arg0_s130 *)((char *)o + 0x130))->v1(0);
    call_8c0f3da4(o);
    /* TODO 8c0f3a50..8c0f3ac2
     * 8c0f3a50 mov.l r14,@-r15
     * 8c0f3a52 mov.l r13,@-r15
     * 8c0f3a54 mov r4,r14
     * 8c0f3a56 sts.l PR,@-r15
     * 8c0f3a58 mov.l 0x8c0f3ac8,r0
     * 8c0f3a5a mov #0x0,r1
     * 8c0f3a5c mov r14,r3
     * 8c0f3a5e mov.l r1,@(r0,r14)
     * 8c0f3a60 fldi0 fr0
     * 8c0f3a62 mov.l 0x8c0f3acc,r0
     * 8c0f3a64 mov.l r1,@(r0,r14)
     * 8c0f3a66 mov.l 0x8c0f3ad0,r0
     * 8c0f3a68 add r0,r3
     * 8c0f3a6a mov.l 0x8c0f3ad4,r0
     * 8c0f3a6c fmov.s fr0,@r3
     * 8c0f3a6e add r0,r4
     * 8c0f3a70 mov.l 0x8c0f3ad8,r0
     * 8c0f3a72 mov r14,r3
     * 8c0f3a74 fmov.s fr0,@r4
     * 8c0f3a76 add r0,r3
     * 8c0f3a78 mov.l 0x8c0f3adc,r0
     * 8c0f3a7a mov r14,r4
     * 8c0f3a7c fmov.s fr0,@r3
     * 8c0f3a7e add r0,r4
     * 8c0f3a80 mov.l 0x8c0f3ae0,r3
     * 8c0f3a82 mov r14,r0
     * 8c0f3a84 fmov.s fr0,@r4
     * 8c0f3a86 add r3,r0
     * 8c0f3a88 fmov.s fr0,@r0
     * 8c0f3a8a mov.l 0x8c0f3ae4,r0
     * 8c0f3a8c mov.l r1,@(r0,r14)
     * 8c0f3a8e mov.l 0x8c0f3ae8,r0
     * 8c0f3a90 mov.l r1,@(r0,r14)
     * 8c0f3a92 mov.l 0x8c0f3aec,r0
     * 8c0f3a94 jsr @r0
     * 8c0f3a96 mov #0x10,r4
     * 8c0f3a98 tst r0,r0
     * 8c0f3a9a bt/s 0x8c0f3aa6
     * 8c0f3a9c mov r0,r13
     * 8c0f3a9e mov r0,r4
     * 8c0f3aa0 mov.l 0x8c0f3af0,r0
     * 8c0f3aa2 jsr @r0
     * 8c0f3aa4 mov #0x9,r5
     * 8c0f3aa6 mov.l 0x8c0f3af4,r0
     * 8c0f3aa8 mov r14,r4
     * 8c0f3aaa mov.l 0x8c0f3af8,r1
     * 8c0f3aac mov.l r13,@(r0,r14)
     * 8c0f3aae add r1,r4
     * 8c0f3ab0 mov.l @(0x14,r4),r0
     * 8c0f3ab2 mov.l @(0xc,r0),r0
     * 8c0f3ab4 jsr @r0
     * 8c0f3ab6 mov #0x0,r5
     * 8c0f3ab8 mov.l 0x8c0f3afc,r0
     * 8c0f3aba jsr @r0
     * 8c0f3abc mov r14,r4
     * 8c0f3abe lds.l @r15+,PR
     * 8c0f3ac0 mov.l @r15+,r13
     * 8c0f3ac2 rts
     */
}
