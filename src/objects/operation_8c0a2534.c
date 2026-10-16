typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c3032d8 S_g8c3032d8;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x90];
    float f90;
    float f94;
    float f98;
    char unknown9c[0x4];
    float fa0;
    char unknowna4[0x14];
    float fb8;
    float fbc;
    float fc0;
    char unknownc4[0x4];
    float fc8;
    char unknowncc[0x8];
    float fd4;
    char unknownd8[0x14];
    float fec;
    float ff0;
    float ff4;
};
struct S_vv1 {
    char unknown0[0x3c];
    int f3c;
};
extern void adjust_vector_scaled(void *, void *, float);
void operation_8c0a2534(Object *o)
{
    S_vv1 *v1;
    o->f90 = o->fb8;
    o->f94 = o->fbc;
    o->f98 = o->fc0;
    o->fec = o->f90;
    o->ff0 = o->f94;
    o->ff4 = o->f98;
    v1 = (S_vv1 *)*(S_g8c3032d8 **)((char *)0x8c3032d8 + (*(unsigned char *)0x8c46efc8 << 2));
    if (v1 != 0 && ((v1->f3c & 0x10)) == 0) {
        o->fa0 = o->fc8;
    }
    adjust_vector_scaled((void *)(((char *)o + 0x9c)), (void *)(((char *)o + 0xc4)), o->fd4);
}
