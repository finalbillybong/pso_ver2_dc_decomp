typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    short f02;
};
extern int call_8c012a14(short);
extern void call_8c144d40(int, Object *);
void operation_8c144cfc(Object *o)
{
    int t1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    t1 = call_8c012a14(o->f02);
    if (t1 != 0) {
        call_8c144d40(t1, o);
    }
    /* TODO 8c144cfc..8c144d18
     * 8c144cfc mov.l r14,@-r15
     * 8c144cfe sts.l PR,@-r15
     * 8c144d00 mov r4,r14
     * 8c144d02 mov.w @(0x2,r14),r0
     * 8c144d04 mov.l 0x8c144d1c,r1
     * 8c144d06 jsr @r1
     * 8c144d08 mov r0,r4
     * 8c144d0a tst r0,r0
     * 8c144d0c bt 0x8c144d16
     * 8c144d0e mov r0,r4
     * 8c144d10 mov.l 0x8c144d20,r0
     * 8c144d12 jsr @r0
     * 8c144d14 mov r14,r5
     * 8c144d16 lds.l @r15+,PR
     * 8c144d18 rts
     */
}
