typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1e0];
    unsigned char f1e0;
    unsigned char f1e1;
};
extern int operation_8c073e5c(void *, void *);
extern void call_8c1c9334(int, int);
extern void call_8c1c9340(int, int);
int operation_8c0e85dc(Object *o, int a1)
{
    int t1;
    t1 = operation_8c073e5c((void *)o, (void *)a1);
    if (t1 == 1) {
        call_8c1c9334(a1, (int)(o->f1e0));
        call_8c1c9340(a1, (int)(o->f1e1));
        return 1;
    }
    return 0;
}
