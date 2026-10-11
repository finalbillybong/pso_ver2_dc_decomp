typedef struct Record {
    char unknown0[0x20];
    int count;
} Record;
typedef struct Child {
    char unknown0[0x4];
    Record *record;
} Child;
typedef struct Owner {
    char unknown0[0x30];
    Child *child;
} Owner;
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
    virtual void v33();
    virtual int count();
};
extern "C" void update_count_8c1ca1fc(Owner *o, Object *target)
{
    Record *record = o->child->record;
    if (!target) {
        record->count = 0;
        return;
    }
    {
        int count = target->count();
        if (count <= 0) record->count = 1;
        else record->count = count;
    }
}
