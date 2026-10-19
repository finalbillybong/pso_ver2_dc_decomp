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
extern void call_8c067324(int, Object *);
void operation_8c0672fc(Object *o)
{
    int t1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    t1 = call_8c012a14(o->f02);
    if (t1 != 0) {
        call_8c067324(t1, o);
    }
    /* TODO 8c0672fc..8c067318
     * 8c0672fc mov.l r14,@-r15
     * 8c0672fe sts.l PR,@-r15
     * 8c067300 mov r4,r14
     * 8c067302 mov.w @(0x2,r14),r0
     * 8c067304 mov.l 0x8c06731c,r1
     * 8c067306 jsr @r1
     * 8c067308 mov r0,r4
     * 8c06730a tst r0,r0
     * 8c06730c bt 0x8c067316
     * 8c06730e mov r0,r4
     * 8c067310 mov.l 0x8c067320,r0
     * 8c067312 jsr @r0
     * 8c067314 mov r14,r5
     * 8c067316 lds.l @r15+,PR
     * 8c067318 rts
     */
}
