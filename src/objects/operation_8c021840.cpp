typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
    virtual int v12(float, float, float);
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d0];
    short f308;
    char unknown30a[0x2];
    short f30c;
    char unknown30e[0x42];
    int f350;
    char unknown354[0x870];
    int fbc4;
} ObjectData;
extern "C" void call_8c391cc4(void);
extern "C" void call_8c013c58(Object *);
extern "C" int operation_8c02b1c4(void *);
extern "C" void call_8c02ae70(Object *);
extern "C" void call_8c0219c4(Object *, int);
extern "C" void operation_8c03bdcc(void *);
extern "C" void operation_8c026e24(void *);
extern "C" void notify_children_8c021c4c(void *);
extern "C" void operation_8c03be04(void *);
extern "C" void operation_8c013e74(void);
extern "C" void operation_8c021840(Object *o)
{
    int v1;
    int v2;
    int v4;
    int v3;
    float v6;
    int v7;
    int t1;
    int t2;
    if (((((ObjectData *)o)->f34 & 0x2000000)) == 0) {
        v1 = (int)(((ObjectData *)o)->fbc4 == 0);
        if (v1 != 0) {
            v2 = (int)(((ObjectData *)o)->f350 & 4);
            v3 = (int)(v2 != 0);
            if (v3 != 0) {
                v4 = (int)(v2 != 0);
                if (v4 == 0) {
                    goto L_8c021940;
                }
                if (((ObjectData *)o)->f30c != 0) {
                    goto L_8c021940;
                }
                v2 = (int)((ObjectData *)o)->f30c;
            }
            t2 = o->v12(150.0f, 400.0f, 20.0f);
            v6 = (float)(float)t2;
            if (v6 != 0.0f) {
                ((ObjectData *)o)->f34 &= -0x8000001;
                call_8c391cc4();
                call_8c013c58(o);
                t1 = operation_8c02b1c4((void *)o);
                if (t1 != 0) {
                    v7 = (int)(((ObjectData *)o)->f308 == 2);
                    if (v7 != 0) {
                        call_8c02ae70(o);
                        goto L_8c0218e0;
                    }
                }
                call_8c0219c4(o, (int)((int)v6));
L_8c0218e0:;
                operation_8c03bdcc((void *)(((char *)o + 0x58c)));
                operation_8c026e24((void *)o);
                notify_children_8c021c4c((void *)o);
                operation_8c03be04((void *)(((char *)o + 0x58c)));
                operation_8c013e74();
                return;
            }
            ((ObjectData *)o)->f34 |= 0x8000000;
            call_8c02ae70(o);
            operation_8c03bdcc((void *)(((char *)o + 0x58c)));
            operation_8c026e24((void *)o);
            notify_children_8c021c4c((void *)o);
            operation_8c03be04((void *)(((char *)o + 0x58c)));
            return;
        }
    }
L_8c021940:;
    call_8c02ae70(o);
    operation_8c03bdcc((void *)(((char *)o + 0x58c)));
    operation_8c026e24((void *)o);
    notify_children_8c021c4c((void *)o);
    operation_8c03be04((void *)(((char *)o + 0x58c)));
}
