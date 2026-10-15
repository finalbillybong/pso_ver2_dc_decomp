typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x350];
    int f350;
};
extern void operation_8c05426c(void *, int, int);
extern void operation_8c03be34(void *);
void operation_8c1f10cc(Object *o)
{
    *(int *)((char *)o + 0x350) &= -0x200001;
    o->f350 &= -6;
    operation_8c05426c((void *)o, 0, 1);
    operation_8c03be34((void *)(((char *)o + 0x58c)));
}
