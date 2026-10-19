typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3e4];
    int f3e4;
};
extern int apply_contact_position(void *, void *);
int operation_8c090d48(Object *o, int a1)
{
    int t1;
    t1 = apply_contact_position((void *)o, (void *)a1);
    if (t1 == 0) {
        o->f3e4 &= -0x1000001;
    } else {
        o->f3e4 |= 0x1000000;
    }
    return (int)(t1);
}
