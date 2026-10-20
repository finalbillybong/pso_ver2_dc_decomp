typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    float f04;
};
struct S_c8c021ef8 {
    char unknown0[0x514];
    int f514;
    float f518;
};
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c03b374(Object *o)
{
    S_c8c021ef8 *t1;
    float v1;
    t1 = lookup_low_id((int)(o->f02));
    if (t1 != 0) {
        v1 = o->f04;
        t1->f514 |= 1;
        t1->f518 = v1;
    }
}
