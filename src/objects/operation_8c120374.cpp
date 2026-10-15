typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_184 Arg0_184;
class Object;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
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
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x30];
    Vector3 f78;
    char unknown84[0x100];
    Arg0_184 *f184;
    char unknown188[0x182];
    short f30a;
    char unknown30c[0x18];
    Block_p0_324 f324;
    char unknown330[0x78];
    int f3a8;
    int f3ac;
    char unknown3b0[0xc];
    int f3bc;
    int f3c0;
    int f3c4;
} ObjectData;
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
extern "C" void operation_8c05426c(void *, int, int);
extern "C" int operation_8c173460(void *, int);
extern "C" void operation_8c05428c(void *, int, int);
extern "C" void call_8c01c5f0(Object *);
extern "C" void call_8c027090(Object *);
extern "C" void operation_8c120374(Object *o)
{
    char *v172;
    int v3;
    char *v173;
    int t1;
    int t2;
    if (((ObjectData *)o)->f3bc <= 0 && ((ObjectData *)o)->f3c0 <= 0) {
        ((ObjectData *)o)->f3ac = 1;
        operation_8c05426c((void *)o, 0, 1);
    } else {
        if (((ObjectData *)o)->f3a8 == 0) {
            v3 = (int)*(int *)0x8c4db520;
        } else {
            v3 = (int)*(int *)0x8c4db524;
        }
        v172 = (char *)((ObjectData *)o)->f3bc;
        if ((int)(v172) > 0) {
            t1 = operation_8c173460((void *)v3, (int)(v172));
            if (t1 != 0) {
                ((ObjectData *)o)->f3ac = 1;
                operation_8c05426c((void *)o, 0, 1);
            } else {
                ((ObjectData *)o)->f3ac = 0;
                operation_8c05428c((void *)o, 0, 1);
            }
        }
        v173 = (char *)((ObjectData *)o)->f3c0;
        if ((int)(v173) > 0) {
            t2 = operation_8c173460((void *)v3, (int)(v173));
            if (t2 != 0) {
                ((ObjectData *)o)->f3ac = 0;
                operation_8c05428c((void *)o, 0, 1);
            }
        }
    }
    if (((ObjectData *)o)->f30a != 0) {
        if (((ObjectData *)o)->f30a == 1) {
            goto L_8c12042c;
        }
        if (((ObjectData *)o)->f30a == 2) {
            goto L_8c12043e;
        }
        if (((ObjectData *)o)->f30a == 3) {
            goto L_8c120450;
        }
    } else {
        o->v89();
        goto L_8c12045e;
L_8c12042c:;
        o->v90();
        goto L_8c12045e;
L_8c12043e:;
        o->v91();
        goto L_8c12045e;
L_8c120450:;
        o->v92();
    }
L_8c12045e:;
    call_8c01c5f0(o);
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    if (((ObjectData *)o)->f184 != 0) {
        ((ObjectData *)o)->f324.f04 += ((ObjectData *)o)->f184->f10 * 0.5f;
    }
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f324;
    if (((ObjectData *)o)->f3c4 > 0) {
        call_8c027090(o);
    }
    ((ObjectData *)o)->f34 &= -0x1b40;
}
