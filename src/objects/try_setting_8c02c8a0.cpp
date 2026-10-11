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
    virtual int value();
};
extern "C" signed char operation_2391f4(void *);
extern "C" int operation_03c12c(void *, int);
extern "C" int try_setting_8c02c8a0(Object *o)
{
    int has_flag;
    int ok = *(int *)0x8c2e2ad8 && (operation_2391f4((void *)0x8c41ce5c) == 1 || ((has_flag = (*(int *)((char *)o + 0x818) & 0x10) != 0) && *(int *)0x8c4703c0 == 3));
    if (ok) return operation_03c12c((char *)o + 0x74c, o->value()) ? 2 : 1;
    return 0;
}
