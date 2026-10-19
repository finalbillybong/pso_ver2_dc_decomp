typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_400 Arg0_400;
typedef struct Arg0_404 Arg0_404;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv13 S_vv13;
typedef struct S_vv16 S_vv16;
typedef struct S_vv21 S_vv21;
typedef struct S_vv8 S_vv8;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x2b2];
    int f3a4;
    char unknown3a8[0x50];
    int f3f8;
    char unknown3fc[0x4];
    Arg0_400 *f400;
    Arg0_404 *f404;
};
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct S_vv8 {
    char unknown0[0x394];
    int f394;
};
struct S_vv13 {
    char unknown0[0x394];
    int f394;
};
struct S_vv16 {
    char unknown0[0x394];
    int f394;
};
struct S_vv21 {
    char unknown0[0x394];
    int f394;
};
extern void refresh_follow_effect_8c0129f4(void *);
extern void operation_8c09e6d0(void *);
extern int call_8c04a52c(Object *, Frame *, float);
extern float call_8c37eb0c(void *);
extern float call_8c38c154(void *);
extern void call_8c05fbf8(int, void *, int, int);
extern void operation_8c15e8fc(void *);
extern void dispatch124_8c15e91c(void *);
void operation_8c11c5b0(Object *o)
{
    Frame frame;
    int v1;
    S_vv8 *v8;
    int v10;
    S_vv13 *v13;
    int v15;
    S_vv16 *v16;
    int v18;
    S_vv21 *v21;
    int v23;
    int t1;
    float t2;
    float t3;
    o->f3a4 = 0xa4;
    refresh_follow_effect_8c0129f4((void *)o);
    operation_8c09e6d0((void *)o);
    v1 = (int)5;
    t1 = call_8c04a52c(o, (Frame *)((&frame)), 200.0f);
    if ((unsigned short)t1 != 0xffff) {
        t2 = call_8c37eb0c((void *)(o->f64));
        t3 = call_8c38c154((void *)(o->f64));
        if (0.0f > ((&frame)->f00 * t2 + (&frame)->f08 * t3)) {
            v1 = (int)4;
        }
    }
    o->ff0 = v1;
    call_8c05fbf8(0x30036, (void *)(((char *)o + 0x3c8)), 0, 0);
    call_8c05fbf8(0x30035, (void *)(((char *)o + 0x3e0)), 0, 0);
    if (o->f3f8 != 0) {
        v8 = (S_vv8 *)o->f400;
        v10 = (int)1;
        if (v8->f394 != 7 && v8->f394 != 8) {
            v10 = (int)0;
        }
        if (v10 == 0) {
            operation_8c15e8fc((void *)v8);
        }
        v13 = (S_vv13 *)o->f404;
        v15 = (int)1;
        if (v13->f394 != 7 && v13->f394 != 8) {
            v15 = (int)0;
        }
        if (v15 != 0) {
            return;
        }
        operation_8c15e8fc((void *)v13);
        return;
    }
    v16 = (S_vv16 *)o->f400;
    v18 = (int)1;
    if (v16->f394 != 7 && v16->f394 != 8) {
        v18 = (int)0;
    }
    if (v18 == 0) {
        dispatch124_8c15e91c((void *)v16);
    }
    v21 = (S_vv21 *)o->f404;
    v23 = (int)1;
    if (v21->f394 != 7 && v21->f394 != 8) {
        v23 = (int)0;
    }
    if (v23 == 0) {
        dispatch124_8c15e91c((void *)v21);
    }
}
