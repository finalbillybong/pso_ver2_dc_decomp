typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_c Arg0_c;
class Object;
class Object {
public:
    char unknown0[0x20];
    virtual void v0();
};
typedef struct ObjectData {
    char unknown0[0xc];
    Arg0_c *f0c;
} ObjectData;
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c03063c(Object *);
extern "C" void operation_8c0306f0(Object *o)
{
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    call_8c3827d8((void *)(((ObjectData *)o)->f0c));
    o->v0();
    call_8c03063c(o);
    /* TODO 8c0306f0..8c03070e
     * 8c0306f0 mov.l r14,@-r15
     * 8c0306f2 sts.l PR,@-r15
     * 8c0306f4 mov r4,r14
     * 8c0306f6 mov.l 0x8c030714,r0
     * 8c0306f8 jsr @r0
     * 8c0306fa mov.l @(0xc,r14),r4
     * 8c0306fc mov r14,r4
     * 8c0306fe mov.l @(0x20,r4),r0
     * 8c030700 mov.l @(0x8,r0),r0
     * 8c030702 jsr @r0
     * 8c030704 nop
     * 8c030706 mov.l 0x8c030718,r0
     * 8c030708 jsr @r0
     * 8c03070a mov r14,r4
     * 8c03070c lds.l @r15+,PR
     * 8c03070e rts
     */
}
