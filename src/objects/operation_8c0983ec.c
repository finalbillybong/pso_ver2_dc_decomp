typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c300de0 S_g8c300de0;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x4];
    int f30;
    int f34;
};
extern void call_8c05fbf8(int, int, int, int);
extern void create_related_object_8c0986f4(void *, int);
void operation_8c0983ec(Object *o)
{
    call_8c05fbf8(0x50001, 0, 0, 0);
    o->f30 = 1;
    create_related_object_8c0986f4((void *)o, (int)(*(S_g8c300de0 **)((char *)0x8c300de0 + (*(int *)((char *)((char *)o->f28 + 0x0) + (o->f34 << 2)) * 0x14))));
}
