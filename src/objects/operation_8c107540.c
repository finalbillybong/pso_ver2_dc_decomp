typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct Object {
    char unknown0[0x2c];
    float f2c;
    char unknown30[0x8];
    Arg0_38 *f38;
};
extern int call_8c12b944(void);
extern float call_8c37eb0c(int);
extern float call_8c38c154(int);
extern void call_8c3bdf60(Frame *, void *);
extern void call_8c0a7608(void *, Frame *);
void operation_8c107540(Object *o)
{
    Frame frame;
    int v1;
    float t1;
    float t2;
    int t3;
    t3 = call_8c12b944();
    v1 = (int)(int)((float)t3 / 32768.0f * 65536.0f);
    t1 = call_8c37eb0c(v1);
    (&frame)->f00 = o->f2c * t1;
    (&frame)->f04 = 0.0f;
    t2 = call_8c38c154(v1);
    (&frame)->f08 = o->f2c * t2;
    call_8c3bdf60((Frame *)((&frame)), (void *)(((char *)o + 0x20)));
    call_8c0a7608((void *)(o->f38), (Frame *)((&frame)));
}
