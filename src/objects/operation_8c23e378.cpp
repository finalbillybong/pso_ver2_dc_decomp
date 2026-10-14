typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_13c_64 Arg0_13c_64;
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
} ObjectData;
struct Frame {
    char unknown0[0xc];
};
struct Arg0_13c {
    char unknown0[0x64];
    Arg0_13c_64 *f64;
};
extern "C" int call_8c1aaabc(void *);
extern "C" int call_8c075894(Object *, Arg0_13c *, int, Frame *);
extern "C" void create_effect_b0fac(void *, void *, void *, void *);
extern "C" void call_8c076580(Object *);
extern "C" void operation_8c23e378(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    t1 = call_8c1aaabc((void *)(((char *)((ObjectData *)o)->f13c + 0x754)));
    if ((short)t1 == 2) {
        t2 = o->v33();
        if (t2 != 1) {
            return;
        }
        t3 = call_8c075894(o, (Arg0_13c *)(((ObjectData *)o)->f13c), 1, (Frame *)((&frame)));
        if (t3 == 0) {
            return;
        }
        create_effect_b0fac((void *)(((ObjectData *)o)->f13c), (void *)(&frame), (void *)(((ObjectData *)o)->f13c->f64), (void *)5);
        return;
    }
    call_8c076580(o);
}
