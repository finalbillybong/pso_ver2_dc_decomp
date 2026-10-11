typedef struct Request { char unknown0[0x134]; unsigned char kind; char unknown135; unsigned char slot; } Request;
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
    virtual void release();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual short index();
};
extern "C" void operation_0226c4(char *);
extern "C" int operation_02a9e4(char *);
extern "C" void operation_01c838(char *, int);
extern "C" void release_child_slot_8c022624(char *o, Child *child)
{
    *(int *)((char *)(int *)(o + 0xbcc) + (child->index() << 2)) = 0;
    child->release();
    if ((unsigned char)((Request *)child)->kind == 1 && (unsigned char)((Request *)child)->slot == 1) operation_0226c4(o);
    {
        int flagged = (*(int *)(o + 0x310) & 2) != 0;
        if (flagged) operation_01c838(o, operation_02a9e4(o));
    }
}
