typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_70 Arg0_70;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Object {
    char unknown0[0x68];
    int f68;
    char unknown6c[0x4];
    Arg0_70 *f70;
};
extern S_L8c41cba0 g_8c41cba0;
extern void call_8c05fbf8(int, int, int, int);
extern void call_8c1e2bcc(void *);
void operation_8c1dfb18(Object *o)
{
    if ((((&g_8c41cba0)->f28 & 2)) != 0 && o->f70 != 0) {
        o->f68 &= -0x41;
        call_8c05fbf8(0x50016, 0, 0, 0);
        call_8c1e2bcc((void *)(o->f70));
    }
}
