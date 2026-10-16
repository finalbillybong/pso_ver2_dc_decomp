typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e8 S_g8c4db9e8;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x418];
    int f418;
    int f41c;
    int f420;
};
struct S_g8c4db9e8 {
    char unknown0[0x3207];
    char f3207;
};
struct S_vv1 {
    char unknown0[0x3204];
    short f3204;
    char f3206;
};
void operation_8c25f0d0(Object *o)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)*(S_g8c4db9e8 **)0x8c4db9e8;
    o->f418 = (*(S_g8c4db9e8 **)0x8c4db9e8)->f3207;
    o->f41c = v1->f3204;
    o->f420 = v1->f3206;
}
