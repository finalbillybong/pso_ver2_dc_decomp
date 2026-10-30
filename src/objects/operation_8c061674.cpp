typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct S_vv1 S_vv1;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_4 S_vv4_4;
typedef struct S_vv8 S_vv8;
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
    char unknown0[0x3f4];
    int f3f4;
    int f3f8;
    short f3fc;
    char unknown3fe[0x6];
    Vector3 f404;
    Vector3 f410;
    char unknown41c[0x8];
    int f424;
} ObjectData;
struct S_vv4 {
    char unknown0[0x4];
    S_vv4_4 *f04;
    short f08;
};
struct S_c8c053d84 {
    char unknown0[0x3f8];
    int f3f8;
};
struct S_vv8 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x3e2];
    Vector3 f404;
};
extern int g_8c4688dc;
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" void operation_8c061674(Object *o, int a1)
{
    S_vv1 *v1;
    int v3;
    S_vv4 *v4;
    int v5;
    char *v2;
    S_vv8 *v8;
    S_c8c053d84 *t1;
    int off;
    v1 = (S_vv1 *)((char *)o + 0x43c);
    switch (a1) {
    case 5:
        break;
    case 4:
        v1->f00 = 0;
        operation_8c059ef8((void *)o, 0);
        o->v101();
        ((ObjectData *)o)->f424 |= 2;
        return;
    case 3:
        if (!(v1->f00 > 0)) {
            return;
        }
        operation_8c059ea4((void *)o, 1);
        return;
    case 0:
        v2 = (char *)((ObjectData *)o)->f3f8;
        off = 0x3f8;
        v3 = (int)g_8c4688dc;
        v4 = (S_vv4 *)v3;
        while (v4 != 0) {
            t1 = lookup_object_by_id((unsigned short)(v4->f08));
            if (t1 != 0) {
                v5 = *(int *)((char *)t1 + off);
                if (v5 == (int)(v2)) {
                    v8 = (S_vv8 *)t1;
                    goto L_8c061704;
                }
            }
            v4 = (S_vv4 *)v4->f04;
        }
        v8 = (S_vv8 *)0;
L_8c061704:;
        if (v8 != 0) {
            ((ObjectData *)o)->f3fc = v8->f20;
        }
        if (((ObjectData *)o)->f3f4 == 0) {
            if (v8 != 0) {
                goto L_8c061736;
            }
        }
        *(Vector3 *)&((ObjectData *)o)->f410 = *(Vector3 *)&((ObjectData *)o)->f404;
        goto L_8c06174a;
L_8c061736:;
        *(Vector3 *)&((ObjectData *)o)->f410 = *(Vector3 *)&v8->f404;
L_8c06174a:;
        v1->f00 += 1;
    }
}
