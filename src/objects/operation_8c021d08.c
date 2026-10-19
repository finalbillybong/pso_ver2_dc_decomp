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
    int f04;
};
struct S_c8c021ef8 {
    char unknown0[0x308];
    short f308;
    char unknown30a[0x46];
    int f350;
    char unknown354[0x28];
    int f37c;
};
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c021d08(Object *o)
{
    int v1;
    int v2;
    int v3;
    S_c8c021ef8 *t1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    t1 = lookup_low_id((int)(o->f02));
    if (t1 != 0) {
        v1 = (int)o->f04;
        v2 = (int)(v1 >= 0);
        if (v2 != 0) {
            v3 = (int)(t1->f308 == 2);
            if (v3 != 0 && v1 != t1->f37c) {
                t1->f350 |= 0x400000;
            }
            t1->f37c = (int)(o->f04);
        }
    }
    /* TODO 8c021d08..8c021d4e
     * 8c021d08 mov.l r14,@-r15
     * 8c021d0a sts.l PR,@-r15
     * 8c021d0c mov r4,r14
     * 8c021d0e mov.w @(0x2,r14),r0
     * 8c021d10 mov.l 0x8c021d54,r1
     * 8c021d12 jsr @r1
     * 8c021d14 extu.w r0,r4
     * 8c021d16 mov r0,r4
     * 8c021d18 tst r4,r4
     * 8c021d1a bt 0x8c021d4c
     * 8c021d1c mov.l @(0x4,r14),r1
     * 8c021d1e cmp/pz r1
     * 8c021d20 movt r0
     * 8c021d22 tst r0,r0
     * 8c021d24 bt 0x8c021d4c
     * 8c021d26 mov.l 0x8c021d58,r0
     * 8c021d28 mov.w @(r0,r4),r0
     * 8c021d2a exts.w r0,r0
     * 8c021d2c cmp/eq #0x2,r0
     * 8c021d2e movt r0
     * 8c021d30 tst r0,r0
     * 8c021d32 bt 0x8c021d46
     * 8c021d34 mov.l 0x8c021d5c,r0
     * 8c021d36 mov.l @(r0,r4),r0
     * 8c021d38 cmp/eq r0,r1
     * 8c021d3a bt 0x8c021d46
     * 8c021d3c mov.l 0x8c021d60,r0
     * 8c021d3e mov.l 0x8c021d64,r1
     * 8c021d40 mov.l @(r0,r4),r3
     * 8c021d42 or r1,r3
     * 8c021d44 mov.l r3,@(r0,r4)
     * 8c021d46 mov.l @(0x4,r14),r1
     * 8c021d48 mov.l 0x8c021d5c,r0
     * 8c021d4a mov.l r1,@(r0,r4)
     * 8c021d4c lds.l @r15+,PR
     * 8c021d4e rts
     */
}
