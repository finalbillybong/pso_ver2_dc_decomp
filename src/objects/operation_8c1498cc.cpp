typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv1 S_vv1;
typedef struct S_x90960 S_x90960;
class Object;
class S_x5104_0;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
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
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x20];
    int f68;
    char unknown6c[0x84];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x2e0];
    int f3dc;
    char unknown3e0[0x294];
    int f674;
    char unknown678[0x4c];
    float f6c4;
    char unknown6c8[0x34];
    int f6fc;
} ObjectData;
struct S_x90960 {
    Vector3 f00;
};
struct S_vv1 {
    int f00;
};
struct Frame {
    Block_frame_0 f00;
};
class S_x5104_0 {
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
typedef struct S_x5104_0Data {

} S_x5104_0Data;
extern "C" void send_code_8c14472c(void *, int);
extern "C" void call_8c144d8c(Object *);
extern "C" void call_8c01c5f0(Object *);
extern "C" float operation_8c05b8c0(int);
extern "C" void operation_8c18582c(int, int);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c1498cc(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    int v3;
    int v2;
    float v4;
    float t1;
    int t2;
    v1 = (S_vv1 *)((char *)o + 0x700);
    switch (a1) {
    case 4:
        *(int *)((char *)o + 0x3dc) &= -5;
        ((ObjectData *)o)->f3dc |= 0x100;
        o->v102();
        v3 = (int)0;
        v2 = (int)0x600;
        while (0xa > v3) {
            (*(S_x5104_0 **)((char *)((char *)((int)o + v2) + 0x0) + (v3 << 2)))->v102();
            v3 = (int)(v3 + 1);
        }
        ((ObjectData *)o)->ff0 = 0xc;
        ((ObjectData *)o)->f674 = 3;
        *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&((S_x90960 *)(((ObjectData *)o)->f674 * 0xc + 0x8c286300))->f00;
        ((ObjectData *)o)->f6c4 = 0.0f;
        ((ObjectData *)o)->f68 = 0;
        v1->f00 = 0;
        ((ObjectData *)o)->f6fc = 0;
        return;
    case 2:
        if (((ObjectData *)o)->ff0 != 0xf) {
            return;
        }
        send_code_8c14472c((void *)o, 0x1b);
        return;
    case 9:
        if (((ObjectData *)o)->ff0 != 0xf) {
            return;
        }
        call_8c144d8c(o);
        return;
    case 0:
        call_8c01c5f0(o);
        v1->f00 += 1;
        v4 = (float)((ObjectData *)o)->ff8;
        if (!(10.0f > v4)) {
            if (!(v4 > 14.0f)) {
                if (!(3.0f > (float)v1->f00)) {
                    v1->f00 = 0;
                    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
                    t1 = operation_8c05b8c0((int)o);
                    (&frame)->f00.f00 += t1 * 30.0f;
                    (&frame)->f00.f04 = -5.0f;
                    (&frame)->f00.f08 += 80.0f;
                    operation_8c18582c((int)(&frame), 0x121);
                }
            }
        }
        t2 = check_range_8c01cf68((void *)o, 10.0f);
        if (t2 != 0) {
            call_8c05fbf8(0x30012, (void *)(((char *)o + 0x538)), 0, 0);
        }
        return;
    case 1:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
        break;
    }
}
