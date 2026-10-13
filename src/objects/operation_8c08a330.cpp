typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
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
};
typedef struct ObjectData {
    char unknown0[0x18];
    void *dispatch;
} ObjectData;
extern "C" void destroy_context_8c051f28(void *, short);
extern "C" void call_8c122774(void *, Object *);
extern "C" Object *operation_8c08a330(Object *o, int a1)
{
    if (o != 0) {
        *(void **)((char *)o + 0x18) = (void *)(void *)0x8c265114;
        if (o != 0) {
            *(void **)((char *)o + 0x18) = (void *)(void *)0x8c265168;
            if (o != 0) {
                *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2651bc;
                o->v15();
                destroy_context_8c051f28((void *)o, (short)0);
            }
        }
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
