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
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
    virtual void v109();
    virtual void v110();
    virtual void v111();
    virtual void v112();
    virtual void v113();
    virtual void v114();
    virtual void v115(int);
    virtual void v116(int);
    virtual void v117(int);
};
typedef struct ObjectData {

} ObjectData;
extern "C" void operation_8c0913a4(void *, int);
extern "C" void call_8c091484(int, int);
extern "C" void call_8c091600(int, int);
extern "C" void call_8c091dd4(int, int);
extern "C" void call_8c092490(int, int);
extern "C" void call_8c092e5c(int, int);
extern "C" void call_8c093a1c(int, int);
extern "C" void call_8c093ec0(int, int);
extern "C" void call_8c094348(int, int);
extern "C" void call_8c0945dc(int, int);
extern "C" void call_8c094084(int, int);
extern "C" void call_8c094724(int, int);
extern "C" void operation_8c094a44(void *, int);
extern "C" void call_8c094acc(int, int);
extern "C" void operation_8c091238(Object *o, int a1, int a2)
{
    switch (a1) {
    case 0:
        operation_8c0913a4((void *)o, a2);
        return;
    case 1:
        call_8c091484((int)(o), a2);
        return;
    case 2:
        call_8c091600((int)(o), a2);
        return;
    case 3:
        o->v115(a2);
        return;
    case 4:
        o->v116(a2);
        return;
    case 5:
        call_8c091dd4((int)(o), a2);
        return;
    case 6:
        call_8c092490((int)(o), a2);
        return;
    case 7:
        call_8c092e5c((int)(o), a2);
        return;
    case 8:
        call_8c093a1c((int)(o), a2);
        return;
    case 9:
        call_8c093ec0((int)(o), a2);
        return;
    case 10:
        call_8c094348((int)(o), a2);
        return;
    case 11:
        call_8c0945dc((int)(o), a2);
        return;
    case 12:
        call_8c094084((int)(o), a2);
        return;
    case 13:
        o->v117(a2);
        return;
    case 14:
        call_8c094724((int)(o), a2);
        return;
    case 16:
        operation_8c094a44((void *)o, a2);
        return;
    case 17:
        call_8c094acc((int)(o), a2);
        return;
    case 15:
        break;
    }
}
