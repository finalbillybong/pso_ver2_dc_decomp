typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c286440 S_g8c286440;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x2aa];
    int f39c;
    int f3a0;
    int f3a4;
    char unknown3a8[0x28];
    int f3d0;
};
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
};
extern void refresh_follow_effect_8c0129f4(void *);
extern int call_8c04a52c(Object *, Frame *, float);
extern float call_8c37eb0c(void *);
extern float call_8c38c154(void *);
extern void call_8c05fbf8(void *, void *, int, int);
void operation_8c15feac(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    float t2;
    float t3;
    o->f3a0 = 1;
    o->f3a4 = 0;
    refresh_follow_effect_8c0129f4((void *)o);
    v1 = (int)7;
    o->fe8 = (unsigned int)o->fe8 >> 1 << 1;
    t1 = call_8c04a52c(o, (Frame *)((&frame)), 500.0f);
    if ((unsigned short)t1 != 0xffff) {
        t2 = call_8c37eb0c((void *)(o->f64));
        t3 = call_8c38c154((void *)(o->f64));
        if (0.0f > ((&frame)->f00 * t2 + (&frame)->f08 * t3)) {
            v1 = (int)6;
        }
    }
    o->ff0 = v1;
    call_8c05fbf8((void *)(*(S_g8c286440 **)((char *)0x8c286440 + (o->f39c << 2))), (void *)(((char *)o + 0x3c)), 0, 0);
    o->f3d0 = 0xa4;
}
