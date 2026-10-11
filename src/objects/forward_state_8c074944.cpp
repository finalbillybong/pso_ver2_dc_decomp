typedef struct Buffer { int words[5]; } Buffer;
typedef struct Data {
    char unknown0[0x13c];
    int value;
} Data;
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
    virtual void read_state(Buffer *);
};
extern "C" void operation_1c8e50(Buffer *, int, int);
extern "C" void forward_state_8c074944(Object *o, int argument)
{
    Buffer state;
    o->read_state(&state);
    operation_1c8e50(&state, argument, ((Data *)o)->value);
}
