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
extern "C" int operation_03d338(void);
extern "C" void operation_0eeb58(Object *);
extern "C" void update_mode_8c0eea34(Object *o)
{
    if (operation_03d338() == 1) o->v15();
    else if (*(int *)((char *)o + 0xf4)) operation_0eeb58(o);
}
