typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    short f20;
    char unknown22[0x2];
    Vector3 f24;
    char unknown30[0xc];
    float f3c;
    char unknown40[0xc];
    int f4c;
};
struct S_c8c053d84 {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
void operation_8c0b3738(Object *o)
{
    S_c8c053d84 *t1;
    t1 = lookup_object_by_id((unsigned short)(o->f20));
    if (t1 == 0) {
        o->f04 |= 1;
    }
    if (t1 != 0) {
        o->f24 = t1->f3c;
    }
    o->f4c += 1;
    if (o->f4c >= 0xf) {
        o->f4c = 0;
    }
    if (!(o->f3c > 0.0f)) {
        o->f04 |= 1;
    }
}
