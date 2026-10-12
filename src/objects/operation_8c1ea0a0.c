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
extern void call_8c1e8e60(Object *, int, int);
void operation_8c1ea0a0(Object *o)
{
    int v1;
    v1 = (int)(((o->f570 & 4)) != 0);
    if (v1 != 0) {
        o->f570 &= -5;
        call_8c1e8e60(o, 1, 5);
    }
}
