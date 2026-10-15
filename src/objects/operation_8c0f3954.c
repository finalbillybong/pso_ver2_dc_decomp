typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
struct Object {
    Arg0_0 *tag;
    char unknown4[0x4];
    int f08;
    int f0c;
};
int operation_8c0f3954(Object *o, int a1)
{
    char *v1;
    if (o->f08 < o->f0c) {
        *(int *)((char *)((char *)o->tag + 0x0) + (o->f08 << 2)) = a1;
        v1 = (char *)o->f08;
        o->f08 += 1;
        return (int)(v1);
    }
    return -1;
}
