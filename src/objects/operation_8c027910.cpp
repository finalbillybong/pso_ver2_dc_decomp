typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
class Object;
class Object {
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
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x318];
    int f350;
} ObjectData;
extern "C" void operation_8c02c998(void *);
extern "C" void operation_8c027910(Object *o)
{
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    operation_8c02c998((void *)o);
    o->v64();
    ((ObjectData *)o)->f34 &= -0xe01;
    ((ObjectData *)o)->f350 = (unsigned int)((ObjectData *)o)->f350 >> 1 << 1;
    /* TODO 8c027910..8c02793e
     * 8c027910 mov.l r14,@-r15
     * 8c027912 sts.l PR,@-r15
     * 8c027914 mov r4,r14
     * 8c027916 mov.l 0x8c027944,r0
     * 8c027918 jsr @r0
     * 8c02791a nop
     * 8c02791c mov r14,r4
     * 8c02791e mov.l @(0x18,r4),r0
     * 8c027920 mov.l 0x8c027948,r2
     * 8c027922 add r0,r2
     * 8c027924 mov.l @r2,r0
     * 8c027926 jsr @r0
     * 8c027928 nop
     * 8c02792a mov.l @(0x34,r14),r3
     * 8c02792c mov.l 0x8c02794c,r1
     * 8c02792e mov.l 0x8c027950,r0
     * 8c027930 and r1,r3
     * 8c027932 mov.l r3,@(0x34,r14)
     * 8c027934 mov.l @(r0,r14),r1
     * 8c027936 shlr r1
     * 8c027938 shll r1
     * 8c02793a mov.l r1,@(r0,r14)
     * 8c02793c lds.l @r15+,PR
     * 8c02793e rts
     */
}
