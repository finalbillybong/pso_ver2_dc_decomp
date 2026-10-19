typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    short f02;
};
extern int call_8c012a14(short);
extern void call_8c067254(int, Object *);
void operation_8c06722c(Object *o)
{
    int t1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    t1 = call_8c012a14(o->f02);
    if (t1 != 0) {
        call_8c067254(t1, o);
    }
    /* TODO 8c06722c..8c067248
     * 8c06722c mov.l r14,@-r15
     * 8c06722e sts.l PR,@-r15
     * 8c067230 mov r4,r14
     * 8c067232 mov.w @(0x2,r14),r0
     * 8c067234 mov.l 0x8c06724c,r1
     * 8c067236 jsr @r1
     * 8c067238 mov r0,r4
     * 8c06723a tst r0,r0
     * 8c06723c bt 0x8c067246
     * 8c06723e mov r0,r4
     * 8c067240 mov.l 0x8c067250,r0
     * 8c067242 jsr @r0
     * 8c067244 mov r14,r5
     * 8c067246 lds.l @r15+,PR
     * 8c067248 rts
     */
}
