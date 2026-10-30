typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
class Object;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
typedef struct Block_p0_318 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_318;
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
};
typedef struct ObjectData {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x226];
    Block_p0_318 f318;
    char unknown324[0x70];
    int f394;
    char unknown398[0xb4];
    int f44c;
    char unknown450[0xc];
    int f45c;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
};
extern "C" void call_8c01c5f0(Object *);
extern "C" void set_field_8c05af48(void *);
extern "C" void operation_8c059ea4(void *, int);
extern "C" float normalize_xz_checked(void *);
extern "C" void clamp_and_apply_contact(void *, float, float, float);
extern "C" void reset_segments_8c05a124(void *);
extern "C" void set_field_8c05af54(void *);
extern "C" void operation_8c0f6c0c(Object *o, int a1)
{
    Frame frame;
    int v1;
    float t1;
    float pm2;
    int pm3;
    int pm4;
    switch (a1) {
        case 4:
        pm4 = 6;
        ((ObjectData *)o)->ff0 = (short)pm4;
        call_8c01c5f0(o);
        set_field_8c05af48((void *)o);
        return;
        case 3:
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            return;
        }
        if (((ObjectData *)o)->f45c >= 5) {
            operation_8c059ea4((void *)o, 8);
            v1 = (int)1;
        } else {
            v1 = (int)0;
        }
        if (v1 != 0) {
            return;
        }
        operation_8c059ea4((void *)o, (int)(((ObjectData *)o)->f394));
        return;
        case 0:
        call_8c01c5f0(o);
        pm3 = ((ObjectData *)o)->f44c;
        ((ObjectData *)o)->f44c = pm3 - 1;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)(&((ObjectData *)o)->f318);
        t1 = normalize_xz_checked((void *)(&frame));
        clamp_and_apply_contact((void *)o, (&frame)->f00.f00, (&frame)->f00.f08, t1);
        pm2 = 0.8f;
        ((ObjectData *)o)->f318.f00 *= 0.8f;
        ((ObjectData *)o)->f318.f08 *= pm2;
        o->v95();
        return;
        case 5:
        reset_segments_8c05a124((void *)o);
        set_field_8c05af54((void *)o);
    }
}
