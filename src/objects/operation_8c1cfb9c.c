typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    int f3c;
};
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
};
extern S_L8c41cba0 g_8c41cba0;
extern void call_8c0a5bf8(void);
extern void call_8c1cfd4c(void);
void operation_8c1cfb9c(Object *o)
{
    o->f3c = 0x15;
    if ((((&g_8c41cba0)->f20 & 0x10000)) != 0) {
        call_8c0a5bf8();
    } else {
        call_8c1cfd4c();
    }
    o->f3c |= 0x10;
}
