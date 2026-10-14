typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x39c];
    int f39c;
    char unknown3a0[0x10];
    int f3b0;
};
extern int operation_8c21a808(int);
void operation_8c1b67c0(Object *o)
{
    int t1;
    o->f39c = 0x1e;
    *(int *)0x8c4e22d0 = 1;
    t1 = operation_8c21a808((int)o);
    o->f3b0 = (int)(t1);
}
