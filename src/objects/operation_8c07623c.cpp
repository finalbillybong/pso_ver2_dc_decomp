typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_13c Arg0_13c;
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
    virtual int v29(Arg0_13c *);
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
    virtual void v48(Frame *, int, int, int);
    virtual void v49();
};
typedef struct ObjectData {
    char unknown0[0x64];
    int f64;
    char unknown68[0x7c];
    short fe4;
    char unknowne6[0x6];
    int fec;
    char unknownf0[0x46];
    unsigned char f136;
    char unknown137[0x5];
    Arg0_13c *f13c;
    char unknown140[0xbc];
    int f1fc;
    char unknown200[0x24];
    short f224;
} ObjectData;
struct Arg0_13c {
    char unknown0[0x64];
    int f64;
};
struct Frame {
    char unknown0[0xc];
};
extern "C" int current_effect_mode(void);
extern "C" void call_8c1585a8(unsigned char, void *);
extern "C" void operation_8c076580(void *);
extern "C" void operation_8c075894(void *, void *, int, int);
extern "C" void operation_8c07623c(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    if (((ObjectData *)o)->f13c != 0 && ((ObjectData *)o)->fe4 == 2 && ((((ObjectData *)o)->fec & 0x40)) == 0) {
        t1 = current_effect_mode();
        if (t1 != 0) {
            t2 = current_effect_mode();
            if (t2 != 0xf) {
                ((ObjectData *)o)->f64 = (int)(((ObjectData *)o)->f13c->f64);
                call_8c1585a8(((ObjectData *)o)->f136, (void *)(((char *)((ObjectData *)o)->f13c + 0x3c)));
                o->v49();
                if (((((ObjectData *)o)->f1fc & 2)) == 0) {
                    t3 = o->v29(((ObjectData *)o)->f13c);
                    if (((t3 & 1)) != 0) {
                        operation_8c076580((void *)o);
                        return;
                    }
                    if (((t3 & 2)) != 0) {
                        operation_8c075894((void *)o, (void *)(((ObjectData *)o)->f13c), (int)(((ObjectData *)o)->f224), (int)(&frame));
                        o->v48((&frame), 0, 0, 1);
                    }
                }
            }
        }
    }
}
