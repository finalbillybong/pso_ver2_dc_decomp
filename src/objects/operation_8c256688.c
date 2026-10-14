typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_380 Arg0_380;
struct Object {
    char unknown0[0x20];
    short f20;
};
extern void operation_8c0ddc38(short, int, int);
void operation_8c256688(Object *o, int a1)
{
    if (3 > a1 && *(int *)((char *)((char *)o + 0x380) + (a1 << 2)) != 0) {
        operation_8c0ddc38(o->f20, (int)(*(Arg0_380 **)((char *)((char *)o + 0x380) + (a1 << 2))), 0xa);
    }
}
