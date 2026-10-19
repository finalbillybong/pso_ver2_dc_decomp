typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    short f02;
    short f04;
};
struct S_c8c053d84 {
    char unknown0[0x10c];
    short f10c;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
void operation_8c1e8bd0(Object *o)
{
    S_c8c053d84 *t1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    t1 = lookup_object_by_id((unsigned short)(o->f02));
    if (t1 != 0) {
        t1->f10c = o->f04;
    }
    /* TODO 8c1e8bd0..8c1e8bf0
     * 8c1e8bd0 mov.l r14,@-r15
     * 8c1e8bd2 sts.l PR,@-r15
     * 8c1e8bd4 mov r4,r14
     * 8c1e8bd6 mov.w @(0x2,r14),r0
     * 8c1e8bd8 mov.l 0x8c1e8bf4,r1
     * 8c1e8bda jsr @r1
     * 8c1e8bdc mov r0,r4
     * 8c1e8bde mov r0,r4
     * 8c1e8be0 tst r4,r4
     * 8c1e8be2 bt 0x8c1e8bee
     * 8c1e8be4 mov.w @(0x4,r14),r0
     * 8c1e8be6 mov.l 0x8c1e8bf8,r3
     * 8c1e8be8 mov r0,r1
     * 8c1e8bea mov r3,r0
     * 8c1e8bec mov.w r1,@(r0,r4)
     * 8c1e8bee lds.l @r15+,PR
     * 8c1e8bf0 rts
     */
}
