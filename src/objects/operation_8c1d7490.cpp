typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class S_c8c0744dc;
struct Object {
    char unknown0[0xa4];
    int fa4;
    int fa8;
};
class S_c8c0744dc {
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
    virtual void v31(void *);
};
typedef struct S_c8c0744dcData {

} S_c8c0744dcData;
extern "C" S_c8c0744dc *find_record_8c0744dc(int);
extern "C" void operation_8c1d7490(Object *o)
{
    int v2;
    int v1;
    char *v49;
    S_c8c0744dc *t1;
    S_c8c0744dc *t2;
    v1 = (int)-1;
    v2 = (int)o->fa4;
    if (v2 != v1) {
        t1 = find_record_8c0744dc(v2);
        if (t1 != 0) {
            t1->v31(((char *)o + 0x7c));
        }
    }
    v49 = (char *)o->fa8;
    if ((int)(v49) != -1) {
        t2 = find_record_8c0744dc((int)(v49));
        if (t2 != 0) {
            t2->v31(((char *)o + 0x90));
        }
    }
}
