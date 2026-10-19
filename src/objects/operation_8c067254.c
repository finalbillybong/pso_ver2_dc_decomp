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
    char unknown0[0x698];
    int f698;
};
extern void call_8c05be98(Object *, void *);
extern void operation_8c059ea4(void *, int);
void operation_8c067254(Object *o, Arg1 *a1)
{
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    call_8c05be98(o, (void *)(a1->f08));
    o->f698 = a1->f06;
    operation_8c059ea4((void *)o, (int)(a1->f04));
    /* TODO 8c067254..8c06727c
     * 8c067254 mov.l r14,@-r15
     * 8c067256 mov.l r13,@-r15
     * 8c067258 mov r5,r14
     * 8c06725a sts.l PR,@-r15
     * 8c06725c mov r4,r13
     * 8c06725e mov.l 0x8c067280,r0
     * 8c067260 jsr @r0
     * 8c067262 mov.l @(0x8,r14),r5
     * 8c067264 mov.w @(0x6,r14),r0
     * 8c067266 mov r13,r4
     * 8c067268 mov.l 0x8c067284,r3
     * 8c06726a exts.w r0,r1
     * 8c06726c mov r3,r0
     * 8c06726e mov.l r1,@(r0,r13)
     * 8c067270 mov.w @(0x4,r14),r0
     * 8c067272 mov.l 0x8c067288,r1
     * 8c067274 jsr @r1
     * 8c067276 exts.w r0,r5
     * 8c067278 lds.l @r15+,PR
     * 8c06727a mov.l @r15+,r13
     * 8c06727c rts
     */
}
