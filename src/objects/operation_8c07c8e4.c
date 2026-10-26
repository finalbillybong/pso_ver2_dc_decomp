typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
struct Object {
    Arg0_0 *tag;
    int f04;
    int f08;
};
void operation_8c07c8e4(Object *o, int a1)
{
    if (a1 >= 0 && o->f08 > a1) {
        o->f08 -= 1;
        *(int *)((char *)((char *)o->tag + 0x0) + (a1 << 2)) = (int)(*(int *)((char *)((char *)o->tag + 0x0) + (o->f08 << 2)));
        *(int *)((char *)((char *)o->tag + 0x0) + (o->f08 << 2)) = (int)(o->f04);
    }
}
