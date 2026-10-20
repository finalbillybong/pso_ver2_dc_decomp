typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct Arg0_484 Arg0_484;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
class Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0xc];
} Block_frame_0;
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
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x8];
    float f40;
    char unknown44[0x24];
    int f68;
    char unknown6c[0x84];
    short ff0;
    char unknownf2[0x23e];
    short f330;
    char unknown332[0xb2];
    int f3e4;
    char unknown3e8[0x20];
    float f408;
    char unknown40c[0x8];
    float f414;
    int f418;
    char unknown41c[0x10];
    int f42c;
    char unknown430[0x54];
    Arg0_484 *f484;
} ObjectData;
struct S_vv1 {
    S_vv1_0 *f00;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_484 {
    char unknown0[0x8];
    float f08;
};
extern Block20 g_8c28500c;
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" void call_8c01c5f0(Object *);
extern "C" int call_8c05c0dc(Object *, float);
extern "C" void operation_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" void call_8c05c750(Object *, int, float);
extern "C" void call_8c05b410(Object *, Frame *);
extern "C" int call_8c18e8a0(void *, int);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void operation_8c094348(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    float v6;
    float v7;
    int t1;
    int t2;
    v1 = (S_vv1 *)((char *)o + 0x48c);
    switch (a1) {
    case 4:
        if (((ObjectData *)o)->f418 == 4) {
            ((ObjectData *)o)->ff0 = 2;
            ((ObjectData *)o)->f418 = 5;
        }
        operation_8c059ef8((void *)o, 0xa);
        o->v102();
        *(int *)((char *)o + 0x3e4) &= -0x400001;
        ((ObjectData *)o)->f3e4 |= 0x200000;
        ((ObjectData *)o)->f42c = -0x7f80;
        return;
    case 3:
        if (!((int)(v1->f00) >= 0x96)) {
            return;
        }
        operation_8c059ea4((void *)o, 0xd);
        ((ObjectData *)o)->f330 = 0;
        ((ObjectData *)o)->f34 |= 0x800;
        call_8c05fbf8(0x3001f, (void *)(((char *)o + 0x324)), 0, 0);
        return;
    case 0:
        call_8c01c5f0(o);
        t1 = call_8c05c0dc(o, 200.0f);
        if (t1 != 0) {
            operation_8c05c184((void *)o);
        }
        aim_direction_8c05bdd4((void *)o);
        v6 = (float)(((ObjectData *)o)->f40 + ((ObjectData *)o)->f408);
        v7 = (float)(v6 - ((ObjectData *)o)->f414);
        *(int *)((char *)o + 0x3e4) &= -0x80001;
        if (!(0.5f > v7)) {
            ((ObjectData *)o)->f414 += 0.5f;
        } else {
            if (!(v7 > -0.5f)) {
                ((ObjectData *)o)->f414 -= 0.5f;
            } else {
                ((ObjectData *)o)->f414 = v6;
                ((ObjectData *)o)->f3e4 |= 0x80000;
            }
        }
        call_8c05c750(o, 0x200, 0.68f);
        ((ObjectData *)o)->f68 += 0x2000;
        v1->f00 = (S_vv1_0 *)((int)v1->f00 + 1);
        if ((int)(v1->f00) >= 0x96) {
            *(Block20 *)&(&frame)->f00 = *(Block20 *)&g_8c28500c;
            (&frame)->f00.f04 = ((ObjectData *)o)->f484->f08;
            call_8c05b410(o, (Frame *)((&frame)));
            ((ObjectData *)o)->f3e4 |= 0x800000;
        }
        t2 = call_8c18e8a0((void *)(v1->f00), 0xa);
        if (5 > t2) {
            ((ObjectData *)o)->f42c = -0x10000;
        } else {
            ((ObjectData *)o)->f42c = -0x1000000;
        }
        call_8c05fd7c(0x3001d, o, (void *)(((char *)o + 0x324)), 0, 0);
        o->v95();
        return;
    case 5:
        ((ObjectData *)o)->f68 = 0;
        return;
    case 1:
    case 2:
        break;
    }
}
