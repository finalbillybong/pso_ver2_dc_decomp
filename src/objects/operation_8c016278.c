typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41cba0 S_g8c41cba0;
typedef struct Object Object;
struct S_g8c41cba0 {
    char unknown0[0x10];
    int f10;
};
struct Object {
    char unknown0[0x4];
    short f04;
};
extern int g_8c41bd04;
extern S_g8c41cba0 *g_8c41cba0;
extern void operation_8c180ae8(void);
extern void call_8c01c244(int);
extern void call_8c01c1a4(int);
void operation_8c016278(Object *o)
{
    if (((g_8c41cba0->f10 & 8)) == 0 && !(g_8c41bd04++ > 0xe10)) {
        return;
    }
    operation_8c180ae8();
    call_8c01c244(2);
    call_8c01c1a4(0x1b);
    o->f04 |= 1;
}
