typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct S_vv1 S_vv1;
class Object;
struct S_vv1 {
    int f00;
};
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
};
typedef struct ObjectData {
    char unknown0[0x3ac];
    Arg0_3ac *f3ac;
    char unknown3b0[0x1c];
    int f3cc;
    char unknown3d0[0x14];
    int f3e4;
    char unknown3e8[0x20];
    int f408;
} ObjectData;
extern "C" void operation_8c059ef8(void *, int);
extern "C" void reset_link_8c05bf28(void *);
extern "C" int call_8c0c9258(Object *, float, float);
extern "C" int active_unflagged_8c05b2dc(void *);
extern "C" void call_8c0c9410(Object *, float);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c0c9ffc(Object *o, int a1)
{
    S_vv1 *v1;
    int v3;
    int v6;
    int v26;
    int t1;
    int t2;
    v1 = (S_vv1 *)((char *)o + 0x4ac);
    switch (a1) {
    case 5:
        break;
    case 4:
        v1->f00 = 0;
        operation_8c059ef8((void *)o, 4);
        ((ObjectData *)o)->f3e4 &= -3;
        o->v101();
        reset_link_8c05bf28((void *)o);
        return;
    case 3:
        if (((ObjectData *)o)->f3cc >= 0x1e) {
            ((ObjectData *)o)->f3cc = 0;
            v3 = (int)1;
        } else {
            ((ObjectData *)o)->f3cc += 1;
            v3 = (int)0;
        }
        if (v3 != 0) {
            t2 = call_8c0c9258(o, 160000.0f, 160000.0f);
            v26 = (int)t2;
        } else {
            t1 = active_unflagged_8c05b2dc((void *)(((ObjectData *)o)->f3ac));
            if (t1 != 0) {
                v6 = (int)1;
            } else {
                reset_link_8c05bf28((void *)o);
                v6 = (int)0;
            }
            v26 = (int)v6;
        }
        if (v26 != 0) {
            if (((((ObjectData *)o)->f408 & 1)) != 0) {
                call_8c0c9410(o, 80.0f);
            } else {
                call_8c0c9410(o, 30.0f);
            }
            operation_8c059ea4((void *)o, 2);
            return;
        }
        if (!(v1->f00 > 0x5a)) {
            return;
        }
        operation_8c059ea4((void *)o, 1);
        return;
    case 0:
        v1->f00 += 1;
    }
}
