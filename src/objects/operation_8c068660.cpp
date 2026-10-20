typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_700 Arg0_700;
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
    virtual void v93(int, int);
};
typedef struct ObjectData {
    char unknown0[0x20];
    short f20;
    char unknown22[0x1e];
    float f40;
    char unknown44[0xac];
    short ff0;
    char unknownf2[0x2b6];
    unsigned short f3a8;
    char unknown3aa[0x24e];
    float f5f8;
    float f5fc;
    char unknown600[0x98];
    int f698;
    char unknown69c[0x10];
    float f6ac;
    float f6b0;
    char unknown6b4[0x4c];
    Arg0_700 *f700;
    char unknown704[0x128];
    int f82c;
} ObjectData;
struct Arg0_700 {
    char unknown0[0x8];
    int f08;
    char unknownc[0x10];
    float f1c;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    int f08;
    float f0c;
    float f10;
    char f14;
    char f15;
    short f16;
    short f18;
    short f1a;
    int f1c;
    float f20;
    float f24;
    char f28;
    char f29;
    short f2a;
    short f2c;
    short f2e;
    int f30;
    float f34;
    float f38;
};
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" int player_flag9_8c026508(void);
extern "C" void operation_8c0368a8(void *);
extern "C" void call_8c01c5f0(Object *);
extern "C" void operation_8c068660(Object *o, int a1)
{
    Frame frame;
    int v1;
    int v3;
    int v4;
    int v6;
    int t1;
    int t2;
    int *cnt;
    cnt = (int *)((char *)o + 0x82c);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 0;
        *cnt = 0;
        ((ObjectData *)o)->f5f8 = ((ObjectData *)o)->f40;
        ((ObjectData *)o)->f5fc = 0.0f;
        call_8c05fbf8(0x30000, (void *)(((char *)o + 0x658)), 0, 0);
        return;
    case 2:
    case 11:
        v1 = (int)((ObjectData *)o)->f700->f08;
        t1 = player_flag9_8c026508();
        v3 = (int)v1;
        if (t1 != 0) {
            v3 = (int)(v1 & -0x30607);
        }
        if (((v3 & 4)) != 0) {
            o->v93(3, 6);
            (&frame)->f28 = 0x12;
            (&frame)->f29 = 5;
            (&frame)->f2a = ((ObjectData *)o)->f20;
            (&frame)->f2c = 3;
            (&frame)->f2e = ((ObjectData *)o)->f698;
            (&frame)->f30 = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f34 = ((ObjectData *)o)->f6ac;
            (&frame)->f38 = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f28));
            return;
        }
        v4 = (int)((ObjectData *)o)->f700->f08;
        t2 = player_flag9_8c026508();
        v6 = (int)v4;
        if (t2 != 0) {
            v6 = (int)(v4 & -0x30607);
        }
        if (((v6 & 0x400)) != 0) {
            o->v93(5, 6);
            (&frame)->f14 = 0x12;
            (&frame)->f15 = 5;
            (&frame)->f16 = ((ObjectData *)o)->f20;
            (&frame)->f18 = 5;
            (&frame)->f1a = ((ObjectData *)o)->f698;
            (&frame)->f1c = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f20 = ((ObjectData *)o)->f6ac;
            (&frame)->f24 = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f14));
            return;
        }
        if (!(((ObjectData *)o)->f700->f1c > 0.1f)) {
            return;
        }
        o->v93(0x18, 6);
        (&frame)->f00 = 0x12;
        (&frame)->f01 = 5;
        (&frame)->f02 = ((ObjectData *)o)->f20;
        (&frame)->f04 = 0x18;
        (&frame)->f06 = ((ObjectData *)o)->f698;
        (&frame)->f08 = ((ObjectData *)o)->f3a8 & 0xffff;
        (&frame)->f0c = ((ObjectData *)o)->f6ac;
        (&frame)->f10 = ((ObjectData *)o)->f6b0;
        operation_8c0368a8((void *)(&frame));
        return;
    case 0:
        *cnt += 1;
        call_8c01c5f0(o);
        return;
    case 1:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        break;
    }
}
