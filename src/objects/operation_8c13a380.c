typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    Vector3 f04;
    int f10;
};
struct S_c8c053d84 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
};
extern int g_8c418248;
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern void transform_actor_records(void *);
extern void operation_8c0a1b78(void *);
void operation_8c13a380(Object *o)
{
    S_c8c053d84 *t1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    t1 = lookup_object_by_id((unsigned short)(o->f02));
    if (t1 != 0) {
        *(Vector3 *)&t1->f3c = *(Vector3 *)&o->f04;
        t1->f64 = (int)(o->f10);
        transform_actor_records((void *)t1);
        if (o->f02 == g_8c418248) {
            operation_8c0a1b78((void *)t1);
        }
    }
    /* TODO 8c13a380..8c13a3cc
     * 8c13a380 mov.l r14,@-r15
     * 8c13a382 mov.l r13,@-r15
     * 8c13a384 sts.l PR,@-r15
     * 8c13a386 mov r4,r13
     * 8c13a388 mov.w @(0x2,r13),r0
     * 8c13a38a mov.l 0x8c13a3d0,r1
     * 8c13a38c jsr @r1
     * 8c13a38e mov r0,r4
     * 8c13a390 mov r0,r14
     * 8c13a392 tst r14,r14
     * 8c13a394 bt 0x8c13a3c8
     * 8c13a396 mov r13,r5
     * 8c13a398 add #0x4,r5
     * 8c13a39a mov.l @r5,r3
     * 8c13a39c mov r14,r6
     * 8c13a39e mov.l @(0x4,r5),r1
     * 8c13a3a0 add #0x3c,r6
     * 8c13a3a2 mov #0x64,r0
     * 8c13a3a4 mov.l r3,@r6
     * 8c13a3a6 mov r14,r4
     * 8c13a3a8 mov.l r1,@(0x4,r6)
     * 8c13a3aa mov.l 0x8c13a3d4,r1
     * 8c13a3ac mov.l @(0x8,r5),r3
     * 8c13a3ae mov.l r3,@(0x8,r6)
     * 8c13a3b0 mov.l @(0x10,r13),r3
     * 8c13a3b2 jsr @r1
     * 8c13a3b4 mov.l r3,@(r0,r14)
     * 8c13a3b6 mov.l 0x8c13a3d8,r1
     * 8c13a3b8 mov.w @(0x2,r13),r0
     * 8c13a3ba mov.l @r1,r1
     * 8c13a3bc extu.w r0,r0
     * 8c13a3be cmp/eq r1,r0
     * 8c13a3c0 bf 0x8c13a3c8
     * 8c13a3c2 mov.l 0x8c13a3dc,r0
     * 8c13a3c4 jsr @r0
     * 8c13a3c6 mov r14,r4
     * 8c13a3c8 lds.l @r15+,PR
     * 8c13a3ca mov.l @r15+,r13
     * 8c13a3cc rts
     */
}
