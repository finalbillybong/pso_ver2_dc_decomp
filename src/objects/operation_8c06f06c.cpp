typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_700 Arg0_700;
typedef struct Arg0_700_8 Arg0_700_8;
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
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    float f3c;
    float f40;
    float f44;
    char unknown48[0xa8];
    short ff0;
    char unknownf2[0x2b6];
    unsigned short f3a8;
    char unknown3aa[0x32];
    int f3dc;
    char unknown3e0[0x24];
    int f404;
    char unknown408[0x1f0];
    float f5f8;
    float f5fc;
    char unknown600[0x98];
    int f698;
    char unknown69c[0x10];
    float f6ac;
    float f6b0;
    float f6b4;
    float f6b8;
    char unknown6bc[0x44];
    Arg0_700 *f700;
    char unknown704[0x2c];
    int f730;
} ObjectData;
struct Arg0_700 {
    char unknown0[0x8];
    Arg0_700_8 *f08;
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
    char f3c;
    char f3d;
    short f3e;
    short f40;
    short f42;
    int f44;
    float f48;
    float f4c;
    char f50;
    char f51;
    short f52;
    short f54;
    short f56;
    int f58;
    float f5c;
    float f60;
    char f64;
    char f65;
    short f66;
    short f68;
    short f6a;
    int f6c;
    float f70;
    float f74;
    char f78;
    char f79;
    short f7a;
    short f7c;
    short f7e;
    int f80;
    float f84;
    float f88;
    char f8c;
    char f8d;
    short f8e;
    short f90;
    short f92;
    int f94;
    float f98;
    float f9c;
    char fa0;
    char fa1;
    short fa2;
    short fa4;
    short fa6;
    int fa8;
    float fac;
    float fb0;
};
extern "C" void operation_8c0368a8(void *);
extern "C" int player_flag9_8c026508(void);
extern "C" int operation_8c068270(int, int, int);
extern "C" int operation_8c2097a8(int);
extern "C" void call_8c01c5f0(Object *);
extern "C" void operation_8c06f06c(Object *o, int a1)
{
    Frame frame;
    int v1;
    int v3;
    int v4;
    int v6;
    int v7;
    int v10;
    int v12;
    int v14;
    int v11;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 0;
        o->v102();
        ((ObjectData *)o)->f404 = 0;
        *(int *)((char *)o + 0x3dc) |= 0x100;
        ((ObjectData *)o)->f5f8 = ((ObjectData *)o)->f40;
        ((ObjectData *)o)->f5fc = 0.0f;
        ((ObjectData *)o)->f3dc &= -0xe81;
        return;
    case 11:
        if (((ObjectData *)o)->f700->f1c > 0.1f) {
            o->v93(0x18, 6);
            (&frame)->fa0 = 0x12;
            (&frame)->fa1 = 5;
            (&frame)->fa2 = ((ObjectData *)o)->f20;
            (&frame)->fa4 = 0x18;
            (&frame)->fa6 = ((ObjectData *)o)->f698;
            (&frame)->fa8 = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->fac = ((ObjectData *)o)->f6ac;
            (&frame)->fb0 = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->fa0));
            return;
        }
        v1 = (int)((ObjectData *)o)->f700->f08;
        t1 = player_flag9_8c026508();
        v3 = (int)v1;
        if (t1 != 0) {
            v3 = (int)(v1 & -0x30607);
        }
        if (((v3 & 4)) != 0) {
            o->v93(3, 6);
            (&frame)->f8c = 0x12;
            (&frame)->f8d = 5;
            (&frame)->f8e = ((ObjectData *)o)->f20;
            (&frame)->f90 = 3;
            (&frame)->f92 = ((ObjectData *)o)->f698;
            (&frame)->f94 = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f98 = ((ObjectData *)o)->f6ac;
            (&frame)->f9c = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f8c));
            return;
        }
        v4 = (int)((ObjectData *)o)->f700->f08;
        t2 = player_flag9_8c026508();
        v6 = (int)v4;
        if (t2 != 0) {
            v6 = (int)(v4 & -0x30607);
        }
        if (((v6 & 2)) != 0) {
            o->v93(4, 6);
            (&frame)->f78 = 0x12;
            (&frame)->f79 = 5;
            (&frame)->f7a = ((ObjectData *)o)->f20;
            (&frame)->f7c = 4;
            (&frame)->f7e = ((ObjectData *)o)->f698;
            (&frame)->f80 = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f84 = ((ObjectData *)o)->f6ac;
            (&frame)->f88 = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f78));
            return;
        }
        v7 = (int)0;
        if (((ObjectData *)o)->f730 >= 0x96) {
            t3 = operation_8c068270((int)o, (int)(((ObjectData *)o)->f700->f08), 0x400);
            if (t3 != 0) {
                v7 = (int)1;
            }
        }
        if (v7 != 0) {
            o->v93(5, 6);
            (&frame)->f64 = 0x12;
            (&frame)->f65 = 5;
            (&frame)->f66 = ((ObjectData *)o)->f20;
            (&frame)->f68 = 5;
            (&frame)->f6a = ((ObjectData *)o)->f698;
            (&frame)->f6c = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f70 = ((ObjectData *)o)->f6ac;
            (&frame)->f74 = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f64));
            return;
        }
        t4 = operation_8c2097a8(2);
        if (t4 != 0) {
            v10 = (int)0x20000;
            v11 = (int)v10;
        } else {
            v11 = (int)0x10000;
        }
        v12 = (int)((ObjectData *)o)->f700->f08;
        t5 = player_flag9_8c026508();
        v14 = (int)v12;
        if (t5 != 0) {
            v14 = (int)(v12 & -0x30607);
        }
        if (((v14 & v11)) == 0) {
            return;
        }
        o->v93(9, 6);
        (&frame)->f50 = 0x12;
        (&frame)->f51 = 5;
        (&frame)->f52 = ((ObjectData *)o)->f20;
        (&frame)->f54 = 9;
        (&frame)->f56 = ((ObjectData *)o)->f698;
        (&frame)->f58 = ((ObjectData *)o)->f3a8 & 0xffff;
        (&frame)->f5c = ((ObjectData *)o)->f6ac;
        (&frame)->f60 = ((ObjectData *)o)->f6b0;
        operation_8c0368a8((void *)(&(&frame)->f50));
        return;
    case 2:
        if (((ObjectData *)o)->f700->f1c > 0.1f) {
            o->v93(0x18, 6);
            (&frame)->f3c = 0x12;
            (&frame)->f3d = 5;
            (&frame)->f3e = ((ObjectData *)o)->f20;
            (&frame)->f40 = 0x18;
            (&frame)->f42 = ((ObjectData *)o)->f698;
            (&frame)->f44 = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f48 = ((ObjectData *)o)->f6ac;
            (&frame)->f4c = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f3c));
            return;
        }
        if ((((int)(((ObjectData *)o)->f700->f08) & 4)) != 0) {
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
        if ((((int)(((ObjectData *)o)->f700->f08) & 2)) != 0) {
            o->v93(4, 6);
            (&frame)->f14 = 0x12;
            (&frame)->f15 = 5;
            (&frame)->f16 = ((ObjectData *)o)->f20;
            (&frame)->f18 = 4;
            (&frame)->f1a = ((ObjectData *)o)->f698;
            (&frame)->f1c = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f20 = ((ObjectData *)o)->f6ac;
            (&frame)->f24 = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f14));
            return;
        }
        if ((((int)(((ObjectData *)o)->f700->f08) & 0x400)) == 0) {
            return;
        }
        o->v93(5, 6);
        (&frame)->f00 = 0x12;
        (&frame)->f01 = 5;
        (&frame)->f02 = ((ObjectData *)o)->f20;
        (&frame)->f04 = 5;
        (&frame)->f06 = ((ObjectData *)o)->f698;
        (&frame)->f08 = ((ObjectData *)o)->f3a8 & 0xffff;
        (&frame)->f0c = ((ObjectData *)o)->f6ac;
        (&frame)->f10 = ((ObjectData *)o)->f6b0;
        operation_8c0368a8((void *)(&frame));
        return;
    case 7:
        ((ObjectData *)o)->f3c = ((ObjectData *)o)->f6b4;
        ((ObjectData *)o)->f44 = ((ObjectData *)o)->f6b8;
        return;
    case 6:
        ((ObjectData *)o)->f6ac = ((ObjectData *)o)->f3c;
        ((ObjectData *)o)->f6b0 = ((ObjectData *)o)->f44;
        return;
    case 0:
        call_8c01c5f0(o);
        return;
    case 1:
    case 3:
    case 5:
    case 8:
    case 9:
    case 10:
        break;
    }
}
