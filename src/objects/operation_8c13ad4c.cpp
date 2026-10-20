typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_334 Arg0_334;
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
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x18];
    int f60;
    char unknown64[0x8c];
    short ff0;
    char unknownf2[0x226];
    Vector3 f318;
    char unknown324[0x10];
    Arg0_334 *f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x42];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0xc];
    int f3b4;
    Vector3 f3b8;
    int f3c4;
    char unknown3c8[0x8];
    int f3d0;
    int f3d4;
} ObjectData;
struct Arg0_334 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x2dc];
    Vector3 f324;
};
struct Frame {
    int f00;
    int f04;
    int f08;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" char g_8c4da704[];
extern "C" int lookup_low_id(int);
extern "C" void call_8c37f6f0(void *, void *);
extern "C" void operation_43fb4(void *, int, void *);
extern "C" int allocate_block(void *, unsigned int);
extern "C" void operation_8c18833c(void *, void *, int, int, void *, float, float);
extern "C" float scale_vector_to_length(void *, float);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" int call_8c13b1f8(Object *);
extern "C" void call_8c01c5f0(Object *);
extern "C" void call_8c102cd0(void *, int, int, int);
extern "C" void operation_8c13ad4c(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    float t4;
    t1 = lookup_low_id((int)(((ObjectData *)o)->f354 & 0xffff));
    ((ObjectData *)o)->f334 = (Arg0_334 *)(int)t1;
    switch (((ObjectData *)o)->f398) {
    case 0:
        ((ObjectData *)o)->f3a4 &= -0x10001;
        ((ObjectData *)o)->ff0 = 0;
        ((ObjectData *)o)->f60 = 0;
        if (((ObjectData *)o)->f39c == 4) {
            ((ObjectData *)o)->f398 = (int)(((ObjectData *)o)->f3d0);
            goto L_8c13af82;
        }
        *(Vector3 *)&((ObjectData *)o)->f3b8 = *(Vector3 *)&((ObjectData *)o)->f3c;
        ((ObjectData *)o)->f398 = ((ObjectData *)o)->f3d0 = 1;
        ((ObjectData *)o)->f3d4 = 0x1e;
        break;
    case 1:
        *(Vector3 *)&((ObjectData *)o)->f318 = *(Vector3 *)&((ObjectData *)o)->f334->f3c;
        call_8c37f6f0((void *)(((char *)o + 0x318)), (void *)(((char *)o + 0x3c)));
        operation_43fb4((void *)o, 0x800, (void *)(((char *)o + 0x318)));
        if (--*(int *)((char *)o + 0x3d4) > 0) {
            goto L_8c13af82;
        }
        ((ObjectData *)o)->f3d4 = 0x96;
        ((ObjectData *)o)->f3d0 = 2;
        ((ObjectData *)o)->f398 = 2;
        (&frame)->f04 = (int)(((ObjectData *)o)->f3b4);
        (&frame)->f00 = 0;
        (&frame)->f08 = 0x4000;
        t2 = allocate_block(g_8c4d97e0, (unsigned int)0x4c);
        if (t2 == 0) {
            goto L_8c13af82;
        }
        operation_8c18833c((void *)t2, (void *)(((ObjectData *)o)->f3c4 * 0xc + g_8c4da704), 0x11b, 8, (void *)(&frame), 0.5f, 0.0f);
        break;
    case 2:
        if (((ObjectData *)o)->f334 == 0) {
            ((ObjectData *)o)->f3d0 = 4;
            ((ObjectData *)o)->f398 = 4;
            return;
        }
        *(Vector3 *)&((ObjectData *)o)->f318 = *(Vector3 *)&((ObjectData *)o)->f334->f324;
        call_8c37f6f0((void *)(((char *)o + 0x318)), (void *)(((char *)o + 0x3c)));
        scale_vector_to_length((void *)(((char *)o + 0x318)), 5.0f);
        operation_43fb4((void *)o, 0x800, (void *)(((char *)o + 0x318)));
        call_8c3bdf60((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x318)));
        t3 = call_8c13b1f8(o);
        if (t3 != 0) {
            ((ObjectData *)o)->f3d0 = 4;
            ((ObjectData *)o)->f398 = 4;
        }
        if (--((ObjectData *)o)->f3d4 > 0) {
            goto L_8c13af82;
        }
        ((ObjectData *)o)->f3d0 = 4;
        ((ObjectData *)o)->f398 = 4;
        break;
    case 4:
        *(Vector3 *)&((ObjectData *)o)->f318 = *(Vector3 *)&((ObjectData *)o)->f3b8;
        call_8c37f6f0((void *)(((char *)o + 0x318)), (void *)(((char *)o + 0x3c)));
        t4 = scale_vector_to_length((void *)(((char *)o + 0x318)), 5.0f);
        operation_43fb4((void *)o, 0x800, (void *)(((char *)o + 0x318)));
        call_8c3bdf60((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x318)));
        call_8c13b1f8(o);
        if (10.0f > t4) {
            ((ObjectData *)o)->f354 = 0xffff;
            o->v67();
        }
    case -1:
    case 3:
        break;
    }
L_8c13af82:;
    call_8c01c5f0(o);
    call_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
}
