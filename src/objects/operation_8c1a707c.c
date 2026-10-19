typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    unsigned short f04;
    unsigned short f06;
};
extern void call_8c17777c(int);
extern void call_8c1778d4(int);
void operation_8c1a707c(Object *o)
{
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    if (o->f06 == 0) {
        call_8c17777c((int)(o->f04));
        return;
    }
    if (o->f06 == 1) {
        call_8c1778d4((int)(o->f04));
    }
    /* TODO 8c1a707c..8c1a70a0
     * 8c1a707c sts.l PR,@-r15
     * 8c1a707e mov.w @(0x6,r4),r0
     * 8c1a7080 extu.w r0,r0
     * 8c1a7082 tst r0,r0
     * 8c1a7084 bf 0x8c1a7092
     * 8c1a7086 mov.w @(0x4,r4),r0
     * 8c1a7088 mov.l 0x8c1a70a4,r1
     * 8c1a708a jsr @r1
     * 8c1a708c extu.w r0,r4
     * 8c1a708e bra 0x8c1a709e
     * 8c1a7092 cmp/eq #0x1,r0
     * 8c1a7094 bf 0x8c1a709e
     * 8c1a7096 mov.w @(0x4,r4),r0
     * 8c1a7098 mov.l 0x8c1a70a8,r1
     * 8c1a709a jsr @r1
     * 8c1a709c extu.w r0,r4
     * 8c1a709e lds.l @r15+,PR
     * 8c1a70a0 rts
     */
}
