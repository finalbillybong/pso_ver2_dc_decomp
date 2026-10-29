typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_13c Arg0_13c;
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
    virtual void v53();
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    int f38;
    char unknown3c[0x100];
    Arg0_13c *f13c;
    char unknown140[0x84];
    int f1c4;
    char unknown1c8[0x10];
    Arg0_1d8 *f1d8;
    Arg0_1dc *f1dc;
    char unknown1e0[0x1c];
    int f1fc;
    float f200;
    float f204;
} ObjectData;
struct Arg0_13c {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d0];
    short f308;
    char unknown30a[0x6];
    int f310;
};
extern "C" int operation_193348(unsigned int);
extern "C" void operation_8c075edc(void *);
extern "C" void operation_8c0777fc(void *);
extern "C" void operation_8c0777e8(void *);
extern "C" void operation_8c075fbc(Object *o)
{
    int v11;
    int v19;
    int v20;
    int t1;
    switch (((ObjectData *)o)->f1fc & 0x100) {
    case 0:
        if (((ObjectData *)o)->f38 == 0) {
            if (((ObjectData *)o)->f1c4 != -1) {
                t1 = operation_193348((unsigned int)(((ObjectData *)o)->f1c4));
                if (t1 == 1) {
                    operation_8c075edc((void *)o);
                }
            }
        }
        v11 = (int)(((((ObjectData *)o)->f13c->f310 & 0xe0)) != 0);
        if (v11 != 0) {
            ((ObjectData *)o)->f1fc |= 0x10;
        } else {
            ((ObjectData *)o)->f1fc &= -0x11;
        }
        if (v11 == 0) {
            if (((((ObjectData *)o)->f13c->f34 & 0x100000)) == 0) {
                goto L_8c076048;
            }
        }
        o->v50();
        goto L_8c076056;
L_8c076048:;
        o->v51();
L_8c076056:;
        o->v53();
        v19 = (int)0x8000000;
        if (((((ObjectData *)o)->f34 & v19)) == 0) {
            v20 = (int)(((ObjectData *)o)->f13c->f308 == 7);
            if (v20 == 0) {
                ((ObjectData *)o)->f200 = ((ObjectData *)o)->f204 + ((ObjectData *)o)->f200;
                if (!(1.0f > ((ObjectData *)o)->f200)) {
                    ((ObjectData *)o)->f200 = 1.0f;
                    ((ObjectData *)o)->f204 *= -1.0f;
                }
                if (!(((ObjectData *)o)->f200 > 0.0f)) {
                    ((ObjectData *)o)->f200 = 0.0f;
                    ((ObjectData *)o)->f204 *= -1.0f;
                }
            }
        }
        if (((((ObjectData *)o)->f34 & 0x8000000)) != 0) {
            if (((ObjectData *)o)->f1d8 != 0) {
                operation_8c0777fc((void *)(((ObjectData *)o)->f1d8));
            }
            if (((ObjectData *)o)->f1dc == 0) {
                return;
            }
            operation_8c0777fc((void *)(((ObjectData *)o)->f1d8));
            return;
        }
        if (((ObjectData *)o)->f1d8 != 0) {
            operation_8c0777e8((void *)(((ObjectData *)o)->f1d8));
        }
        if (((ObjectData *)o)->f1dc != 0) {
            operation_8c0777e8((void *)(((ObjectData *)o)->f1dc));
        }
    }
}
