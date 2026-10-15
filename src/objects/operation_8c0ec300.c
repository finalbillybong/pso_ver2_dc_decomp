typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e8 S_g8c4db9e8;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x3204];
    short f3204;
    char f3206;
    char f3207;
};
struct Object {
    char unknown0[0x30];
    int f30;
    int f34;
    int f38;
};
void operation_8c0ec300(Object *o)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)*(S_g8c4db9e8 **)0x8c4db9e8;
    v1->f3207 = o->f30;
    v1->f3204 = o->f34;
    v1->f3206 = o->f38;
}
