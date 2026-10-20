typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct S_vv8 S_vv8;
class Arg1;
typedef struct Block_frame_38 {
    int f00;
    float f04;
} Block_frame_38;
typedef struct Block_frame_30 {
    int f00;
    float f04;
} Block_frame_30;
typedef struct Block_frame_28 {
    int f00;
    float f04;
} Block_frame_28;
typedef struct Block_frame_20 {
    int f00;
    float f04;
} Block_frame_20;
typedef struct Block_frame_18 {
    int f00;
    float f04;
} Block_frame_18;
typedef struct Block_frame_10 {
    int f00;
    float f04;
} Block_frame_10;
typedef struct Block_frame_8 {
    int f00;
    float f04;
} Block_frame_8;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0xd4];
    int f214;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_8 f08;
    Block_frame_10 f10;
    Block_frame_18 f18;
    Block_frame_20 f20;
    Block_frame_28 f28;
    Block_frame_30 f30;
    Block_frame_38 f38;
};
class Arg1 {
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
    virtual void v25(S_vv8 *, int, Block8);
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
    virtual void v57(int);
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
    virtual void v81(int);
};
typedef struct Arg1Data {
    char unknown0[0xdc];
    int fdc;
    char unknowne0[0x228];
    short f308;
} Arg1Data;
struct S_vv8 {
    char unknown0[0x308];
    short f308;
};
extern "C" void operation_8c2413c8(Object *o, Arg1 *a1, int a2)
{
    Frame frame;
    S_vv8 *v8;
    short v1;
    int v2;
    int v3;
    int v5;
    int v6;
    if (a1 == 0) {
        return;
    }
    v8 = (S_vv8 *)o->f13c;
    if (v8 != 0) {
        switch (o->f214) {
        case 0:
            (&frame)->f38.f00 = 0x12;
            (&frame)->f38.f04 = 0.0f;
            a1->v25(v8, a2 * 0x2c + (int)((Arg1Data *)a1)->fdc, *(Block8 *)&(&frame)->f38);
            return;
        case 1:
            (&frame)->f30.f00 = 0x10;
            (&frame)->f30.f04 = 0.0f;
            a1->v25(v8, a2 * 0x2c + (int)((Arg1Data *)a1)->fdc, *(Block8 *)&(&frame)->f30);
            return;
        case 2:
            v1 = (short)v8->f308;
            v2 = (int)((short)v1 == 2);
            if (v2 == 0) {
                v3 = (int)(((Arg1Data *)a1)->f308 == 2);
                if (v3 == 0) {
                    goto L_8c2414ce;
                }
            }
            v5 = (int)((short)v1 == 2);
            if (v5 == 0) {
                return;
            }
            v6 = (int)(((Arg1Data *)a1)->f308 == 1);
            if (v6 == 0) {
                return;
            }
L_8c2414ce:;
            a1->v57(0);
            a1->v81(0);
            return;
        case 3:
            (&frame)->f28.f00 = 5;
            (&frame)->f28.f04 = 100.0f;
            a1->v25(v8, a2 * 0x2c + (int)((Arg1Data *)a1)->fdc, *(Block8 *)&(&frame)->f28);
            return;
        case 4:
            (&frame)->f20.f00 = 0xb;
            (&frame)->f20.f04 = 100.0f;
            a1->v25(v8, a2 * 0x2c + (int)((Arg1Data *)a1)->fdc, *(Block8 *)&(&frame)->f20);
            return;
        case 5:
            (&frame)->f18.f00 = 0xc;
            (&frame)->f18.f04 = 100.0f;
            a1->v25(v8, a2 * 0x2c + (int)((Arg1Data *)a1)->fdc, *(Block8 *)&(&frame)->f18);
            return;
        case 6:
            (&frame)->f10.f00 = 6;
            (&frame)->f10.f04 = 500.0f;
            a1->v25(v8, a2 * 0x2c + (int)((Arg1Data *)a1)->fdc, *(Block8 *)&(&frame)->f10);
            return;
        case 7:
            (&frame)->f08.f00 = 9;
            (&frame)->f08.f04 = 100.0f;
            a1->v25(v8, a2 * 0x2c + (int)((Arg1Data *)a1)->fdc, *(Block8 *)&(&frame)->f08);
            return;
        case 8:
            (&frame)->f00.f00 = 0xa;
            (&frame)->f00.f04 = 100.0f;
            a1->v25(v8, a2 * 0x2c + (int)((Arg1Data *)a1)->fdc, *(Block8 *)&(&frame)->f00);
            return;
        }
    }
}
