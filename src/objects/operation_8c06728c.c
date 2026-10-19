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
extern void call_8c0672b4(int, Object *);
void operation_8c06728c(Object *o)
{
    int t1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    t1 = call_8c012a14(o->f02);
    if (t1 != 0) {
        call_8c0672b4(t1, o);
    }
    /* TODO 8c06728c..8c0672a8
     * 8c06728c mov.l r14,@-r15
     * 8c06728e sts.l PR,@-r15
     * 8c067290 mov r4,r14
     * 8c067292 mov.w @(0x2,r14),r0
     * 8c067294 mov.l 0x8c0672ac,r1
     * 8c067296 jsr @r1
     * 8c067298 mov r0,r4
     * 8c06729a tst r0,r0
     * 8c06729c bt 0x8c0672a6
     * 8c06729e mov r0,r4
     * 8c0672a0 mov.l 0x8c0672b0,r0
     * 8c0672a2 jsr @r0
     * 8c0672a4 mov r14,r5
     * 8c0672a6 lds.l @r15+,PR
     * 8c0672a8 rts
     */
}
