typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    short f28;
    char unknown2a[0x84a];
    short f874;
};
extern int g_8c4621a8;
extern void call_8c3ca534(int, void *, int);
extern int g_8c2e2130[];
void operation_8c01103c(Object *o)
{
    o->f874 = o->f28;
    if (o->f28 >= 0x80) {
        g_8c4621a8 = 1;
        call_8c3ca534(0x4113, (void *)(&o->f874), 0);
        g_8c4621a8 = 0;
        *(int *)((char *)(int *)((char *)g_8c2e2130 + -0x200) + (o->f28 << 2)) = 0;
    }
}
