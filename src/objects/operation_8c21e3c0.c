typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x30];
    int f34;
};
extern void normalize_rectangle_fields(void *, float, float);
void operation_8c21e3c0(Object *o, int a1)
{
    if (a1 == 0xe) {
        o->tag |= 2;
        return;
    }
    o->tag &= -3;
    if (0xa > a1) {
        o->f34 = 1;
    } else {
        o->f34 = 2;
    }
    normalize_rectangle_fields((void *)o, *(float *)((char *)0x8c2e1850 + (a1 << 3)), *(float *)((char *)((char *)0x8c2e1850 + (a1 << 3)) + 0x4));
}
