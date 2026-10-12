typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x570];
    int f570;
};
extern void operation_8c05428c(void *, int, int);
extern void call_8c1e8e60(Object *, int, int);
void operation_8c1e9860(Object *o)
{
    int v1;
    v1 = (int)(((o->f570 & 4)) != 0);
    if (v1 != 0) {
        o->f570 &= -5;
        operation_8c05428c((void *)o, 0, 0x3800000);
        call_8c1e8e60(o, 1, 0);
    }
}
