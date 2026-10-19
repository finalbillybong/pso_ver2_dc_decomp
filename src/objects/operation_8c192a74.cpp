typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_4 Arg0_4;
typedef struct Arg0_8 Arg0_8;
class S_c8c0744dc;
struct Object {
    char unknown0[0x4];
    Arg0_4 *f04;
    Arg0_8 *f08;
};
class S_c8c0744dc {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
};
typedef struct S_c8c0744dcData {

} S_c8c0744dcData;
extern "C" void call_8c192558(void *, void *);
extern "C" S_c8c0744dc *find_record_8c0744dc(int);
extern "C" void operation_8c192a74(Object *o)
{
    S_c8c0744dc *t1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    call_8c192558((void *)(o->f08), (void *)(o->f04));
    t1 = find_record_8c0744dc((int)(o->f04));
    if (t1 != 0) {
        t1->v27();
    }
    /* TODO 8c192a74..8c192a9c
     * 8c192a74 mov.l r14,@-r15
     * 8c192a76 sts.l PR,@-r15
     * 8c192a78 mov r4,r14
     * 8c192a7a mov.l @(0x4,r14),r5
     * 8c192a7c mov.l 0x8c192aa0,r0
     * 8c192a7e jsr @r0
     * 8c192a80 mov.l @(0x8,r14),r4
     * 8c192a82 mov.l 0x8c192aa4,r0
     * 8c192a84 jsr @r0
     * 8c192a86 mov.l @(0x4,r14),r4
     * 8c192a88 tst r0,r0
     * 8c192a8a bt 0x8c192a9a
     * 8c192a8c mov r0,r4
     * 8c192a8e mov.l @(0x18,r4),r0
     * 8c192a90 mov #0x74,r2
     * 8c192a92 add r0,r2
     * 8c192a94 mov.l @r2,r0
     * 8c192a96 jsr @r0
     * 8c192a98 nop
     * 8c192a9a lds.l @r15+,PR
     * 8c192a9c rts
     */
}
