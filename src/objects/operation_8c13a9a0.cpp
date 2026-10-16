typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_184 Arg0_184;
class Object;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
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
    virtual int v41();
    virtual int v42();
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
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Block_p0_3c f3c;
    Vector3 f48;
    char unknown54[0x130];
    Arg0_184 *f184;
    char unknown188[0x168];
    int f2f0;
    float f2f4;
    int f2f8;
    char unknown2fc[0xe];
    short f30a;
    char unknown30c[0x18];
    Block_p0_324 f324;
    char unknown330[0x60];
    int f390;
    char unknown394[0x4];
    int f398;
    char unknown39c[0x48];
    int f3e4;
} ObjectData;
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
extern "C" int call_8c13b4e4(Object *);
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c13ac40(Object *);
extern "C" void operation_8c13ab80(void *);
extern "C" void word_operation_8c139fb8(unsigned int);
extern "C" void operation_8c13a9a0(Object *o)
{
    float v11;
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = call_8c13b4e4(o);
    *(int *)0x8c4d9b70 = (int)t1;
    t2 = operation_8c03d338();
    if (t2 == 1) {
        operation_8c13ac40(o);
        return;
    }
    *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
    if (((ObjectData *)o)->f3e4 > 0) {
        ((ObjectData *)o)->f3e4 -= 1;
    }
    t3 = o->v42();
    if (t3 != 0) {
        o->v71();
    } else {
        t4 = o->v41();
        if (t4 != 0) {
            if (((ObjectData *)o)->f3e4 > 0) {
                ((ObjectData *)o)->f34 &= -0x201;
            } else {
                o->v70();
            }
        }
    }
    if (((((ObjectData *)o)->f34 & 0x4000)) != 0) {
        if (--((ObjectData *)o)->f2f8 <= 0) {
            ((ObjectData *)o)->f2f0 = 0;
            ((ObjectData *)o)->f2f4 = 0.0f;
            ((ObjectData *)o)->f2f8 = 0;
            ((ObjectData *)o)->f34 &= -0x4001;
        }
        return;
    }
    if (((ObjectData *)o)->f30a != ((ObjectData *)o)->f390) {
        if (((ObjectData *)o)->f398 != -1) {
            ((ObjectData *)o)->f398 = -1;
            operation_8c13ab80((void *)o);
        }
        ((ObjectData *)o)->f30a = ((ObjectData *)o)->f390;
        ((ObjectData *)o)->f398 = 0;
    }
    operation_8c13ab80((void *)o);
    if (((ObjectData *)o)->f3c.f04 > 7.0f) {
        v11 = (float)((ObjectData *)o)->f3c.f04;
    } else {
        v11 = (float)7.0f;
    }
    ((ObjectData *)o)->f3c.f04 = v11;
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    if (((ObjectData *)o)->f184 != 0) {
        ((ObjectData *)o)->f324.f04 += ((ObjectData *)o)->f184->f10 * 0.5f;
    }
    word_operation_8c139fb8((unsigned int)(((char *)o + 0x324)));
    o->v64();
}
