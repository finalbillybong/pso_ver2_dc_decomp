typedef struct Buffer { char bytes[5]; unsigned char ready; char rest[14]; } Buffer;
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
extern "C" char *lookup_low_id(int);
extern "C" Child *operation_03b55c(void *, int);
extern "C" int slot_ready_8c1a3d50(void *unused, Request *request)
{
    int result;
    Buffer state;
    char *target = lookup_low_id(*(int *)0x8c418248);
    Child *child;
    if (!target) return 0;
    if ((unsigned char)request->kind != 1) return 1;
    if ((unsigned char)request->slot != 3) return 1;
    child = operation_03b55c(target + 0xbcc, 2);
    if (!child) return 0;
    child->read_state(&state);
    result = (unsigned char)state.ready != 0;
    return result;
}
