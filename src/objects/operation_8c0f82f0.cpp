typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_x15568 S_x15568;
typedef struct S_x82608 S_x82608;
class Object;
typedef struct Block_frame_4 {
    int f00;
    char unknown4[0x2];
    short f06;
    char unknown8[0x4];
} Block_frame_4;
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
    virtual void v88(int);
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x10];
    short f30;
    char unknown32[0x28a];
    int f2bc;
    char unknown2c0[0x14c];
    int f40c;
} ObjectData;
struct Frame {
    Block_frame_4 f04;
};
struct S_x82608 {
    Vector3 f00;
};
struct S_x15568 {
    Vector3 f00;
};
extern "C" void call_8c012008(Object *);
extern "C" void call_8c0f8508(Object *);
extern "C" void operation_8c051ff4(void *, void *, void *);
extern "C" void call_8c0f8a80(Object *, int);
extern "C" Object *operation_8c0f82f0(Object *o, int a1, int a2, int a3)
{
    Frame frame;
    Object **home = &o;
    int v7;
    short v1;
    (void)home;
    call_8c012008(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c268d28;
    ((ObjectData *)o)->tag = (int)(*(int *)0x8c30a27c);
    ((ObjectData *)o)->size = 0x414;
    ((ObjectData *)o)->f2bc |= 2;
    o->v88(a3);
    v1 = (short)((ObjectData *)o)->f30;
    if ((short)v1 < 0 || (short)v1 > 0xb4f) {
        v7 = (int)0;
        goto L_8c0f836a;
    }
    *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&((S_x82608 *)(*(int *)0x8c46ed10 + (short)v1 * 0xc))->f00;
    v7 = (int)1;
L_8c0f836a:;
    if (v7 != 0) {
        (&frame)->f04.f00 = 0;
        (&frame)->f04.f06 = 0;
        if ((short)v1 >= 0 && !((short)v1 > 0xb4f)) {
            *(Vector3 *)&((S_x15568 *)(*(int *)0x8c46ed10 + (short)v1 * 0xc))->f00 = *(Vector3 *)&(&frame)->f04;
        }
    }
    ((ObjectData *)o)->f40c = a2;
    call_8c0f8508(o);
    operation_8c051ff4((void *)o, (void *)(((char *)o + 0x3c)), (void *)0);
    call_8c0f8a80(o, 0);
    return o;
}
