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
extern void operation_8c1e8e60(int, int, int);
void operation_8c1f100c(Object *o)
{
    int t1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    t1 = lookup_low_id((int)(o->f02));
    if (t1 != 0) {
        operation_8c1e8e60(t1, 0x16, 0);
    }
    /* TODO 8c1f100c..8c1f1026
     * 8c1f100c sts.l PR,@-r15
     * 8c1f100e mov.w @(0x2,r4),r0
     * 8c1f1010 mov.l 0x8c1f102c,r1
     * 8c1f1012 jsr @r1
     * 8c1f1014 extu.w r0,r4
     * 8c1f1016 tst r0,r0
     * 8c1f1018 bt 0x8c1f1024
     * 8c1f101a mov r0,r4
     * 8c1f101c mov.l 0x8c1f1030,r0
     * 8c1f101e mov #0x0,r6
     * 8c1f1020 jsr @r0
     * 8c1f1022 mov #0x16,r5
     * 8c1f1024 lds.l @r15+,PR
     * 8c1f1026 rts
     */
}
