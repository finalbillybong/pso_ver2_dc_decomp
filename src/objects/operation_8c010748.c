typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Frame {
    short f00;
    char unknown2[0x2];
};
struct Object {
    char unknown0[0x26];
    short f26;
};
struct S_vv1 {
    unsigned char f00;
    unsigned char f01;
};
void operation_8c010748(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    (&frame)->f00 = a1;
    v1 = (S_vv1 *)(&frame);
    o->f26 = v1->f01 + (v1->f00 << 8);
}
