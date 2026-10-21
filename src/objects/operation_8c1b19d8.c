typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_394 Arg0_394;
struct Object {
    char unknown0[0x394];
    Arg0_394 *f394;
    char unknown398[0x10];
    int f3a8;
    char unknown3ac[0x8];
    int f3b4;
    int f3b8;
    char unknown3bc[0x10];
    unsigned short f3cc;
};
extern float object_random_fraction(void *);
extern void operation_8c1ae0d8(void *, int);
void operation_8c1b19d8(Object *o, int a1, int a2)
{
    float v4;
    float v6;
    float t1;
    int v3;
    int k;
    if (9 > a1 || a1 > 0xc || 9 > a2 || a2 > 0xc) {
        return;
    }
    if (a1 > a2) {
        v3 = a2;
        a2 = a1;
        a1 = v3;
    }
    v4 = 1.0f;
    v4 = v4 / (float)(a2 - a1 + 1);
    v6 = v4;
    t1 = object_random_fraction((void *)o);
    while (a2 > a1) {
        if (v6 > t1) {
            break;
        }
        a1++;
        v6 += v4;
    }
    if (o->f394 != 0) {
        k = o->f3a8 >> 0xc & 0xf;
        operation_8c1ae0d8((void *)(o->f394), (int)(a1 & 0xf | k << 4 | k << 8 | (o->f3b4 & 0xf) << 0xc | (o->f3b8 & 0xf) << 0x10 | (o->f3cc & 0xffff & 0xf) << 0x14));
    }
}
