typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
    char unknown6a[0x6];
    int f70;
    char unknown74[0x10];
    int f84;
};
extern void call_8c04bd00(void *);
void operation_8c1e2b50(Object *o)
{
    unsigned short v2;
    int v1;
    v2 = o->f68;
    v1 = v2;
    if (((v1 & 4)) != 0) {
        o->f68 = (int)(v2) & -5;
        return;
    }
    if (((v1 & 2)) != 0) {
        call_8c04bd00((void *)(((char *)o + 0x8c)));
        o->f70 = (int)(((char *)o + 0x74));
        o->f68 &= -0x27;
        return;
    }
    if (o->f84 != 0) {
        call_8c04bd00((void *)(((char *)o + 0x74)));
        return;
    }
    o->f68 = (int)(v2) | 0x40;
}
