typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
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
    virtual int v41();
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
    virtual void v53();
    virtual void v54();
};
typedef struct ObjectData {
    char unknown0[0xec];
    int fec;
    char unknownf0[0x4c];
    Arg0_13c *f13c;
    char unknown140[0x80];
    int f1c0;
    char unknown1c4[0x38];
    int f1fc;
} ObjectData;
struct Arg0_13c {
    char unknown0[0x20];
    short f20;
    char unknown22[0x362];
    short f384;
};
extern S_g8c44be9c *g_8c44be9c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" int current_mode_active(void);
extern "C" int allocate_block(void *, unsigned int);
extern "C" void operation_8c1ab01c(void *, int, int, int);
extern "C" void operation_8c1ddc00(int, short, int);
extern "C" int call_8c05fbf8(int, void *, int, int);
extern "C" void emit_control_60320(int, int, int);
extern "C" void operation_8c0771fc();
extern "C" void operation_8c075968(Object *o)
{
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    ObjectData *pm5;
    int pm6;
    unsigned short pm7;
    pm5 = (ObjectData *)o;
    v1 = (int)((((pm5)->f1c0 & 1)) != 0);
    if (v1 != 0) {
        if (((((ObjectData *)o)->fec & 0x20)) == 0) {
            t1 = current_mode_active();
            if (t1 != 0) {
                t2 = o->v41();
                pm7 = (unsigned char)t2;
                ((ObjectData *)o)->f13c->f384 = pm7;
            }
        }
        pm6 = 0x1fc;
        *(int *)((char *)o + pm6) &= -0x101;
        if (((((ObjectData *)o)->fec & 0x40)) != 0) {
            ((ObjectData *)o)->f1fc |= 8;
            goto L_8c075a5e;
        }
        if (o != 0) {
            t3 = allocate_block(g_8c4d97e0, (unsigned int)0x2c);
            if (t3 != 0) {
                operation_8c1ab01c((void *)t3, (int)o, (int)operation_8c0771fc, 0x14);
            }
        }
        operation_8c1ddc00((int)g_8c44be9c, ((ObjectData *)o)->f13c->f20, 0x30);
        if (((((ObjectData *)o)->f1fc & 0x200)) != 0) {
            operation_8c1ddc00((int)g_8c44be9c, ((ObjectData *)o)->f13c->f20, 0x23);
        }
        t4 = call_8c05fbf8(0xa, (void *)(((char *)((ObjectData *)o)->f13c + 0x3c)), 0, 0);
        emit_control_60320(t4, 0x300, 0);
    } else {
        ((ObjectData *)o)->f13c->f384 = 0;
        *(int *)((char *)o + 0x1fc) |= 0x100;
        ((ObjectData *)o)->f1fc |= 8;
    }
L_8c075a5e:
    ;
    o->v54();
}
