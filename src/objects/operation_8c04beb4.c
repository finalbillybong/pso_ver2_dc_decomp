typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
struct Object {
    Arg0_0 *tag;
    int f04;
    char unknown8[0x8];
    int f10;
};
struct S_vv2 {
    short f00;
};
struct S_vv1 {
    unsigned short f00;
};
void operation_8c04beb4(Object *o)
{
    unsigned short *v2;
    unsigned short *v1;
    v2 = (unsigned short *)((char *)o->tag + (o->f04 << 1));
    if (*v2 != 0) {
        v1 = v2 + 1;
        do {
            *v2++ = *v1;
        } while (*v1++ != 0);
        o->f10 -= 1;
    }
}
