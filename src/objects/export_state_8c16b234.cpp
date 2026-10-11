typedef struct Data {
    char unknown0[0xe4];
    short kind;
    char unknowne6[0x6];
    int value;
} Data;
typedef struct Out { char kind; char unknown1[3]; int value; char state[1]; } Out;
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
    virtual int read_state(void *);
};
extern "C" int export_state_8c16b234(Object *o, Out *out)
{
    if (o->read_state(out->state)) {
        out->kind = ((Data *)o)->kind;
        out->value = ((Data *)o)->value;
        return 1;
    }
    return 0;
}
