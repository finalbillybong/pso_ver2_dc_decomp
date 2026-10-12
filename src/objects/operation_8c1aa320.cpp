typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int);
};
typedef struct ObjectData {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x6c];
    int f88;
    char unknown8c[0x58];
    short fe4;
    char unknowne6[0x2];
    int fe8;
    int fec;
} ObjectData;
extern "C" void call_8c051eb8(int);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void attach_and_insert_object(void *);
extern "C" Object *operation_8c1aa320(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    call_8c051eb8((int)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2746ec;
    o->v6(a2);
    ((ObjectData *)o)->fe4 = 3;
    ((ObjectData *)o)->fe8 = ((ObjectData *)o)->f88;
    ((ObjectData *)o)->fec = 0;
    copy_actor_records((void *)o, (void *)0x8c324e40, 1);
    attach_and_insert_object((void *)o);
    return o;
}
