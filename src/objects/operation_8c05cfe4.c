typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0x98];
    Arg0_dc *fdc;
    char unknowne0[0x248];
    float f328;
};
struct Arg0_dc {
    char unknown0[0x30];
    float f30;
};
extern void operation_8c05af80(void *, void *, int);
void operation_8c05cfe4(Object *o)
{
    o->fdc->f30 = o->f328 - o->f40;
    operation_8c05af80((void *)o, (void *)(((char *)o + 0x3f8)), 0);
}
