typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg1_8 Arg1_8;
struct Arg1 {
    char unknown0[0x4];
    short f04;
    short f06;
    Arg1_8 *f08;
};
struct Object {
    char unknown0[0x3f0];
    int f3f0;
};
extern void call_8c05be98(Object *, void *);
extern void operation_8c059ea4(void *, int);
void operation_8c144d40(Object *o, Arg1 *a1)
{
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    call_8c05be98(o, (void *)(a1->f08));
    o->f3f0 = a1->f06;
    operation_8c059ea4((void *)o, (int)(a1->f04));
    /* TODO 8c144d40..8c144d68
     * 8c144d40 mov.l r14,@-r15
     * 8c144d42 mov.l r13,@-r15
     * 8c144d44 mov r5,r14
     * 8c144d46 sts.l PR,@-r15
     * 8c144d48 mov r4,r13
     * 8c144d4a mov.l 0x8c144d6c,r0
     * 8c144d4c jsr @r0
     * 8c144d4e mov.l @(0x8,r14),r5
     * 8c144d50 mov.w @(0x6,r14),r0
     * 8c144d52 mov r13,r4
     * 8c144d54 mov.l 0x8c144d70,r3
     * 8c144d56 exts.w r0,r1
     * 8c144d58 mov r3,r0
     * 8c144d5a mov.l r1,@(r0,r13)
     * 8c144d5c mov.w @(0x4,r14),r0
     * 8c144d5e mov.l 0x8c144d74,r1
     * 8c144d60 jsr @r1
     * 8c144d62 exts.w r0,r5
     * 8c144d64 lds.l @r15+,PR
     * 8c144d66 mov.l @r15+,r13
     * 8c144d68 rts
     */
}
