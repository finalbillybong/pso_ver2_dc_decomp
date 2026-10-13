typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x42];
    int f48;
    char unknown4c[0x10];
    int f5c;
};
extern void call_8c0b8450(void);
void operation_8c0b8404(Object *o)
{
    o->f48 += 1;
    call_8c0b8450();
    o->f5c += 1;
    if (o->f5c >= 0xf) {
        o->f5c = 0;
    }
    if (o->f48 > 0x6e) {
        o->f04 |= 1;
    }
}
