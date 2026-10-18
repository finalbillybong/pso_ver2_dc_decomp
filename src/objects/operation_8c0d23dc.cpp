typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
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
    int f3e0;
    int f3e4;
    int f3e8;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv3 {
    float f00;
};
struct S_vv2 {
    int f00;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" int call_8c05c0dc(Object *, float);
extern "C" void operation_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" float call_8c12b570(float);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" void operation_8c0d23dc(Object *o, int a1)
{
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    int v4;
    int v6;
    int v7;
    int v21;
    int v22;
    int t1;
    int t2;
    float t3;
    v1 = (S_vv1 *)((char *)o + 0x488);
    v2 = (S_vv2 *)((char *)o + 0x48c);
    v3 = (S_vv3 *)((char *)o + 0x498);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 0;
        o->v101();
        ((ObjectData *)o)->f3dc &= -8;
        operation_8c059ef8((void *)o, 4);
        ((ObjectData *)o)->f3e0 = 0xffffff;
        ((ObjectData *)o)->f3e4 = -0x1000000;
        ((ObjectData *)o)->f3e8 = 0;
        v1->f00 = 0;
        v3->f00 = 0.0f;
        v2->f00 = 0;
        return;
    case 3:
        if ((v2->f00 & 7) != 7) {
            return;
        }
        t1 = o->v105();
        if (t1 != 0) {
            operation_8c059ea4((void *)o, 9);
            v4 = (int)1;
        } else {
            v4 = (int)0;
        }
        if (v4 != 0) {
            return;
        }
        operation_8c059ea4((void *)o, 4);
        return;
    case 0:
        switch (v1->f00) {
        case 0:
            t2 = call_8c05c0dc(o, 400.0f);
            if (t2 == 0) {
                goto L_8c0d2578;
            }
            v1->f00 = 1;
            operation_8c05c184((void *)o);
            aim_direction_8c05bdd4((void *)o);
            break;
        case 1:
            v6 = (int)v2->f00;
            if (((v6 & 1)) == 0) {
                v7 = (int)((unsigned char)((unsigned int)(unsigned int)((ObjectData *)o)->f3e0 >> 0x10 >> 8) + 0x20);
                if (v7 >= 0xff) {
                    v2->f00 = v6 | 1;
                    v7 = (int)0xff;
                }
                ((ObjectData *)o)->f3e0 = v7 << 0x18 | ((ObjectData *)o)->f3e0 & 0xffffff;
            }
            if (((v2->f00 & 2)) == 0) {
                v3->f00 += 0.5f;
                t3 = call_8c12b570(v3->f00);
                ((ObjectData *)o)->f3e8 = (int)t3;
                if (((ObjectData *)o)->f3e8 >= 0xc) {
                    v2->f00 |= 2;
                    ((ObjectData *)o)->f3e8 = 0xc;
                }
            }
            v21 = (int)v2->f00;
            if (((v21 & 4)) == 0) {
                v22 = (int)((unsigned char)((ObjectData *)o)->f3e4 + 0x20);
                if (v22 >= 0xff) {
                    v2->f00 = v21 | 4;
                    v22 = (int)0xff;
                }
                ((ObjectData *)o)->f3e4 = v22 << 0x10 | -0x1000000 | v22 << 8 | v22;
            }
            call_8c05fd7c(0x3001e, o, (void *)(((char *)o + 0x3c)), 0, 0);
            update_last_effect(-0x100);
        }
L_8c0d2578:;
        o->v108();
        o->v95();
        return;
    case 5:
        ((ObjectData *)o)->f3e0 = -1;
        ((ObjectData *)o)->f3e8 = 0xc;
        o->v102();
    }
}
