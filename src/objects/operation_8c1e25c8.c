typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    short f68;
    char unknown6a[0x6];
    int f70;
};
extern void call_8c04bd00(int);
void operation_8c1e25c8(Object *o)
{
    call_8c04bd00((int)(((char *)o + 0x8c)));
    o->f70 = (int)(((char *)o + 0x74));
    o->f68 &= -0x27;
}
