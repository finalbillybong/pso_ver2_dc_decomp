typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
class Object;
class S_vv5;
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
};
typedef struct ObjectData {
    char unknown0[0x30c];
    short f30c;
} ObjectData;
class S_vv5 {
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
};
typedef struct S_vv5Data {
    int f00;
} S_vv5Data;
extern "C" void operation_8c0fd3dc(Object *o)
{
    int v3;
    char *v4;
    S_vv5 *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v1;
    int v2;
    switch (((ObjectData *)o)->f30c) {
    case 0:
        ((ObjectData *)o)->f30c = 1;
        v1 = (int)0x354;
        v3 = (int)*(int *)0x8c467878;
        v4 = (char *)v3;
        v2 = (int)0x358;
        while (*(int *)0x8c467870 > (int)(v4)) {
            v5 = (S_vv5 *)*(S_g8c467240 **)((char *)0x8c467240 + ((int)(v4) << 2));
            if (v5 != 0) {
                if (v5 != (void *)o) {
                    v6 = (int)((S_vv5Data *)v5)->f00;
                    v7 = (int)((int)v6 == *(int *)0x8c3137d0);
                    if (v7 == 0) {
                        v8 = (int)((int)v6 == *(int *)0x8c3137e8);
                        if (v8 == 0) {
                            v9 = (int)((int)v6 == *(int *)0x8c313800);
                            if (v9 == 0) {
                                v10 = (int)((int)v6 == *(int *)0x8c313818);
                                if (v10 == 0) {
                                    goto L_8c0fd464;
                                }
                            }
                        }
                    }
                    if (*(int *)((char *)((char *)v5 + 0x0) + (v1)) == 1) {
                        if (*(int *)((char *)((char *)v5 + 0x0) + (v2)) == *(int *)((char *)((char *)o + 0x0) + (v2))) {
                            v5->v97();
                        }
                    }
                }
            }
L_8c0fd464:;
            v4 = (char *)(v4 + 1);
        }
    }
    o->v88();
}
