typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
    int f24;
    float f28;
};
struct S_vv4 {
    char unknown0[0xc];
    int f0c;
};
void operation_8c103ce4(Object *o)
{
    S_vv4 *v4;
    int v3;
    int v2;
    o->f28 -= 0.1f;
    if (!(o->f28 > 0.0f)) {
        o->f28 = 0.0f;
        o->f04 |= 1;
    }
    v2 = (int)(int)(o->f28 * 255.0f);
    v3 = (int)0;
    v4 = (S_vv4 *)o->f20;
    while (o->f24 > v3) {
        v4->f0c = v2 << 0x18 | 0x101080;
        v3 = (int)(v3 + 1);
        v4 = (S_vv4 *)((char *)v4 + 16);
    }
}
