class Child {
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
    virtual void notify(void *);
};
extern "C" int current_mode_active(void);
extern "C" Child *operation_03b55c(void *, int);
extern "C" int operation_02450c(Child *);
extern "C" void restore_child_blend(void);
extern "C" void notify_children_8c021c4c(char *o)
{
    int i;
    if (current_mode_active()) {
        int offset = 0xbcc;
        for (i = 0; i < 13; i++) {
            Child *child = operation_03b55c(o + offset, i);
            if (operation_02450c(child)) {
                child->notify(o);
                restore_child_blend();
            }
        }
    }
}
