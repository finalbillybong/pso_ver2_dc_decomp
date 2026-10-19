typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x40];
    float f40;
    float f44;
    char unknown48[0x8];
    float f50;
    float f54;
    char unknown58[0x10];
    short f68;
    char unknown6a[0x6];
    int f70;
};
extern void call_8c04bc48(void *, int, int);
void operation_8c1e2110(Object *o, int a1, int a2)
{
    int v14;
    if (a2 == 0) {
        o->f40 = 100000.0f;
        o->f44 = 44.0f;
    } else {
        o->f40 = (float)(unsigned int)a1 + 18.0f + 0.1f;
        o->f44 = (float)(unsigned int)(a2 * 0x14) + 26.0f;
    }
    o->f50 = o->f40;
    o->f54 = o->f44;
    call_8c04bc48((void *)(((char *)o + 0x74)), a1, a2);
    o->f70 = (int)(((char *)o + 0x74));
    v14 = (int)0;
    o->f68 = v14;
}
