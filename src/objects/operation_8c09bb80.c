typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv10 S_vv10;
typedef struct S_vv3 S_vv3;
struct Object {
    float tag;
    float f04;
};
struct S_vv3 {
    char unknown0[0x4];
    float f04;
};
struct S_vv10 {
    char unknown0[0x4];
    float f04;
};
int operation_8c09bb80(Object *o)
{
    S_vv3 *v3;
    float v6;
    S_vv10 *v10;
    v3 = (S_vv3 *)o;
    v6 = (float)o->tag;
    if (o->tag > 0.666666687f) {
        return !(((o->tag - 0.666666687f) * 3.0f) > o->f04) ? 6 : 7;
    }
    v10 = (S_vv10 *)v3;
    if (!(v6 > 0.333333343f)) {
        if (!((v3->f04 * 0.666666687f) > v6)) {
            return 0;
        }
        return !(v6 > ((v3->f04 - 1.0f) * -0.666666687f)) ? 1 : 2;
    }
    if (!(v6 > ((v10->f04 - 1.0f) * -0.666666687f))) {
        return 3;
    }
    return !((v10->f04 * 0.666666687f) > v6) ? 4 : 5;
}
