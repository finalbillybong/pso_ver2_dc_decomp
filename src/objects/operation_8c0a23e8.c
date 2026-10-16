typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c3032d8 S_g8c3032d8;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0xa0];
    float fa0;
    char unknowna4[0x24];
    float fc8;
    char unknowncc[0x4];
    float fd0;
    float fd4;
};
struct S_vv1 {
    char unknown0[0x3c];
    int f3c;
};
extern void adjust_vector_scaled(void *, void *, float);
void operation_8c0a23e8(Object *o)
{
    S_vv1 *v1;
    adjust_vector_scaled((void *)(((char *)o + 0x90)), (void *)(((char *)o + 0xb8)), o->fd0);
    v1 = (S_vv1 *)*(S_g8c3032d8 **)((char *)0x8c3032d8 + (*(unsigned char *)0x8c46efc8 << 2));
    if (v1 != 0 && ((v1->f3c & 0x10)) == 0) {
        o->fa0 = o->fc8;
    }
    adjust_vector_scaled((void *)(((char *)o + 0x9c)), (void *)(((char *)o + 0xc4)), o->fd4);
}
