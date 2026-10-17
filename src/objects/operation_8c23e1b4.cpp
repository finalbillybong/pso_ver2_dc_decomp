typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Arg0_13c Arg0_13c;
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
    virtual int v33();
};
typedef struct ObjectData {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0xd4];
    int f214;
} ObjectData;
struct Arg0_13c {
    char unknown0[0x310];
    int f310;
};
extern "C" void operation_8c1c577c(int, int, int, int);
extern "C" int call_8c1aaabc(void *);
extern "C" void create_effect_b3b80(void *, void *, void *, void *);
extern "C" void create_effect_bada4(void *, void *, void *, void *);
extern "C" void operation_8c077224(void *);
extern "C" void operation_8c076580(void *);
extern "C" void operation_8c23e1b4(Object *o)
{
    int v1;
    void *v7;
    void *v8;
    int t1;
    int t2;
    v1 = (int)(((((ObjectData *)o)->f13c->f310 & 0x20)) != 0);
    if (v1 != 0) {
        operation_8c1c577c((int)(*(S_g8c44be9c **)0x8c44be9c), (int)o, 2, 1);
    }
    t1 = call_8c1aaabc((void *)(((char *)((ObjectData *)o)->f13c + 0x754)));
    if ((short)t1 == 2) {
        t2 = o->v33();
        if (t2 != 1) {
            return;
        }
        if (((ObjectData *)o)->f214 == 0) {
            v7 = (void *)((char *)((ObjectData *)o)->f13c + 0x3c);
            create_effect_b3b80((void *)(((ObjectData *)o)->f13c), (void *)v7, (void *)v7, (void *)4);
        } else {
            v8 = (void *)((char *)((ObjectData *)o)->f13c + 0x3c);
            create_effect_bada4((void *)(((ObjectData *)o)->f13c), (void *)v8, (void *)v8, (void *)4);
        }
        operation_8c077224((void *)o);
        return;
    }
    operation_8c076580((void *)o);
}
