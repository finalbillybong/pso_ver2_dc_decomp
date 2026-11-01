typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block64 {
    int words[16];
} Block64;
typedef struct Frame Frame;
typedef struct Arg2 Arg2;
typedef struct S_x28656 S_x28656;
typedef struct S_x77872 S_x77872;
class Object;
typedef struct Block_frame_4 {
    int f00;
    char unknown4[0x2];
    short f06;
    char unknown8[0x4];
} Block_frame_4;
typedef struct Block_p2_0 {
    char unknown0[0x2];
    short f02;
    char unknown4[0x3c];
} Block_p2_0;
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
    virtual void v88(Arg2 *);
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x10];
    short f30;
    char unknown32[0x2];
    int f34;
    char unknown38[0x358];
    Block64 f390;
    int f3d0;
} ObjectData;
struct Frame {
    Block_frame_4 f04;
};
struct S_x28656 {
    Vector3 f00;
};
struct S_x77872 {
    Vector3 f00;
};
struct Arg2 {
    Block_p2_0 f00;
};
extern int g_8c30a268;
extern int g_8c46ed10;
extern "C" void TObjEnemy_ctor_8c012008(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c0f7f70(int);
extern "C" Object *TObjEneSlime_ctor_8c0f7c7c(Object *o, int a1, Arg2 *a2)
{
    Frame frame;
    Object **home = &o;
    int v7;
    short v1;
    int t1;
    int k;
    (void)home;
    TObjEnemy_ctor_8c012008((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c268e94;
    ((ObjectData *)o)->tag = (int)(g_8c30a268);
    ((ObjectData *)o)->size = 0x3f4;
    o->v88(a2);
    v1 = (short)((ObjectData *)o)->f30;
    if ((short)v1 < 0 || (short)v1 > 0xb4f) {
        v7 = (int)0;
        goto L_8c0f7ce2;
    }
    *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&((S_x28656 *)(g_8c46ed10 + (short)v1 * 0xc))->f00;
    v7 = (int)1;
L_8c0f7ce2:;
    if (v7 != 0) {
        (&frame)->f04.f00 = 0;
        (&frame)->f04.f06 = 0;
        if ((short)v1 >= 0 && !((short)v1 > 0xb4f)) {
            *(Vector3 *)&((S_x77872 *)(g_8c46ed10 + (short)v1 * 0xc))->f00 = *(Vector3 *)&(&frame)->f04;
        }
    }
    attach_and_insert_object((void *)o);
    *(Block64 *)&((ObjectData *)o)->f390 = *(Block64 *)&a2->f00;
    k = 0x3d0;
    *(int *)((char *)o + k) = a2->f00.f02;
    {
        if (1 > ((ObjectData *)o)->f3d0) {
            t1 = operation_8c03d338();
            if (t1 == 0) {
                goto L_8c0f7d64;
            }
            ((ObjectData *)o)->f3d0 = 3;
        } else {
            if (((ObjectData *)o)->f3d0 > 4) {
                ((ObjectData *)o)->f3d0 = 4;
            }
        }
    }
L_8c0f7d64:;
    ((ObjectData *)o)->f34 |= 0x2000000;
    operation_8c0f7f70((int)o);
    return o;
}
