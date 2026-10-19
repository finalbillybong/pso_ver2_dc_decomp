typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
class Object;
typedef struct Block_frame_0 {
    int f00;
    float f04;
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
    virtual void v57(int);
    virtual void v58();
    virtual void v59();
    virtual void v60(Block8);
    virtual void v61(Block8);
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x160];
    short f198;
    char unknown19a[0x196];
    short f330;
} ObjectData;
struct Arg1 {
    int f00;
    char unknown4[0x2];
    short f06;
    unsigned char f08;
    unsigned char f09;
    unsigned char f0a;
    unsigned char f0b;
};
struct Frame {
    Block_frame_0 f00;
};
extern int g_8c4703c0;
extern "C" void operation_8c012b98(Object *o, Arg1 *a1)
{
    Frame frame;
    int v1;
    int v43;
    ((ObjectData *)o)->f330 = ((ObjectData *)o)->f198 - a1->f06;
    if (g_8c4703c0 == 3) {
        v43 = (int)(a1->f00 & -0x40);
    } else {
        v1 = (int)a1->f00;
        if (((v1 & 2)) != 0 && ((((ObjectData *)o)->f34 & 2)) == 0) {
            o->v54();
        }
        if (((v1 & 4)) != 0 && ((((ObjectData *)o)->f34 & 4)) == 0) {
            o->v58();
        }
        if (((v1 & 0x10)) != 0 && ((((ObjectData *)o)->f34 & 0x10)) == 0) {
            o->v56();
        }
        if (((v1 & 0x20)) != 0 && ((((ObjectData *)o)->f34 & 0x20)) == 0) {
            o->v57(0);
        }
        v43 = (int)v1;
    }
    ((ObjectData *)o)->f34 |= v43;
    (&frame)->f00.f00 = a1->f08;
    (&frame)->f00.f04 = (float)a1->f09;
    a1->f08 = 0;
    a1->f09 = 0;
    switch ((&frame)->f00.f00) {
    case 9:
    case 11:
        o->v60(*(Block8 *)&(&frame)->f00);
    }
    (&frame)->f00.f00 = a1->f0a;
    (&frame)->f00.f04 = (float)a1->f0b;
    a1->f0a = 0;
    a1->f0b = 0;
    switch ((&frame)->f00.f00) {
    case 10:
    case 12:
        o->v61(*(Block8 *)&(&frame)->f00);
    }
}
