typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x1c];
    float f1c;
    char unknown20[0x24];
    int f44;
};
struct S_vv4 {
    unsigned short f00;
    char unknown2[0x2];
    float f04;
};
void operation_8c0da1d4(Object *o)
{
    S_vv4 *v4;
    int v2;
    int v1;
    int k;
    o->f44 = 0;
    o->f1c = 0.0f;
    v1 = (int)&o->f44;
    k = 0xffff;
    for (v2 = 0; v2 < 0xa; v2++) {
        v4 = (S_vv4 *)(v1 + (v2 << 3) + 4);
        v4->f04 = 0.0f;
        v4->f00 = k;
    }
}
