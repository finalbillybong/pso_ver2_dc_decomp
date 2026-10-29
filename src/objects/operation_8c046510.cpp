typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
class Object;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
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
    virtual void v31(Frame *);
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x176];
    short f1ae;
    char unknown1b0[0x8];
    int f1b8;
} ObjectData;
struct Arg1 {
    char unknown0[0x1b2];
    short f1b2;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg2 {
    char unknown0[0x18];
    int f18;
    Vector3 f1c;
};
extern "C" void call_8c37f6f0(Frame *, int);
extern "C" float call_8c37f6c0(float);
extern "C" float object_random_fraction(void *);
extern "C" void copy_object_id_1b6(void *, void *);
extern "C" int operation_8c046510(Object *o, Arg1 *a1, Arg2 *a2, int a3, float f0)
{
    Frame frame;
    float v1;
    float v5;
    float t1;
    float t2;
    if (a1 != 0 && a2 != 0 && ((((ObjectData *)o)->f34 & 0x4000000)) == 0) {
        v1 = (float)((f0 * (float)a1->f1b2 - (float)((ObjectData *)o)->f1ae * 0.2f) * 0.01f);
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&a2->f1c;
        if (a3 != 0) {
            call_8c37f6f0((Frame *)((&frame)), a3);
        } else {
            call_8c37f6f0((Frame *)((&frame)), (int)(((char *)a1 + 0x3c)));
        }
        t2 = call_8c37f6c0((&frame)->f00.f00 * (&frame)->f00.f00 + (&frame)->f00.f08 * (&frame)->f00.f08);
        v5 = (float)(v1 - t2 * 0.002f);
        if (v5 > 0.0f) {
            t1 = object_random_fraction((void *)o);
            if (!(t1 > v5)) {
                a2->f18 |= 0x8000000;
                copy_object_id_1b6((void *)o, (void *)a1);
                ((ObjectData *)o)->f1b8 |= 2;
                return 1;
            }
        }
        ((ObjectData *)o)->f34 |= 0x100;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&a2->f1c;
        o->v31(&frame);
    }
    return 0;
}
