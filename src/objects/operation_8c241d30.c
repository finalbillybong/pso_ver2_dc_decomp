typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011214 S_c8c011214;
typedef struct S_c8c011214_4 S_c8c011214_4;
typedef struct Object Object;
struct Object {
    char unknown0[0xf4];
    float ff4;
    float ff8;
    float ffc;
};
struct S_c8c011214 {
    char unknown0[0x4];
    S_c8c011214_4 *f04;
};
struct S_c8c011214_4 {
    float f00;
    float f04;
    float f08;
};
extern S_c8c011214 *call_8c011214(int, int, int);
void operation_8c241d30(Object *o)
{
    S_c8c011214 *t1;
    t1 = call_8c011214((int)((char *)o + 0x3c), (int)&o->ff4, 0x100);
    if (t1 != 0) {
        o->ff4 = t1->f04->f00;
        o->ff8 = t1->f04->f04;
        o->ffc = t1->f04->f08;
    }
}
