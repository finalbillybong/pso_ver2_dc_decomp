typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x10];
    int f10;
};
struct Object {
    char unknown0[0x140];
    int f140;
};
extern int operation_8c073e5c(void *, void *);
int operation_8c1033b0(Object *o, Arg1 *a1)
{
    int t1;
    t1 = operation_8c073e5c((void *)o, (void *)a1);
    if (t1 == 1) {
        a1->f10 = (int)(o->f140);
        return 1;
    }
    return 0;
}
