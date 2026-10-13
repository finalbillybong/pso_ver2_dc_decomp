typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
    Arg0_28 *f28;
};
extern int operation_8c1571f4(void *);
extern int operation_8c1d03b4(void *);
extern void call_8c20978c(int, int);
void operation_8c1a9838(Object *o)
{
    int t1;
    int t2;
    t1 = operation_8c1571f4((void *)(o->f24));
    t2 = operation_8c1d03b4((void *)(o->f28));
    switch (t1) {
    case 0:
        call_8c20978c(t2, -2);
        return;
    case 1:
        call_8c20978c((int)(t2 << 1), -3);
        return;
    case 2:
        call_8c20978c((int)(t2 << 2), -5);
        return;
    case 4:
        call_8c20978c((int)(t2 << 3), -9);
        return;
    case 3:
        call_8c20978c((int)(t2 << 8), -0x301);
        return;
    case 5:
        call_8c20978c((int)(t2 << 0xa), -0x1c01);
        return;
    }
}
