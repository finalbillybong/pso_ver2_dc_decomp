typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
struct Object {
    int tag;
};
struct S_vv2 {
    unsigned short f00;
    short f02;
};
void operation_8c1aab30(Object *o)
{
    S_vv2 *v2;
    int v1;
    int ff;
    o->tag = 0;
    v1 = (int)0;
    v2 = (S_vv2 *)((char *)o + 0x4);
    ff = 0xffff;
    while (0xa > v1) {
        v2->f00 = ff;
        v2->f02 = 0;
        v1 = (int)(v1 + 1);
        v2 = (S_vv2 *)((char *)v2 + 4);
    }
}
