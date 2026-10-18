typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
};
extern void call_8c12b77c(int, Object *, int);
void operation_8c09cb84(Object *o)
{
    if (!((*(int *)0x8c46ec24 + o->f02) > 0x20000)) {
        call_8c12b77c((int)(*(int *)0x8c46ec20 + *(int *)0x8c46ec24), o, o->f02);
        *(int *)0x8c46ec24 += o->f02;
    }
}
