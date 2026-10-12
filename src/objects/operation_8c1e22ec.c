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
    char unknown74[0x34];
    int fa8;
    int fac;
};
extern void call_8c04bd00(int);
void operation_8c1e22ec(Object *o)
{
    call_8c04bd00((int)(((char *)o + 0x74)));
    call_8c04bd00((int)(((char *)o + 0x8c)));
    o->f70 = (int)(((char *)o + 0x74));
    o->f68 = 0;
    o->fa8 = 0;
    o->fac = 0;
}
