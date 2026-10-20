typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0x20];
    Arg0_64 *f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x236];
    float f328;
    char unknown32c[0xdc];
    float f408;
    char unknown40c[0x8];
    float f414;
    char unknown418[0x88];
    float f4a0;
    float f4a4;
};
extern float call_8c37eb0c(void *);
extern float call_8c38c154(void *);
extern void call_8c01c5f0(Object *);
extern void slide_and_dispatch_contact(void *, float, float, float);
void operation_8c094acc(Object *o, int a1)
{
    float *pa;
    float *pb;
    pa = (float *)((char *)o + 0x4a0);
    pb = (float *)((char *)o + 0x4a4);
    switch (a1) {
    case 4:
        o->ff0 = 0;
        o->f414 = o->f40 + o->f408;
        *pa = call_8c37eb0c((void *)(o->f64));
        *pb = call_8c38c154((void *)(o->f64));
        return;
    case 0:
        call_8c01c5f0(o);
        o->f414 = o->f40 + o->f408;
        o->f328 = o->f414;
        slide_and_dispatch_contact((void *)o, *pa, *pb, 0.2f);
        return;
    case 1:
    case 2:
    case 3:
    case 5:
        break;
    }
}
