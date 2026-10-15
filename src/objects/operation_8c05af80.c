typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct S_x22768 S_x22768;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x74];
    int fdc;
};
struct S_x22768 {
    Vector3 f00;
};
struct Arg1 {
    Vector3 f00;
};
struct S_vv1 {
    Vector3 f00;
};
extern void call_8c37f6f0(S_vv1 *, void *);
extern void rotate_scalar_pair(void *, void *, int);
void operation_8c05af80(Object *o, Arg1 *a1, int a2)
{
    S_vv1 *v1;
    *(Vector3 *)&((S_x22768 *)((int)o->fdc + 0x1c + a2 * 0x2c))->f00 = *(Vector3 *)&a1->f00;
    v1 = (S_vv1 *)((int)o->fdc + a2 * 0x2c);
    *(Vector3 *)&v1->f00 = *(Vector3 *)&a1->f00;
    call_8c37f6f0(v1, (void *)(((char *)o + 0x3c)));
    rotate_scalar_pair((void *)v1, (void *)((int)v1 + 8), (int)(-(int)(o->f64)));
}
