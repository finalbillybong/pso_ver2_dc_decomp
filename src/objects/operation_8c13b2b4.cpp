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
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x28];
    int f60;
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x262];
    unsigned short f354;
    char unknown356[0x2];
    short f358;
    char unknown35a[0x3e];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    char unknown3a8[0x4];
    int f3ac;
    int f3b0;
    int f3b4;
} ObjectData;
extern "C" void call_8c13b3f8(Object *);
extern "C" int operation_8c13b3b4(void *);
extern "C" void call_8c01c5f0(Object *);
extern "C" void operation_8c13b2b4(Object *o)
{
    int t1;
    switch (((ObjectData *)o)->f398) {
    case -1:
        break;
    case 0:
        ((ObjectData *)o)->f34 |= 0x40000;
        *(int *)((char *)o + 0x3a4) |= 0x20000;
        ((ObjectData *)o)->f3ac = 0x4000;
        ((ObjectData *)o)->f3b0 = -0x1555;
        ((ObjectData *)o)->f354 = 0xffff;
        ((ObjectData *)o)->f3a4 |= 0x10000;
        ((ObjectData *)o)->ff0 = 0;
        ((ObjectData *)o)->f60 = 0;
        call_8c13b3f8(o);
        t1 = operation_8c13b3b4((void *)o);
        ((ObjectData *)o)->f3b4 = (int)t1;
        ((ObjectData *)o)->f64 = (int)(((ObjectData *)o)->f3b4);
        ((ObjectData *)o)->f358 = 0x5a;
        ((ObjectData *)o)->f398 = 1;
    case 1:
        call_8c01c5f0(o);
        if (!((short)--((ObjectData *)o)->f358 > 0)) {
            ((ObjectData *)o)->f34 &= -0x40001;
            ((ObjectData *)o)->f3a4 = (unsigned int)((ObjectData *)o)->f3a4 >> 1 << 1;
            o->v66();
        }
    }
}
