typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x34];
    char f68;
    char f69;
};
extern void call_8c0dc1a4(int, void *, int);
void operation_8c22bcf0(Object *o, int a1)
{
    call_8c0dc1a4(a1, *(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f69 << 2)), o->f68 & 1);
}
