typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011290 S_c8c011290;
typedef struct S_c8c011290_4 S_c8c011290_4;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    Vector3 f20;
};
struct S_c8c011290 {
    char unknown0[0x4];
    S_c8c011290_4 *f04;
};
struct S_c8c011290_4 {
    Vector3 f00;
};
extern S_c8c011290 *call_8c011290(int, int);
void operation_8c08f330(Object *o)
{
    S_c8c011290 *t1;
    t1 = call_8c011290((int)&o->f20, 0x16ef);
    if (t1 != 0) {
        o->f20 = t1->f04->f00;
    }
}
