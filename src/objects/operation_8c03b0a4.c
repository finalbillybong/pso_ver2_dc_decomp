typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
};
extern void call_8c03b0cc(Object *);
void operation_8c03b0a4(Object *o)
{
    int t1;
    t1 = ((int (*)(void))(((char *)o + 0x20)))();
    if (t1 != 0) {
        call_8c03b0cc(o);
    }
    o->f04 |= 1;
}
