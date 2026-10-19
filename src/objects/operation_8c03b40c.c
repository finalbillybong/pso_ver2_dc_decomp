typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
};
struct S_c8c021ef8 {
    char unknown0[0x514];
    int f514;
};
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c03b40c(Object *o)
{
    S_c8c021ef8 *t1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    t1 = lookup_low_id((int)(o->f02));
    if (t1 != 0) {
        t1->f514 = (unsigned int)t1->f514 >> 1 << 1;
    }
    /* TODO 8c03b40c..8c03b428
     * 8c03b40c sts.l PR,@-r15
     * 8c03b40e mov.w @(0x2,r4),r0
     * 8c03b410 mov.l 0x8c03b42c,r1
     * 8c03b412 jsr @r1
     * 8c03b414 extu.w r0,r4
     * 8c03b416 mov r0,r3
     * 8c03b418 tst r3,r3
     * 8c03b41a bt 0x8c03b426
     * 8c03b41c mov.l 0x8c03b430,r0
     * 8c03b41e mov.l @(r0,r3),r1
     * 8c03b420 shlr r1
     * 8c03b422 shll r1
     * 8c03b424 mov.l r1,@(r0,r3)
     * 8c03b426 lds.l @r15+,PR
     * 8c03b428 rts
     */
}
