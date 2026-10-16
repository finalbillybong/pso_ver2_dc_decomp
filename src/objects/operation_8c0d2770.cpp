typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
class Object;
class Arg0_s3f4;
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
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual void v103();
    virtual void v104();
    virtual int v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
};
typedef struct ObjectData {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x2ea];
    int f3dc;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
class Arg0_s3f4 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int v4();
};
typedef struct Arg0_s3f4Data {

} Arg0_s3f4Data;
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void call_8c01c5f0(Object *);
extern "C" int call_8c05c0dc(Object *, float);
extern "C" void operation_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" void operation_8c0d2770(Object *o, int a1)
{
    S_vv2 *v2;
    S_vv1 *v1;
    int v3;
    char *v5;
    int t1;
    int t2;
    int t3;
    v1 = (S_vv1 *)((char *)o + 0x488);
    v2 = (S_vv2 *)((char *)o + 0x48c);
    switch (a1) {
    case 5:
        break;
    case 4:
        ((ObjectData *)o)->ff0 = 0;
        o->v101();
        ((ObjectData *)o)->f3dc &= -8;
        operation_8c059ef8((void *)o, 8);
        v1->f00 = 0;
        v2->f00 = 0;
        return;
    case 3:
        t1 = o->v105();
        if (t1 != 0) {
            operation_8c059ea4((void *)o, 9);
            v3 = (int)1;
        } else {
            v3 = (int)0;
        }
        if (v3 != 0) {
            return;
        }
        if (v1->f00 == 2) {
            operation_8c059ea4((void *)o, 4);
            return;
        }
        if (v1->f00 != 3) {
            return;
        }
        operation_8c059ea4((void *)o, 2);
        return;
    case 0:
        call_8c01c5f0(o);
        switch (v1->f00) {
        case 0:
            t2 = call_8c05c0dc(o, 400.0f);
            if (t2 != 0) {
                operation_8c05c184((void *)o);
                aim_direction_8c05bdd4((void *)o);
                v1->f00 = 2;
                goto L_8c0d288e;
            }
            v2->f00 += 1;
            v5 = (char *)v2->f00;
            if (!((int)(v5) > 0x3c)) {
                goto L_8c0d288e;
            }
            v2->f00 = 0;
            v1->f00 = 1;
            ((Arg0_s3f4 *)((char *)o + 0x3f4))->v2();
            ((ObjectData *)o)->f3dc |= 2;
            break;
        case 1:
            t3 = ((Arg0_s3f4 *)((char *)o + 0x3f4))->v4();
            if (t3 != 0) {
                v1->f00 = 3;
            }
        }
L_8c0d288e:;
        o->v108();
        o->v95();
    }
}
