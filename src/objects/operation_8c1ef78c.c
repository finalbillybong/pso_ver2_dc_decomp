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
    short f04;
};
struct S_c8c021ef8 {
    char unknown0[0x1b6];
    short f1b6;
};
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c1ef78c(Object *o)
{
    S_c8c021ef8 *t1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    t1 = lookup_low_id((int)(o->f02));
    if (t1 != 0) {
        t1->f1b6 = o->f04;
    }
    /* TODO 8c1ef78c..8c1ef7ac
     * 8c1ef78c mov.l r14,@-r15
     * 8c1ef78e sts.l PR,@-r15
     * 8c1ef790 mov r4,r14
     * 8c1ef792 mov.w @(0x2,r14),r0
     * 8c1ef794 mov.l 0x8c1ef7b0,r1
     * 8c1ef796 jsr @r1
     * 8c1ef798 extu.w r0,r4
     * 8c1ef79a mov r0,r4
     * 8c1ef79c tst r4,r4
     * 8c1ef79e bt 0x8c1ef7aa
     * 8c1ef7a0 mov.w @(0x4,r14),r0
     * 8c1ef7a2 mov.l 0x8c1ef7b4,r3
     * 8c1ef7a4 mov r0,r1
     * 8c1ef7a6 mov r3,r0
     * 8c1ef7a8 mov.w r1,@(r0,r4)
     * 8c1ef7aa lds.l @r15+,PR
     * 8c1ef7ac rts
     */
}
