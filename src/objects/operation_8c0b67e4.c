typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    short f20;
    short f22;
    Arg0_24 *f24;
};
extern void call_8c05fbf8(void *, void *, int, int);
void operation_8c0b67e4(Object *o)
{
    o->f22 += 1;
    if (o->f22 > o->f20) {
        call_8c05fbf8((void *)(o->f24), (void *)(((char *)o + 0x28)), 0, 0);
        o->f04 |= 1;
    }
}
