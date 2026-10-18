typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_64 Arg0_64;
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
};
typedef struct ObjectData {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x1a];
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x2a4];
    short f30c;
    char unknown30e[0x42];
    int f350;
    char unknown354[0x254];
    float f5a8;
    char unknown5ac[0x2c];
    int f5d8;
    int f5dc;
    Vector3 f5e0;
    char unknown5ec[0x5d8];
    int fbc4;
} ObjectData;
struct Frame {
    char unknown0[0xc];
};
extern "C" void operation_8c02a764(int, int);
extern "C" void operation_8c02b1e0(int);
extern "C" void offset_vector_xz(int, void *, void *, float);
extern "C" void operation_8c110c80(void *, int);
extern "C" void operation_8c0a1b78(void *);
extern "C" void operation_8c02aff0(void *);
extern "C" int actor_matches_current_mode(void *);
extern "C" void call_8c18a4ac(short);
extern "C" void operation_8c1f0764(Object *o)
{
    Frame frame;
    float v1;
    int v3;
    float v2;
    int v10;
    float v11;
    float v14;
    int t1;
    switch (((ObjectData *)o)->f30c) {
    case 0:
        v1 = (float)(((ObjectData *)o)->f5a8 - 0.1f);
        v2 = (float)v1;
        if (0.0f > v1) {
            ((ObjectData *)o)->f30c = 3;
            v2 = (float)0.0f;
            operation_8c02a764((int)o, 6);
            ((ObjectData *)o)->f64 = (Arg0_64 *)((ObjectData *)o)->f5dc;
            *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&((ObjectData *)o)->f5e0;
            operation_8c02b1e0((int)o);
            ((ObjectData *)o)->f350 |= 0x20000;
            o->v18();
            v3 = (int)(((ObjectData *)o)->f20 == *(int *)0x8c418248);
            if (v3 != 0) {
                offset_vector_xz((int)((int)((ObjectData *)o)->f64 + 0x8000), (void *)(((char *)o + 0x3c)), (void *)(&frame), 10.0f);
                operation_8c110c80((void *)(&frame), (int)(((ObjectData *)o)->f64));
                operation_8c0a1b78((void *)o);
            }
        }
        ((ObjectData *)o)->f5a8 = v2;
        return;
    case 1:
        v10 = (int)(((ObjectData *)o)->fbc4 == 0);
        if (v10 == 0) {
            return;
        }
        ((ObjectData *)o)->f30c = 2;
        ((ObjectData *)o)->f5d8 = 4;
        return;
    case 2:
        if (--((ObjectData *)o)->f5d8 > 0) {
            return;
        }
        ((ObjectData *)o)->f30c = 3;
        operation_8c02aff0((void *)o);
        t1 = actor_matches_current_mode((void *)o);
        if (t1 == 0) {
            return;
        }
        call_8c18a4ac(((ObjectData *)o)->f20);
        return;
    case 3:
        ((ObjectData *)o)->f350 &= -0x20001;
        v11 = (float)(((ObjectData *)o)->f5a8 + 0.1f);
        v14 = (float)v11;
        if (!(1.0f > v11)) {
            ((ObjectData *)o)->f30c = 4;
            v14 = (float)1.0f;
        }
        ((ObjectData *)o)->f5a8 = v14;
        return;
    case 4:
        break;
    }
}
