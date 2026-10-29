typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c469a8c S_g8c469a8c;
typedef struct S_g8c469aac S_g8c469aac;
typedef struct S_g8c469ab0 S_g8c469ab0;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_41c Arg0_41c;
typedef struct Arg0_420 Arg0_420;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv18 S_vv18;
typedef struct S_vv26 S_vv26;
class Object;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
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
    virtual int v12(float, float, float);
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
    virtual int v41();
    virtual int v42();
    virtual void v43();
    virtual void v44();
    virtual int v45();
    virtual void v46();
    virtual void v47();
    virtual int v48();
    virtual int v49();
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
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x30];
    Vector3 f78;
    char unknown84[0x58];
    Arg0_dc *fdc;
    char unknowne0[0xa4];
    Arg0_184 *f184;
    char unknown188[0x182];
    short f30a;
    char unknown30c[0x18];
    Block_p0_324 f324;
    char unknown330[0x60];
    int f390;
    char unknown394[0x4];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    float f3a8;
    char unknown3ac[0x24];
    Vector3 f3d0;
    char unknown3dc[0x40];
    Arg0_41c *f41c;
    Arg0_420 *f420;
    char unknown424[0x1c];
    int f440;
} ObjectData;
struct Arg0_dc {
    char unknown0[0x4];
    float f04;
    char unknown8[0x20];
    float f28;
};
struct S_g8c469a8c {
    char unknown0[0x20];
    int f20;
};
struct S_vv18 {
    char unknown0[0x4];
    short f04;
};
struct S_vv26 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct Frame {
    Block_frame_0 f00;
};
extern int g_8c418244;
extern S_g8c469a8c *g_8c469a8c;
extern int g_8c469aa8;
extern S_g8c469aac *g_8c469aac;
extern S_g8c469ab0 *g_8c469ab0;
extern "C" void call_8c0344f0(void *, int, int, int);
extern "C" int operation_8c03d338(void);
extern "C" void copy_scale_8c07afd8(Object *);
extern "C" void operation_8c07a7ec(Object *);
extern "C" int create_effect_769c(void *, int);
extern "C" void call_8c0a7608(void *, void *);
extern "C" void operation_8c027090(int);
extern "C" void operation_8c102cd0(void *, int, int, int);
extern "C" void operation_8c07ac08(void *);
extern "C" void call_8c07aad0(Object *);
extern "C" void create_effect_777c(void *, int);
extern "C" void operation_8c0792b4(Object *o)
{
    Frame frame;
    int v1;
    int v24;
    float v47;
    float v48;
    float v49;
    float v50;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int pm14;
    v1 = g_8c418244;
    if (g_8c469aa8 != v1) {
        int pm12;
        g_8c469aa8 = (int)v1;
        call_8c0344f0(g_8c469aac, 8, 0, 1);
        pm12 = 0;
        call_8c0344f0(g_8c469ab0, 8, pm12, 0);
    }
    t1 = operation_8c03d338();
    if (t1 == 1) {
        copy_scale_8c07afd8(o);
        operation_8c07a7ec(o);
        return;
    }
    t2 = o->v42();
    if (t2 != 0) {
        o->v71();
    } else {
        t3 = o->v41();
        if (t3 != 0) {
            o->v70();
        } else {
            if (((((ObjectData *)o)->f34 & 0x100)) != 0) {
                o->v69();
            }
        }
    }
    o->v50();
    o->v51();
    pm14 = 0x400000;
    if (((((ObjectData *)o)->f3a4 & pm14)) != 0 && ((((ObjectData *)o)->f34 & 0x22)) == 0) {
        ((ObjectData *)o)->f440 += 0x800;
        ((ObjectData *)o)->fdc->f28 = (float)g_8c469a8c->f20;
    } else {
        ((ObjectData *)o)->fdc->f28 = 0.0f;
    }
    if (((((ObjectData *)o)->f3a4 & 0x800000)) != 0) {
        if (0 == ((((ObjectData *)o)->f34 & 0x22))) {
            if (!(((ObjectData *)o)->f420 != 0)) {
                int t4;
                t4 = create_effect_769c((void *)(((char *)o + 0x324)), 0xdb);
                ((ObjectData *)o)->f420 = (Arg0_420 *)(int)t4;
                goto L_8c07948e;
            }
            call_8c0a7608((void *)(((ObjectData *)o)->f420), (void *)((0x324 + (char *)o)));
            goto L_8c07948e;
        }
    }
    if (0 != ((ObjectData *)o)->f420) {
        ((S_vv18 *)((ObjectData *)o)->f420)->f04 |= 1;
        ((ObjectData *)o)->f420 = (Arg0_420 *)0;
    }
L_8c07948e:
    ;
    v24 = (int)((ObjectData *)o)->f3a4;
    if (((v24 & 0x200000)) != 0 && 0 == ((((ObjectData *)o)->f34 & 0x22))) {
        void *pm11;
        if (0 == ((ObjectData *)o)->f41c) {
            if (((v24 & 0x4000000)) != 0) {
                t5 = create_effect_769c((void *)(((char *)o + 0x3d0)), 0xd9);
                ((ObjectData *)o)->f41c = (Arg0_41c *)(int)t5;
                goto L_8c079542;
            }
            t6 = create_effect_769c((void *)(((char *)o + 0x3d0)), 0xd4);
            ((ObjectData *)o)->f41c = (Arg0_41c *)(int)t6;
            goto L_8c079542;
        }
        pm11 = (void *)(((char *)o + 0x3d0));
        call_8c0a7608((void *)(((ObjectData *)o)->f41c), pm11);
        goto L_8c079542;
    }
    if (((ObjectData *)o)->f41c != 0) {
        ((S_vv26 *)((ObjectData *)o)->f41c)->f04 |= 1;
        ((ObjectData *)o)->f41c = (Arg0_41c *)0;
    }
L_8c079542:
    ;
    t7 = o->v45();
    if (t7 == 0) {
        int t8;
        t8 = o->v49();
        if (t8 == 0) {
            int t9;
            t9 = o->v48();
            if (t9 == 0) {
                goto L_8c0795ac;
            }
        }
    }
    operation_8c027090((int)o);
    operation_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    return;
L_8c0795ac:
    ;
    if (((ObjectData *)o)->f30a != ((ObjectData *)o)->f390) {
        if (((ObjectData *)o)->f398 != -1) {
            ((ObjectData *)o)->f398 = -1;
            operation_8c07ac08((void *)o);
        }
        ((ObjectData *)o)->f30a = ((ObjectData *)o)->f390;
        ((ObjectData *)o)->f398 = 0;
    }
    operation_8c07ac08((void *)o);
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    if (((ObjectData *)o)->f184 != 0) {
        ((ObjectData *)o)->f324.f04 += ((ObjectData *)o)->f184->f10 * 0.5f;
    }
    ((ObjectData *)o)->f324.f04 = ((ObjectData *)o)->f3a8 + ((ObjectData *)o)->f324.f04;
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f3d0;
    if (((((ObjectData *)o)->f3a4 & 0x80000)) != 0) {
        v47 = (float)(((ObjectData *)o)->f3a8 + 0.5f);
        if (10.0f > v47) {
            v48 = (float)v47;
        } else {
            v48 = (float)10.0f;
        }
        ((ObjectData *)o)->f3a8 = v48;
    } else {
        v49 = (float)(((ObjectData *)o)->f3a8 - 0.5f);
        if (v49 > 0.0f) {
            v50 = (float)v49;
        } else {
            v50 = (float)0.0f;
        }
        ((ObjectData *)o)->f3a8 = v50;
    }
    call_8c07aad0(o);
    ((ObjectData *)o)->fdc->f04 = ((ObjectData *)o)->f3a8 + 4.0f;
    if (((3 & g_8c418244)) == 0) {
        if (0 != ((((ObjectData *)o)->f3a4 & 0x400000)) && 0 == ((((ObjectData *)o)->f34 & 0x22))) {
            int t10;
            t10 = o->v12(150.0f, 400.0f, 15.0f);
            if (t10 != 0) {
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
                (&frame)->f00.f04 += ((ObjectData *)o)->f3a8;
                create_effect_777c((void *)(&frame), 0xd6);
            }
        }
    }
}
