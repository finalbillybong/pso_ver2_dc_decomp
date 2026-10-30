typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
typedef struct S_x7984 S_x7984;
class S_c8c012a14;
typedef struct Block_frame_0 {
    int f00;
    char unknown4[0x2];
    short f06;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x2];
    short f02;
    short f04;
    short f06;
    int f08;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_vv2 {
    Vector3 f00;
};
struct S_x7984 {
    Vector3 f00;
};
class S_c8c012a14 {
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
    virtual void v87(Frame *);
};
typedef struct S_c8c012a14Data {

} S_c8c012a14Data;
extern int g_8c46ed10;
extern int g_8c4703c0;
extern "C" S_c8c012a14 *operation_8c012a14(short);
extern "C" void operation_8c012efc(Object *o)
{
    S_c8c012a14 *t1;
    short id;
    int v1;
    Frame frame;
    id = o->f04;
    v1 = (int)g_8c46ed10;
    ((S_vv2 *)&frame)->f00 = *(Vector3 *)(v1 + (unsigned short)id * 0xc);
    (&frame)->f00.f06 = o->f06;
    if (g_8c4703c0 == 3) {
        (&frame)->f00.f00 &= 0x3f;
        (&frame)->f00.f00 |= o->f08 & -0x40;
    } else {
        (&frame)->f00.f00 = o->f08;
    }
    if (!(id > 0xb4f)) {
        *(Vector3 *)&((S_x7984 *)(v1 + id * 0xc))->f00 = *(Vector3 *)&(&frame)->f00;
    }
    t1 = operation_8c012a14(o->f02);
    if (t1 != 0) {
        t1->v87((&frame));
    }
}
