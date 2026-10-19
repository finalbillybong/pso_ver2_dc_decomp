typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
};
extern int lookup_low_id(int);
extern int call_8c02a6d4(int);
extern void operation_8c1e8e60(int, int, int);
void operation_8c1efad8(Object *o)
{
    int t1;
    int t2;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    t1 = lookup_low_id((int)(o->f02));
    t2 = call_8c02a6d4(t1);
    if (t2 != 0) {
        operation_8c1e8e60(t1, 0x12, 0);
    }
    /* TODO 8c1efad8..8c1efafc
     * 8c1efad8 mov.l r14,@-r15
     * 8c1efada sts.l PR,@-r15
     * 8c1efadc mov.w @(0x2,r4),r0
     * 8c1efade mov.l 0x8c1efb00,r1
     * 8c1efae0 jsr @r1
     * 8c1efae2 extu.w r0,r4
     * 8c1efae4 mov r0,r14
     * 8c1efae6 mov.l 0x8c1efb04,r0
     * 8c1efae8 jsr @r0
     * 8c1efaea mov r14,r4
     * 8c1efaec tst r0,r0
     * 8c1efaee bt 0x8c1efafa
     * 8c1efaf0 mov.l 0x8c1efb08,r0
     * 8c1efaf2 mov r14,r4
     * 8c1efaf4 mov #0x0,r6
     * 8c1efaf6 jsr @r0
     * 8c1efaf8 mov #0x12,r5
     * 8c1efafa lds.l @r15+,PR
     * 8c1efafc rts
     */
}
