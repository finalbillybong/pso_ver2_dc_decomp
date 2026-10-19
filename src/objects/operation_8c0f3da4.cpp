typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_110 Arg0_110;
class Arg0_s130;
struct Object {
    char unknown0[0x110];
    Arg0_110 *f110;
    char unknown114[0x18];
    float f12c;
    char unknown130[0x1c];
    float f14c;
    int f150;
};
class Arg0_s130 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
};
typedef struct Arg0_s130Data {

} Arg0_s130Data;
extern "C" void process_entries_8c0731d8(void *);
extern "C" void operation_8c0f3da4(Object *o)
{
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    process_entries_8c0731d8((void *)(o->f110));
    o->f12c = 1.0f;
    ((Arg0_s130 *)((char *)o + 0x130))->v2();
    o->f150 = 0;
    o->f14c = 0.0f;
    /* TODO 8c0f3da4..8c0f3ddc
     * 8c0f3da4 mov.l r14,@-r15
     * 8c0f3da6 sts.l PR,@-r15
     * 8c0f3da8 mov r4,r14
     * 8c0f3daa mov.l 0x8c0f3de0,r0
     * 8c0f3dac mov.l @(r0,r14),r4
     * 8c0f3dae mov.l 0x8c0f3de4,r0
     * 8c0f3db0 jsr @r0
     * 8c0f3db2 nop
     * 8c0f3db4 mov.l 0x8c0f3de8,r0
     * 8c0f3db6 mov r14,r1
     * 8c0f3db8 fldi1 fr0
     * 8c0f3dba add r0,r1
     * 8c0f3dbc mov.l 0x8c0f3dec,r0
     * 8c0f3dbe mov r14,r4
     * 8c0f3dc0 fmov.s fr0,@r1
     * 8c0f3dc2 add r0,r4
     * 8c0f3dc4 mov.l @(0x14,r4),r0
     * 8c0f3dc6 mov.l @(0x10,r0),r0
     * 8c0f3dc8 jsr @r0
     * 8c0f3dca nop
     * 8c0f3dcc mov.l 0x8c0f3df0,r0
     * 8c0f3dce mov #0x0,r1
     * 8c0f3dd0 fldi0 fr0
     * 8c0f3dd2 mov.l r1,@(r0,r14)
     * 8c0f3dd4 mov.l 0x8c0f3df4,r0
     * 8c0f3dd6 add r0,r14
     * 8c0f3dd8 fmov.s fr0,@r14
     * 8c0f3dda lds.l @r15+,PR
     * 8c0f3ddc rts
     */
}
