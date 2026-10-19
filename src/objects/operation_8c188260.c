typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_4 Arg0_4;
typedef struct Arg0_8 Arg0_8;
struct Object {
    char unknown0[0x4];
    Arg0_4 *f04;
    Arg0_8 *f08;
};
extern int g_8c44be04;
extern void call_8c186ee8(void *, void *, int);
extern void operation_8c186e28(int, int);
void operation_8c188260(Object *o)
{
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    if ((int)(o->f04) != g_8c44be04) {
        call_8c186ee8((void *)(o->f04), (void *)(o->f08), 4);
        return;
    }
    operation_8c186e28((int)(o->f04), (int)(o->f08));
    /* TODO 8c188260..8c188284
     * 8c188260 sts.l PR,@-r15
     * 8c188262 mov.l 0x8c188288,r0
     * 8c188264 mov.l @(0x4,r4),r1
     * 8c188266 mov.l @r0,r0
     * 8c188268 cmp/eq r0,r1
     * 8c18826a bt 0x8c18827a
     * 8c18826c mov.l @(0x8,r4),r5
     * 8c18826e mov #0x4,r6
     * 8c188270 mov.l 0x8c18828c,r0
     * 8c188272 jsr @r0
     * 8c188274 mov r1,r4
     * 8c188276 bra 0x8c188282
     * 8c18827a mov.l @(0x8,r4),r5
     * 8c18827c mov.l 0x8c188290,r0
     * 8c18827e jsr @r0
     * 8c188280 mov r1,r4
     * 8c188282 lds.l @r15+,PR
     * 8c188284 rts
     */
}
