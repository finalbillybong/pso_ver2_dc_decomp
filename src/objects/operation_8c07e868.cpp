typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1581ac S_c8c1581ac;
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
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
};
typedef struct ObjectData {
    char unknown0[0xe4];
    short fe4;
    char unknowne6[0x6];
    int fec;
    char unknownf0[0x46];
    unsigned char f136;
    char unknown137[0x5];
    int f13c;
    char unknown140[0x98];
    int f1d8;
} ObjectData;
struct S_c8c1581ac {
    char unknown0[0x6];
    char f06;
};
extern "C" S_c8c1581ac *operation_8c1581ac(int);
extern "C" void call_8c20775c(void *, char);
extern "C" void call_8c07f9b0(Object *);
extern "C" void call_8c05fbf8(int, int, int, int);
extern "C" void call_8c07fa4c(Object *);
extern "C" void operation_8c07e868(Object *o)
{
    S_c8c1581ac *t1;
    t1 = operation_8c1581ac((int)(((ObjectData *)o)->f136));
    if (t1 != 0) {
        call_8c20775c((void *)(((char *)o + 0x1e4)), t1->f06);
    }
    if (((ObjectData *)o)->fe4 == 2) {
        o->v45();
        ((ObjectData *)o)->f1d8 |= 0x40;
        o->v44();
        call_8c07f9b0(o);
    }
    if (((((ObjectData *)o)->fec & 0x40)) == 0) {
        call_8c05fbf8(0xa, (int)(((ObjectData *)o)->f13c + 0x3c), 0, 0);
    }
    call_8c07fa4c(o);
}
