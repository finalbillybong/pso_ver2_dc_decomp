typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv61 S_vv61;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x64];
    short f98;
};
struct S_vv61 {
    int f00;
};
extern void call_8c0dc1a4(int, S_vv61 *, int);
void operation_8c1a28d8(Object *o, int a1)
{
    S_vv61 *v61;
    if (o->f98 >= 0 && ((*(int *)0x8c418244 & 0x10)) == 0) {
        v61 = (S_vv61 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f98 << 2));
        if (((v61->f00 & 1)) != 0) {
            call_8c0dc1a4(a1, v61, 1);
        }
    }
}
