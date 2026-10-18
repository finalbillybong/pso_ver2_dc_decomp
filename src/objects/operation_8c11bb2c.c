typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x358];
    int f390;
};
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c11bb2c(Object *o)
{
    switch (o->f390) {
    case 1:
    case 2:
        return;
    default:
        o->f34 &= -0x201;
        call_8c05fbf8(0x30034, (void *)(((char *)o + 0x3c8)), 0, 0);
        call_8c05fbf8(0x30033, (void *)(((char *)o + 0x3e0)), 0, 0);
        break;
    }
}
