typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    int f04;
    char unknown8[0x14];
    int f1c;
};
void operation_8c03061c(Object *o)
{
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    o->f1c += 1;
    if (o->f1c >= ((int)o->f04 + -2)) {
        o->f1c = 0;
    }
    /* TODO 8c03061c..8c030632
     * 8c03061c mov.l @(0x1c,r4),r1
     * 8c03061e mov.l 0x8c030638,r0
     * 8c030620 add #0x1,r1
     * 8c030622 mov.l r1,@(0x1c,r4)
     * 8c030624 mov.l @(0x4,r4),r1
     * 8c030626 mov.l @(0x1c,r4),r3
     * 8c030628 add r0,r1
     * 8c03062a cmp/ge r1,r3
     * 8c03062c bf 0x8c030632
     * 8c03062e mov #0x0,r0
     * 8c030630 mov.l r0,@(0x1c,r4)
     * 8c030632 rts
     */
}
