typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
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
    virtual int v11(float, float);
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
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d2];
    short f30a;
} ObjectData;
struct Frame {
    char unknown0[0x8];
    float f08;
};
extern "C" int operation_8c03d338(void);
extern "C" void call_8c3be280(int, void *, Frame *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void create_effect_777c(void *, int);
extern "C" void operation_8c129c84(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    t1 = operation_8c03d338();
    if (t1 == 0) {
        t2 = o->v11(300.0f, 20.0f);
        if (t2 == 0) {
            ((ObjectData *)o)->f34 |= 0x8000000;
        } else {
            call_8c3be280(0, (void *)(((char *)o + 0x3c)), (Frame *)((&frame)));
            if (35.0f > (&frame)->f08) {
                ((ObjectData *)o)->f34 |= 0x8000000;
            } else {
                ((ObjectData *)o)->f34 &= -0x8000001;
            }
        }
        o->v87();
        if (((((ObjectData *)o)->f34 & 0x8000000)) == 0 && ((ObjectData *)o)->f30a != 3) {
            t3 = check_range_8c01cf68((void *)o, 8.0f);
            if (t3 != 0) {
                create_effect_777c((void *)(((char *)o + 0x3c)), 0x64);
            }
        }
    }
}
