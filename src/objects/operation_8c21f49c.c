typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    short f00;
};
struct Object {
    int tag;
};
void operation_8c21f49c(Object *o, int a1, int a2, int a3, int a4, int a5)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)((char *)(&*(int *)((char *)&o->tag + (a3 << 1))) + 0x20);
    v1->f00 = a1;
    v1->f00 |= a2 << 8;
    v1->f00 |= a4 << 0xb;
    v1->f00 |= a5 << 0xc;
    o->tag |= 1;
}
