typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
struct Object {
    char unknown0[0x38];
    int f38;
    char unknown3c[0x1f8];
    int f234;
};
extern void operation_8c23cf18(int, int, int, int);
void operation_8c23cda8(Object *o)
{
    int v1;
    v1 = (int)*(int *)0x8c44be04;
    if (o->f234 != v1 && o->f38 != 0) {
        o->f234 = (int)(v1);
        if (v1 != 0 && v1 != 0xf) {
            operation_8c23cf18((int)(*(S_g8c44be9c **)0x8c44be9c), (int)o, 1, 0x1ae);
            operation_8c23cf18((int)(*(S_g8c44be9c **)0x8c44be9c), (int)o, 2, 0x1ae);
        }
    }
}
