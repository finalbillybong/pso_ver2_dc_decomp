typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_94 Arg0_94;
class Object;
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
    char unknown0[0x81];
    unsigned char f81;
    char unknown82[0x12];
    Arg0_94 *f94;
} ObjectData;
extern "C" void restore_render_state(void);
extern "C" void call_8c0decf4(Object *, int, void *);
extern "C" void call_8c0df1ac(Object *, int, void *);
extern "C" void call_8c0df3e0(Object *, int, void *);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void backup_render_state(void);
extern "C" void operation_8c0dec6c(Object *o)
{
    int t1;
    restore_render_state();
    t1 = o->v5();
    call_8c0decf4(o, t1, (void *)(((ObjectData *)o)->f94));
    call_8c0df1ac(o, t1, (void *)(((ObjectData *)o)->f94));
    if (((((ObjectData *)o)->f81 & 4)) != 0) {
        call_8c0df3e0(o, t1, (void *)(((ObjectData *)o)->f94));
        draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
    }
    backup_render_state();
}
