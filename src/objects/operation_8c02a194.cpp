typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
class Object;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
    char f08;
    char f09;
    short f0a;
    Block8 f0c;
    char f14;
    char f15;
    short f16;
    Block8 f18;
};
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
    virtual void v85(Block8);
};
typedef struct ObjectData {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x2d0];
    short f308;
    char unknown30a[0x5e];
    int f368;
} ObjectData;
extern "C" void operation_8c0368a8(void *);
extern "C" void operation_8c02a194(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    int v5;
    int v32;
    int v37;
    (&frame)->f00.f04 = 0.0f;
    v1 = (int)((ObjectData *)o)->f34;
    v2 = (int)((((ObjectData *)o)->f368 ^ v1) & 0x3f);
    if (v2 == 0) {
        return;
    }
    if (((v2 & 3)) != 0) {
        if (((v1 & 3)) != 0) {
            if (((v1 & 1)) != 0) {
                (&frame)->f00.f00 = 0xf;
            }
            if (((v1 & 2)) != 0) {
                (&frame)->f00.f00 = 0x10;
            }
            o->v85(*(Block8 *)&(&frame)->f00);
        } else {
            (&frame)->f00.f00 = 0;
            if (o != 0) {
                v5 = (int)(((ObjectData *)o)->f308 == 2);
                if (v5 != 0) {
                    goto L_8c02a252;
                }
            }
            (&frame)->f14 = 0x1a;
            (&frame)->f15 = 1;
            (&frame)->f14 = 0xd;
            (&frame)->f15 = 3;
            (&frame)->f16 = ((ObjectData *)o)->f20;
            *(Block8 *)&(&frame)->f18 = *(Block8 *)&(&frame)->f00;
            operation_8c0368a8((void *)(&(&frame)->f14));
        }
    }
L_8c02a252:;
    if (((v2 & 0x3c)) != 0) {
        v32 = (int)((ObjectData *)o)->f34;
        if (((v32 & 0x3c)) != 0) {
            if (((v32 & 8)) != 0) {
                (&frame)->f00.f00 = 0x11;
            }
            if (((v32 & 0x10)) != 0) {
                (&frame)->f00.f00 = 0x12;
            }
            if (((v32 & 0x20)) != 0) {
                (&frame)->f00.f00 = 2;
            }
            if (((v32 & 4)) != 0) {
                (&frame)->f00.f00 = 3;
            }
            o->v85(*(Block8 *)&(&frame)->f00);
        } else {
            (&frame)->f00.f00 = 1;
            if (o != 0) {
                v37 = (int)(((ObjectData *)o)->f308 == 2);
                if (v37 != 0) {
                    goto L_8c02a2f6;
                }
            }
            (&frame)->f08 = 0x1a;
            (&frame)->f09 = 1;
            (&frame)->f08 = 0xd;
            (&frame)->f09 = 3;
            (&frame)->f0a = ((ObjectData *)o)->f20;
            *(Block8 *)&(&frame)->f0c = *(Block8 *)&(&frame)->f00;
            operation_8c0368a8((void *)(&(&frame)->f08));
        }
    }
L_8c02a2f6:;
    if (((v2 & 0x40)) != 0) {
        (&frame)->f00.f00 = 7;
        o->v85(*(Block8 *)&(&frame)->f00);
    }
    ((ObjectData *)o)->f368 = (int)(((ObjectData *)o)->f34);
}
