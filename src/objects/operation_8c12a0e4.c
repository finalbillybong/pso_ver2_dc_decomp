typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x368];
    int f368;
};
void operation_8c12a0e4(Object *o, int a1)
{
    int v1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    v1 = (int)o->f368;
    if (4 > v1) {
        o->f368 = v1 + 1;
        *(int *)((char *)((char *)o + 0x358) + (v1 << 2)) = a1;
    }
    /* TODO 8c12a0e4..8c12a0fe
     * 8c12a0e4 mov.l 0x8c12a104,r0
     * 8c12a0e6 mov #0x4,r1
     * 8c12a0e8 mov.l @(r0,r4),r3
     * 8c12a0ea cmp/gt r3,r1
     * 8c12a0ec bf 0x8c12a0fe
     * 8c12a0ee mov r3,r1
     * 8c12a0f0 add #0x1,r1
     * 8c12a0f2 mov.l r1,@(r0,r4)
     * 8c12a0f4 shll2 r3
     * 8c12a0f6 mov.l 0x8c12a108,r1
     * 8c12a0f8 mov r3,r0
     * 8c12a0fa add r1,r4
     * 8c12a0fc mov.l r5,@(r0,r4)
     * 8c12a0fe rts
     */
}
