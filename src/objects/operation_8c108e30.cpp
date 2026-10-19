typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_36c Arg0_36c;
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
    virtual int v20(int);
};
typedef struct ObjectData {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x24];
    short f330;
    char unknown332[0x22];
    unsigned short f354;
    char unknown356[0x16];
    Arg0_36c *f36c;
    char unknown370[0x20];
    int f390;
    int f394;
    char unknown398[0x4];
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x1c];
    int f3c4;
    char unknown3c8[0x4];
    int f3cc;
    char unknown3d0[0x4];
    int f3d4;
    int f3d8;
    char unknown3dc[0x4];
    int f3e0;
    int f3e4;
} ObjectData;
struct Arg0_36c {
    float f00;
};
extern "C" void call_8c10a3a4(Object *);
extern "C" float distance_xz(void *, void *);
extern "C" int call_8c04a52c(Object *, int, float);
extern "C" void operation_8c108e30(Object *o)
{
    short v4;
    int v3;
    int t1;
    int t2;
    float t3;
    int t4;
    int t5;
    if (((ObjectData *)o)->f30a != 0) {
        if (((ObjectData *)o)->f30a == 1) {
            goto L_8c108fa6;
        }
        if (((ObjectData *)o)->f30a != 8) {
            return;
        }
    }
    t1 = o->v20(0x1e);
    if (t1 == 0) {
        return;
    }
    call_8c10a3a4(o);
    if (((ObjectData *)o)->f3e4 > 0) {
        if (((ObjectData *)o)->f3c4 != 0) {
            if (((ObjectData *)o)->f3c4 == 1) {
                goto L_8c108ee2;
            }
            if (((ObjectData *)o)->f3c4 == 2) {
                goto L_8c108f22;
            }
            return;
        }
        if (((ObjectData *)o)->f330 <= ((ObjectData *)o)->f3cc) {
            ((ObjectData *)o)->f354 = ((ObjectData *)o)->f3e0;
            v3 = (int)9;
        } else {
            ((ObjectData *)o)->f354 = ((ObjectData *)o)->f3d8;
            v3 = (int)1;
        }
        if ((((ObjectData *)o)->f354 & 0xffff) == 0xffff) {
            return;
        }
        if (((((ObjectData *)o)->f3a4 & 1)) == 0) {
            v4 = (short)((ObjectData *)o)->f30a;
            if (v4 != v3) {
                ((ObjectData *)o)->f39c = (int)v4;
                ((ObjectData *)o)->f390 = (int)v3;
            }
        }
        ((ObjectData *)o)->f394 = 2;
        return;
L_8c108ee2:;
        ((ObjectData *)o)->f354 = ((ObjectData *)o)->f3d8;
        if ((((ObjectData *)o)->f354 & 0xffff) == 0xffff) {
            return;
        }
        if (((((ObjectData *)o)->f3a4 & 1)) == 0 && ((ObjectData *)o)->f30a != 9) {
            ((ObjectData *)o)->f39c = ((ObjectData *)o)->f30a;
            ((ObjectData *)o)->f390 = 9;
        }
        ((ObjectData *)o)->f394 = 2;
        return;
L_8c108f22:;
        ((ObjectData *)o)->f354 = ((ObjectData *)o)->f3d4;
        if ((((ObjectData *)o)->f354 & 0xffff) == 0xffff) {
            return;
        }
        if (((((ObjectData *)o)->f3a4 & 1)) == 0 && ((ObjectData *)o)->f30a != 9) {
            ((ObjectData *)o)->f39c = ((ObjectData *)o)->f30a;
            ((ObjectData *)o)->f390 = 9;
        }
        ((ObjectData *)o)->f394 = 2;
        return;
    }
    t2 = o->v20(0x1e);
    if (t2 != 0) {
        t3 = distance_xz((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x54)));
        if (t3 > 100.0f && ((((ObjectData *)o)->f3a4 & 1)) == 0 && ((ObjectData *)o)->f30a != 8) {
            ((ObjectData *)o)->f39c = ((ObjectData *)o)->f30a;
            ((ObjectData *)o)->f390 = 8;
            return;
L_8c108fa6:;
            t4 = o->v20(0x1e);
            if (t4 != 0) {
                t5 = call_8c04a52c(o, 0, ((ObjectData *)o)->f36c->f00 + 50.0f);
                {
                    unsigned short m = 0xffff;
                    if ((((ObjectData *)o)->f354 & 0xffff) == m) {
                        ((ObjectData *)o)->f354 = t5;
                    }
                }
                if ((((ObjectData *)o)->f354 & 0xffff) == 0xffff && ((((ObjectData *)o)->f3a4 & 1)) == 0 && ((ObjectData *)o)->f30a != 8) {
                    ((ObjectData *)o)->f39c = ((ObjectData *)o)->f30a;
                    ((ObjectData *)o)->f390 = 8;
                }
            }
        }
    }
}
