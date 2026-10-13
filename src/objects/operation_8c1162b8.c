typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
typedef struct Block_p0_20 {
    float f00;
    float f04;
    char unknown8[0x4];
} Block_p0_20;
struct Object {
    char unknown0[0x20];
    Block_p0_20 f20;
    char unknown2c[0x510];
    int f53c;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Block_p0_20 f3c;
};
extern void call_8c03ce84(void);
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c1162b8(Object *o)
{
    S_c8c021ef8 *t1;
    call_8c03ce84();
    *(char *)0x8c4d82a0 = 1;
    o->f53c = 0;
    t1 = lookup_low_id(0);
    if (t1 != 0) {
        o->f20 = t1->f3c;
        o->f20.f00 += 20.0f;
        o->f20.f04 += 20.0f;
    }
    o->f53c |= 4;
}
