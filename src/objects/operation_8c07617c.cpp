typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_1d8 Arg0_1d8;
typedef struct Arg0_1dc Arg0_1dc;
class Object;
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
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb4];
    int fec;
    char unknownf0[0x52];
    short f142;
    char unknown144[0x94];
    Arg0_1d8 *f1d8;
    Arg0_1dc *f1dc;
    char unknown1e0[0x1c];
    int f1fc;
} ObjectData;
extern "C" void operation_8c075730(void *, void *, int);
extern "C" void call_8c076fc8(Object *, int);
extern "C" void operation_8c0773e4(void *);
extern "C" void operation_8c07617c(Object *o, int a1)
{
    int v1;
    if (a1 != 0) {
        v1 = (int)((ObjectData *)o)->f1fc;
        if ((v1 & 0xc) == 0xc && ((v1 & 0x80)) == 0) {
            o->v52();
            if (((((ObjectData *)o)->f1fc & 1)) == 0) {
                operation_8c075730((void *)o, (void *)a1, (int)(((ObjectData *)o)->f142));
                call_8c076fc8(o, 1);
                call_8c076fc8(o, 0);
            }
            if (((((ObjectData *)o)->f34 & 0x8000000)) == 0 && ((((ObjectData *)o)->fec & 0x40)) == 0) {
                if (((ObjectData *)o)->f1d8 != 0) {
                    operation_8c0773e4((void *)(((ObjectData *)o)->f1d8));
                }
                if (((ObjectData *)o)->f1dc != 0) {
                    operation_8c0773e4((void *)(((ObjectData *)o)->f1dc));
                }
            }
        }
    }
}
