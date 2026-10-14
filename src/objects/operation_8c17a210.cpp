typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
    virtual int v33();
};
typedef struct ObjectData {
    char unknown0[0x13c];
    int f13c;
} ObjectData;
extern "C" int call_8c1aaabc(int);
extern "C" int call_8c12b944(void);
extern "C" void call_8c076af4(Object *, int, int, float);
extern "C" void call_8c076580(Object *);
extern "C" void operation_8c17a210(Object *o)
{
    int t1;
    int t2;
    int t3;
    t1 = call_8c1aaabc((int)((int)((ObjectData *)o)->f13c + 0x754));
    if ((short)t1 == 2) {
        t2 = o->v33();
        if (t2 != 1) {
            t3 = call_8c12b944();
            if (!(0.1f > ((float)t3 / 32768.0f))) {
                return;
            }
        }
        call_8c076af4(o, 0, 1, 3.5f);
        return;
    }
    call_8c076580(o);
}
