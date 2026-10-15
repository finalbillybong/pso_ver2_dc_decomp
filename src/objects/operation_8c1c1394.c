typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_ac Arg0_ac;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x36];
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x2c];
    float f94;
    float f98;
    int f9c;
    int fa0;
    int fa4;
    int fa8;
    Arg0_ac *fac;
};
struct Frame {
    Block_frame_0 f00;
};
extern int call_8c1c11a8(Object *);
extern int call_8c05fd7c(int, Object *, void *, int, int);
extern void emit_control_60320(int, int, int);
extern int create_effect_7708(void *, int, int);
extern float call_8c37eb0c(void *);
extern float call_8c38c154(void *);
extern void call_8c0a7608(void *, Frame *);
void operation_8c1c1394(Object *o)
{
    Frame frame;
    char *v181;
    float v138;
    int t1;
    int t2;
    int t3;
    float t4;
    float t5;
    o->f94 += o->f98;
    t1 = call_8c1c11a8(o);
    if (t1 == 0) {
        o->f04 |= 1;
    }
    v181 = (char *)o->f9c;
    if ((int)(v181) == 1 && !(15.5f > o->f94) && !(o->f94 > 35.5f)) {
        goto L_8c1c1400;
    }
    if ((int)(v181) == 2 && !(15.0f > o->f94) && !(o->f94 > 35.0f)) {
L_8c1c1400:;
        if (o->fa0 == 4) {
            call_8c05fd7c(0x40002, o, (void *)(&o->f3c), 0, 0);
        } else {
            if (o->fa0 == 0) {
                t2 = call_8c05fd7c(0x40001, o, (void *)(&o->f3c), 0, 0);
                emit_control_60320(t2, -0x200, 0);
            } else {
                call_8c05fd7c(0x40001, o, (void *)(&o->f3c), 0, 0);
            }
        }
    }
    if (*(int *)0x8c4e2ca8 != 0) {
        o->fa4 -= 0xa;
        if (!(o->fa4 >= 0)) {
            o->fa4 += 0x100;
        }
        o->fa8 += 1;
        if (o->fa8 >= 0x28) {
            o->fa8 = 0;
        }
        if (o->fac == 0) {
            t3 = create_effect_7708((void *)(&o->f3c), 0x8a, 0x40);
            o->fac = (Arg0_ac *)t3;
        }
        if (o->fac != 0) {
            if (o->fa0 == 0) {
                v138 = (float)20.0f;
            } else {
                v138 = (float)10.0f;
            }
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
            t4 = call_8c37eb0c((void *)(o->f64));
            (&frame)->f00.f00 -= v138 * t4;
            t5 = call_8c38c154((void *)(o->f64));
            (&frame)->f00.f08 -= v138 * t5;
            call_8c0a7608((void *)(o->fac), (Frame *)((&frame)));
        }
    }
}
