typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x114];
    int f114;
};
struct Frame {
    Vector3 f00;
};
extern Vector3 g_8c317540;
extern void operation_8c05b9f4(int, int, int, int);
void operation_8c1675d0(Object *o)
{
    Frame frame;
    if (((o->f114 & 1)) != 0) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c317540;
        operation_8c05b9f4((int)(((char *)o + 0x3c)), (int)(((char *)o + 0x104)), 0, (int)(&frame));
    }
}
