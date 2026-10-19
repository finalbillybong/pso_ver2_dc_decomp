typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c0 S_c0;
typedef struct Arg0_68 Arg0_68;
class Object;
struct S_c0 {
    char unknown0[0x14];
    float f14;
    char unknown18[0x18];
    int f30;
};
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5();
};
typedef struct ObjectData {
    char unknown0[0x68];
    Arg0_68 *f68;
} ObjectData;
extern "C" void call_8c20b098(Object *, S_c0 *);
extern "C" void call_8c20b284(Object *, S_c0 *, void *, float);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void operation_8c215b90(Object *o)
{
    S_c0 *t1;
    t1 = (S_c0 *)o->v5();
    call_8c20b098(o, t1);
    if (t1->f30 >= 0) {
        call_8c20b284(o, t1, (void *)(((ObjectData *)o)->f68), 0.0f);
    }
    t1->f14 += 1.0f;
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
}
