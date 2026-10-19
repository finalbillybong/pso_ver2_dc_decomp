typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d9960 S_g8c4d9960;
typedef struct S_g8c4d9960_42c S_g8c4d9960_42c;
typedef struct S_g8c4d9960_430 S_g8c4d9960_430;
class Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
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
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2e];
    int f34;
    int f38;
    Block_p0_3c f3c;
    char unknown48[0xa8];
    short ff0;
    char unknownf2[0x3e];
    int f130;
    char unknown134[0x4c];
    float f180;
    char unknown184[0x186];
    short f30a;
    char unknown30c[0x6c];
    int f378;
    char unknown37c[0x4];
    float f380;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
};
struct S_g8c4d9960 {
    char unknown0[0x42c];
    S_g8c4d9960_42c *f42c;
    S_g8c4d9960_430 *f430;
};
struct S_g8c4d9960_430 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x4];
    int f0c;
};
struct S_g8c4d9960_42c {
    char unknown0[0x8];
    int f08;
    char unknownc[0xc];
    int f18;
};
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c12964c(void *);
extern "C" void operation_8c1296f4(void *);
extern "C" void call_8c129788(Object *);
extern "C" void call_8c027090(Object *);
extern "C" void operation_8c162e94(void *, int, int);
extern "C" void operation_8c09e6b4(void *);
extern "C" void operation_8c129160(Object *o)
{
    Frame frame;
    int v4;
    int v21;
    int v23;
    int t1;
    int t2;
    t1 = o->v11(300.0f, 20.0f);
    if (t1 != 0) {
        ((ObjectData *)o)->f34 &= -0x8000001;
    } else {
        ((ObjectData *)o)->f34 |= 0x8000000;
    }
    t2 = operation_8c03d338();
    if (t2 == 0) {
        if (((ObjectData *)o)->f378 == 0) {
            if (((ObjectData *)o)->f30a != 0) {
                if (((ObjectData *)o)->f30a == 1) {
                    goto L_8c1291c2;
                }
                if (((ObjectData *)o)->f30a == 2) {
                    goto L_8c1291cc;
                }
                v4 = (int)0x30a;
            } else {
                operation_8c12964c((void *)o);
                goto L_8c1291f6;
L_8c1291c2:;
                operation_8c1296f4((void *)o);
                goto L_8c1291f6;
L_8c1291cc:;
                call_8c129788(o);
                goto L_8c1291f6;
                v4 = (int)/* ? clobbered */ 0;
            }
            *(short *)((char *)((char *)o + 0x0) + (v4)) = 0;
            ((ObjectData *)o)->ff0 = *(short *)((char *)((char *)o + 0x0) + (v4));
            ((ObjectData *)o)->f180 = -1.0f;
            operation_8c12964c((void *)o);
L_8c1291f6:;
            ((ObjectData *)o)->f180 += 1.0f;
            if (((((ObjectData *)o)->f34 & 0x8000000)) != 0) {
                goto L_8c129286;
            }
            call_8c027090(o);
        } else {
            if (!(((ObjectData *)o)->f380 > 0.2f)) {
                ((ObjectData *)o)->f3c.f04 -= 0.025f;
                if (((ObjectData *)o)->f3c.f04 > (((ObjectData *)o)->f380 * -10.0f)) {
                    goto L_8c129286;
                }
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
                (&frame)->f00.f04 += 10.0f;
                operation_8c162e94((void *)o, (int)(&frame), 1);
                operation_8c09e6b4((void *)o);
                ((ObjectData *)o)->f04 |= 1;
            } else {
                ((ObjectData *)o)->f380 -= 0.025f;
            }
        }
    }
L_8c129286:;
    v21 = (int)(*(S_g8c4d9960 **)0x8c4d9960)->f430->f04;
    if (((ObjectData *)o)->f130 == v21) {
        ((ObjectData *)o)->f38 = (int)((*(S_g8c4d9960 **)0x8c4d9960)->f42c->f08);
    }
    v23 = (int)(*(S_g8c4d9960 **)0x8c4d9960)->f430->f0c;
    if (((ObjectData *)o)->f130 == v23) {
        ((ObjectData *)o)->f38 = (int)((*(S_g8c4d9960 **)0x8c4d9960)->f42c->f18);
    }
}
