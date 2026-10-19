typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};
typedef struct ObjectData {
    char unknown0[0x24];
    int f24;
    char unknown28[0x14];
    Vector3 f3c;
    char unknown48[0x30];
    Vector3 f78;
} ObjectData;
extern "C" void operation_8c112f78(void *);
extern "C" void operation_8c112f40(Object *o)
{
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    o->v6();
    operation_8c112f78((void *)o);
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f3c;
    ((ObjectData *)o)->f24 = 2;
    /* TODO 8c112f40..8c112f6e
     * 8c112f40 mov.l r14,@-r15
     * 8c112f42 sts.l PR,@-r15
     * 8c112f44 mov r4,r14
     * 8c112f46 mov.l @(0x18,r4),r0
     * 8c112f48 mov.l @(0x20,r0),r0
     * 8c112f4a jsr @r0
     * 8c112f4c nop
     * 8c112f4e mov.l 0x8c112f74,r0
     * 8c112f50 jsr @r0
     * 8c112f52 mov r14,r4
     * 8c112f54 mov r14,r4
     * 8c112f56 add #0x3c,r4
     * 8c112f58 mov.l @r4,r3
     * 8c112f5a mov r14,r5
     * 8c112f5c mov.l @(0x4,r4),r1
     * 8c112f5e add #0x78,r5
     * 8c112f60 mov #0x2,r0
     * 8c112f62 mov.l r3,@r5
     * 8c112f64 mov.l r1,@(0x4,r5)
     * 8c112f66 mov.l @(0x8,r4),r1
     * 8c112f68 mov.l r1,@(0x8,r5)
     * 8c112f6a mov.l r0,@(0x24,r14)
     * 8c112f6c lds.l @r15+,PR
     * 8c112f6e rts
     */
}
