typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x568];
    int f568;
    char unknown56c[0x4];
    int f570;
};
extern void call_8c1e8e60(Object *, int, int);
void operation_8c1e9820(Object *o)
{
    int v1;
    v1 = (int)(((o->f570 & 4)) != 0);
    if (v1 != 0) {
        o->f570 &= -5;
        o->f568 = 0;
        call_8c1e8e60(o, 1, 5);
    }
}
