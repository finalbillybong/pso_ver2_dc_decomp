typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    short f00;
};
struct Object {
    char unknown0[0x2c];
    short f2c;
    short f2e;
};
char operation_8c010778(Object *o)
{
    S_vv1 *v1;
    short v2;
    char v3;
    v1 = (S_vv1 *)&o->f2e;
    v2 = (short)v1->f00;
    o->f2e = v2 + 1;
    v3 = (char)*(char *)((char *)((char *)o + 0x74) + ((short)v2));
    if (v1->f00 >= o->f2c) {
        o->f2e = 0;
        o->f2c = 0;
    }
    return v3;
}
