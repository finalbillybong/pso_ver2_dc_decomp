typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_28_0 Arg0_28_0;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_40c Arg0_40c;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_s3f8 Arg0_s3f8;
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
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x4];
    float f40;
    char unknown44[0x20];
    Arg0_64 *f64;
    char unknown68[0x2c0];
    float f328;
    char unknown32c[0xbc];
    int f3e8;
    int f3ec;
} ObjectData;
struct Frame {
    Vector3 f00;
};
struct Arg0_28 {
    Arg0_28_0 *f00;
};
struct Arg0_28_0 {
    char unknown0[0x2c];
    int f2c;
};
struct Arg0_s3f8 {
    char unknown0[0x14];
    Arg0_40c *f14;
};
struct Arg0_40c {
    char unknown0[0x20];
    int f20;
    int f24;
};
extern "C" int operation_8c03d338(void);
extern "C" int operation_8c05bae8(void);
extern "C" void call_8c04a9e0(Object *, Frame *);
extern "C" void call_8c05b9dc(Object *);
extern "C" void call_8c3827d8(Arg0_28 *);
extern "C" void operation_8c05baa8(void);
extern "C" void call_8c1086fc(void);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c3829bc(int, float, float, float);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c37e2e4(int, float, float, float);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c38ad10(void);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c05b9e8(Object *);
extern "C" void operation_8c0c8888(Object *o)
{
    Frame frame;
    float v2;
    char *v6;
    int t1;
    int t2;
    int t3;
    t1 = operation_8c03d338();
    if (t1 != 0) {
        o->v111();
        return;
    }
    t2 = operation_8c05bae8();
    if (t2 != 0) {
        v2 = (float)*(float *)0x8c284bd4;
    } else {
        v2 = (float)400.0f;
    }
    if (((((ObjectData *)o)->f3e8 & 0x100)) != 0) {
        t3 = o->v11(v2, 20.0f);
        if (t3 != 0) {
            if (((((ObjectData *)o)->f3e8 & 0x800)) != 0) {
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&*(Vector3 *)0x8c3066a4;
                call_8c04a9e0(o, (Frame *)((&frame)));
            }
            call_8c05b9dc(o);
            v6 = (char *)((ObjectData *)o)->f28->f00->f2c;
            ((ObjectData *)o)->f28->f00->f2c = (int)(*(int *)((char *)((char *)((ObjectData *)o)->f28->f00 + 0x8) + (((ObjectData *)o)->f3ec * 0xc)));
            call_8c3827d8((Arg0_28 *)(((ObjectData *)o)->f28));
            *(int *)0x8c46f560 = (int)(*(int *)0x8c575570);
            operation_8c05baa8();
            call_8c1086fc();
            if (((((ObjectData *)o)->f3e8 & 0x200)) != 0) {
                ((void (*)(void *))(((Arg0_s3f8 *)((char *)o + 0x3f8))->f14->f20))((void *)(((char *)o + 0x3f8)));
            }
            call_8c38ae68();
            call_8c382a40((void *)(((char *)o + 0x3c)));
            call_8c3829bc(0, 0.0f, ((ObjectData *)o)->f328 - ((ObjectData *)o)->f40, 0.0f);
            call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            call_8c37e2e4(0, 2.0f, 2.0f, 2.0f);
            call_8c3aa716((void *)(((ObjectData *)o)->f38));
            call_8c38ad10();
            ((void (*)(void *))(((Arg0_s3f8 *)((char *)o + 0x3f8))->f14->f24))((void *)(((char *)o + 0x3f8)));
            *(int *)0x8c575570 = (int)(*(int *)0x8c46f560);
            call_8c391cc4();
            call_8c05b9e8(o);
            ((ObjectData *)o)->f28->f00->f2c = (int)v6;
        }
    }
}
