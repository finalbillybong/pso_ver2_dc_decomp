typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c4da87c S_g8c4da87c;
typedef struct Arg0_10 Arg0_10;
class S_c8c021ef8;
class Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct S_g8c4da87c {
    char unknown0[0x20];
    int f20;
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
};
typedef struct ObjectData {
    char unknown0[0x10];
    Arg0_10 *f10;
    char unknown14[0x340];
    unsigned short f354;
    char unknown356[0x56];
    int f3ac;
} ObjectData;
class S_c8c021ef8 {
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
    virtual void v25(void *, int, Block8);
};
typedef struct S_c8c021ef8Data {

} S_c8c021ef8Data;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void operation_8c15a28c(Object *o)
{
    Frame frame;
    S_c8c021ef8 *t1;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c31653c;
    (&frame)->f00.f04 = (float)(*(S_g8c4da87c **)0x8c4da87c)->f20;
    t1 = lookup_low_id((int)(((ObjectData *)o)->f354 & 0xffff));
    if (t1 != 0) {
        t1->v25(((ObjectData *)o)->f10, 0, *(Block8 *)&(&frame)->f00);
    }
    ((ObjectData *)o)->f3ac = 0xf;
    o->v71();
}
