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
    char unknown30c[0x28];
    int f334;
    char unknown338[0x58];
    int f390;
    char unknown394[0x8];
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    int f3a8;
} ObjectData;
extern "C" void call_8c0c3128(Object *, float);
extern "C" float distance_xz(void *, void *);
extern "C" void request_actor_mode_zero_8c128b44(void *);
extern "C" void operation_8c127d88(Object *o)
{
    char *v23;
    int v6;
    int t1;
    int t2;
    float t3;
    float t4;
    t1 = o->v20(0x1e);
    if (t1 != 0) {
        call_8c0c3128(o, 250.0f);
    }
    if (((ObjectData *)o)->f30a != 0) {
        if (((ObjectData *)o)->f30a == 1) {
            goto L_8c127e4a;
        }
        if (((ObjectData *)o)->f30a != 8) {
            return;
        }
    }
    t2 = o->v20(0x1e);
    if (t2 == 0) {
        return;
    }
    if (((ObjectData *)o)->f334 != 0) {
        if (((((ObjectData *)o)->f3a4 & 1)) == 0 && ((ObjectData *)o)->f30a != 1) {
            ((ObjectData *)o)->f39c = ((ObjectData *)o)->f30a;
            ((ObjectData *)o)->f390 = 1;
        }
        ((ObjectData *)o)->f3a8 = 2;
        return;
    }
    t3 = distance_xz((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x54)));
    if (t3 > 100.0f) {
        if (((((ObjectData *)o)->f3a4 & 1)) != 0) {
            return;
        }
        if (((ObjectData *)o)->f30a == 8) {
            return;
        }
        ((ObjectData *)o)->f39c = ((ObjectData *)o)->f30a;
        ((ObjectData *)o)->f390 = 8;
        return;
    }
    request_actor_mode_zero_8c128b44((void *)o);
    return;
L_8c127e4a:;
    v23 = (char *)((ObjectData *)o)->f334;
    if (v23 != 0) {
        t4 = distance_xz((void *)(v23 + 0x3c), (void *)(((char *)o + 0x3c)));
        v6 = (int)((ObjectData *)o)->f3a8;
        if (v6 != 0) {
            if (v6 == 1) {
                goto L_8c127e84;
            }
            if (v6 == 2) {
                goto L_8c127eae;
            }
        } else {
            if (t4 > 1600.0f) {
                ((ObjectData *)o)->f3a8 = 1;
                goto L_8c127ec6;
L_8c127e84:;
                if (400.0f > t4) {
                    ((ObjectData *)o)->f3a4 &= -0x10001;
                    ((ObjectData *)o)->f3a8 = 0;
                } else {
                    if (t4 > 10000.0f) {
                        ((ObjectData *)o)->f3a8 = 2;
                        goto L_8c127ec6;
L_8c127eae:;
                        if (6400.0f > t4) {
                            ((ObjectData *)o)->f3a4 |= 0x10000;
                            ((ObjectData *)o)->f3a8 = 1;
                        }
                    }
                }
            }
        }
L_8c127ec6:;
        if (v6 == ((ObjectData *)o)->f3a8) {
            return;
        }
        if (((ObjectData *)o)->f3a8 != 0) {
            if (((ObjectData *)o)->f3a8 == 1) {
                goto L_8c127f00;
            }
            if (((ObjectData *)o)->f3a8 == 2) {
                goto L_8c127f0c;
            }
            return;
        }
        if (((((ObjectData *)o)->f3a4 & 1)) != 0) {
            return;
        }
        if (((ObjectData *)o)->f30a == 2) {
            return;
        }
        ((ObjectData *)o)->f39c = ((ObjectData *)o)->f30a;
        ((ObjectData *)o)->f390 = 2;
        return;
L_8c127f00:;
        ((ObjectData *)o)->f3a4 &= -0x10001;
        return;
L_8c127f0c:;
        ((ObjectData *)o)->f3a4 |= 0x10000;
        return;
    }
    if (((((ObjectData *)o)->f3a4 & 1)) == 0 && ((ObjectData *)o)->f30a != 8) {
        ((ObjectData *)o)->f39c = ((ObjectData *)o)->f30a;
        ((ObjectData *)o)->f390 = 8;
    }
}
