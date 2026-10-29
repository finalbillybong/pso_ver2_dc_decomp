typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_20_3b8 Arg0_20_3b8;
typedef struct S_vv1 S_vv1;
typedef struct S_vv13 S_vv13;
typedef struct S_vv2 S_vv2;
typedef struct S_vv5 S_vv5;
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
    virtual void v13(int);
};
typedef struct ObjectData {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x10];
    int f34;
    char unknown38[0x24];
    float f5c;
    char unknown60[0x28];
    int f88;
    int f8c;
    int f90;
    char unknown94[0xc];
    int fa0;
} ObjectData;
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct S_vv2 {
    float f00;
    float f04;
    float f08;
};
struct S_vv1 {
    float f00;
    float f04;
    float f08;
};
struct S_vv5 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d2];
    short f30a;
};
struct Arg0_20 {
    char unknown0[0x64];
    int f64;
    char unknown68[0x350];
    Arg0_20_3b8 *f3b8;
};
struct S_vv13 {
    char unknown0[0x45c];
    unsigned short f45c;
    char unknown45e[0x2];
    float f460;
};
extern "C" float call_8c37e480(Frame *);
extern "C" int step_angle_scaled(int, int, int);
extern "C" void operation_8c0a681c(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    S_vv2 *v2;
    int v3;
    S_vv5 *v5;
    int v6;
    int v11;
    S_vv13 *v13;
    int v23;
    int v12;
    int t1;
    int t2;
    int t3;
    float t4;
    ObjectData *pm5;
    Arg0_20 *pm6;
    int pm8;
    v1 = (S_vv1 *)((char *)((ObjectData *)o)->f20 + 0x48);
    pm6 = ((ObjectData *)o)->f20;
    v2 = (S_vv2 *)((char *)pm6 + 0x3c);
    if (v1 == 0) {
        return;
    }
    if (v2 == 0) {
        return;
    }
    (&frame)->f00 = v2->f00 - v1->f00;
    (&frame)->f04 = v2->f04 - v1->f04;
    (&frame)->f08 = v2->f08 - v1->f08;
    t4 = call_8c37e480((Frame *)((&frame)));
    v3 = (int)(0.5f <= t4);
    switch (((ObjectData *)o)->f8c) {
        case 0:
        if (v3 != 0) {
            ((ObjectData *)o)->f8c = 1;
        }
        v5 = (S_vv5 *)((ObjectData *)o)->f20;
        v6 = (int)v5->f34;
        if (((v6 & 0x100000)) == 0) {
            if (((v6 & 0x20)) == 0) {
                if (v5->f30a != 8) {
                    goto L_8c0a68c0;
                }
            }
        }
        ((ObjectData *)o)->f88 = 0;
    L_8c0a68c0:
        ;
        ((ObjectData *)o)->f88 += 1;
        if (!(((ObjectData *)o)->f88 > 0xfa)) {
            return;
        }
        pm5 = (ObjectData *)o;
        (pm5)->f8c = 2;
        return;
        case 1:
        ((ObjectData *)o)->f88 = 0;
        v11 = (int)((ObjectData *)o)->f90;
        if (((v11 & 1)) != 0) {
            if (((v11 & 0x10)) != 0) {
                ((ObjectData *)o)->f5c = 0.05f;
                t1 = step_angle_scaled((int)(((ObjectData *)o)->f34), (int)(((ObjectData *)o)->fa0), 0x16c);
                ((ObjectData *)o)->f34 = (int)t1;
                goto L_8c0a697e;
            }
            ((ObjectData *)o)->f5c = 0.67f;
            pm8 = 0x8000;
            o->v13(((ObjectData *)o)->f20->f64 + pm8);
            ((ObjectData *)o)->f34 = ((ObjectData *)o)->f20->f64 + 0x8000;
        } else {
            if (((v11 & 4)) != 0) {
                v12 = (int)2;
            } else {
                v12 = (int)5;
            }
            v6 = (int)0;
            v23 = v6;
            v13 = (S_vv13 *)((ObjectData *)o)->f20->f3b8;
            if (v13 != 0 && (0xffff & (int)v13->f45c) != 0xffff && !(v13->f460 > 4900.0f)) {
                v23 = (int)1;
            }
            if (v23 == 0) {
                t2 = step_angle_scaled((int)(((ObjectData *)o)->f34), (int)(((ObjectData *)o)->fa0), v12);
                ((ObjectData *)o)->f34 = (int)t2;
            }
        }
    L_8c0a697e:
        ;
        if (v3 != 0) {
            return;
        }
        ((ObjectData *)o)->f8c = 0;
        return;
        case 2:
        o->v13(((ObjectData *)o)->f20->f64 + 0x8000);
        t3 = step_angle_scaled((int)(((ObjectData *)o)->f34), (int)(((ObjectData *)o)->fa0), 3);
        ((ObjectData *)o)->f34 = (int)t3;
        if (v3 != 0) {
            ((ObjectData *)o)->f8c = 1;
            ((ObjectData *)o)->f88 = 0;
        }
    }
}
