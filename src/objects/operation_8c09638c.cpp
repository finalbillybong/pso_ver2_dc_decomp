typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469e1c S_g8c469e1c;
typedef struct S_vv4 S_vv4;
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
    virtual int v114();
};
typedef struct ObjectData {
    char unknown0[0x4];
    short f04;
    char unknown6[0x22];
    int f28;
    char unknown2c[0x8];
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x37c];
    int f3e4;
} ObjectData;
struct S_vv4 {
    int f00;
};
extern S_g8c469e1c *g_8c469e1c;
extern "C" void operation_8c108644(int, int, int, int, int);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" void refresh_follow_effect_8c0129f4(void *);
extern "C" void operation_8c09e6d0(void *);
extern "C" void operation_8c09638c(Object *o, int a1)
{
    int v3;
    int v1;
    int v2;
    S_vv4 *v4;
    int t1;
    int off;
    switch (a1) {
    case 4:
        off = 0x324;
        operation_8c108644((int)g_8c469e1c, 0, ((ObjectData *)o)->f28, (int)((char *)o + off), ((ObjectData *)o)->f64);
        v3 = (int)0;
        v1 = (int)0x3e4;
        v2 = (int)0x4ec;
        while (*(int *)((char *)((char *)o + 0x0) + (v2)) > v3) {
            v4 = (S_vv4 *)((int)*(int *)((char *)((char *)o + 0x4f0) + (v3 << 2)) + v1);
            v4->f00 |= 0x20;
            v3 = (int)(v3 + 1);
        }
        ((ObjectData *)o)->f3e4 |= 0x400000;
        call_8c05fbf8(0x3001d, (void *)(((char *)o + 0x324)), 0, 0);
        refresh_follow_effect_8c0129f4((void *)o);
        return;
    case 0:
        t1 = o->v114();
        if (t1 == 0) {
            return;
        }
        operation_8c09e6d0((void *)o);
        ((ObjectData *)o)->f04 |= 1;
        return;
    case 5:
        ((ObjectData *)o)->f34 &= -0x201;
        return;
    case 1:
    case 2:
    case 3:
        break;
    }
}
